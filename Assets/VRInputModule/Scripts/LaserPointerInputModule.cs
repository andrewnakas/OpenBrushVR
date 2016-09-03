using UnityEngine;
using UnityEngine.EventSystems;
using System.Collections.Generic;

namespace Wacki {

    public class LaserPointerInputModule : BaseInputModule {

        public static LaserPointerInputModule instance { get { return _instance; } }
        private static LaserPointerInputModule _instance = null;
                
        // storage class for controller specific data
        private class ControllerData {
            public PointerEventData pointerEvent;
            public GameObject currentPoint;
            public GameObject currentPressed;
            public GameObject currentDragging;
        };

        private Camera UICamera;
        private HashSet<IUILaserPointer> _controllers;
        // controller data
        private Dictionary<IUILaserPointer, ControllerData> _controllerData = new Dictionary<IUILaserPointer, ControllerData>();

        protected override void Awake()
        {
            base.Awake();

            if(_instance != null) {
                Debug.LogWarning("Trying to instantiate multiple LaserPointerInputModule.");
                DestroyImmediate(this.gameObject);
            }

            _instance = this;
        }

        protected override void Start()
        {
            base.Start();
            
            // Create a new camera that will be used for raycasts
            UICamera = new GameObject("UI Camera").AddComponent<Camera>();
            UICamera.clearFlags = CameraClearFlags.Nothing;
            UICamera.cullingMask = 0;
            UICamera.fieldOfView = 5;
            UICamera.nearClipPlane = 0.01f;

            // Find canvases in the scene and assign our custom
            // UICamera to them
            Canvas[] canvases = Resources.FindObjectsOfTypeAll<Canvas>();            
            foreach(Canvas canvas in canvases) {
                canvas.worldCamera = UICamera;
            }
        }

        public void AddController(IUILaserPointer controller)
        {
            _controllerData.Add(controller, new ControllerData());
        }

        public void RemoveController(IUILaserPointer controller)
        {
            _controllerData.Remove(controller);
        }

        protected void UpdateCameraPosition(IUILaserPointer controller)
        {
            UICamera.transform.position = controller.transform.position;
            UICamera.transform.rotation = controller.transform.rotation;
        }

        // clear the current selection
        public void ClearSelection()
        {
            if(base.eventSystem.currentSelectedGameObject) {
                base.eventSystem.SetSelectedGameObject(null);
            }
        }

        // select a game object
        private void Select(GameObject go)
        {
            ClearSelection();

            if(ExecuteEvents.GetEventHandler<ISelectHandler>(go)) {
                base.eventSystem.SetSelectedGameObject(go);
            }
        }

        public override void Process()
        {

            foreach(var pair in _controllerData) {
                IUILaserPointer controller = pair.Key;
                ControllerData data = pair.Value;

                // Test if UICamera is looking at a GUI element
                UpdateCameraPosition(controller);

                if(data.pointerEvent == null)
                    data.pointerEvent = new PointerEventData(eventSystem);
                else
                    data.pointerEvent.Reset();

                data.pointerEvent.delta = Vector2.zero;
                data.pointerEvent.position = new Vector2(UICamera.pixelWidth * 0.5f, UICamera.pixelHeight * 0.5f);
                //data.pointerEvent.scrollDelta = Vector2.zero;

                // trigger a raycast
                eventSystem.RaycastAll(data.pointerEvent, m_RaycastResultCache);
                data.pointerEvent.pointerCurrentRaycast = FindFirstRaycast(m_RaycastResultCache);
                m_RaycastResultCache.Clear();

                // make sure our controller knows about the raycast result
                // we add 0.01 because that is the near plane distance of our camera and we want the correct distance
                if(data.pointerEvent.pointerCurrentRaycast.distance > 0.0f)
                    controller.LimitLaserDistance(data.pointerEvent.pointerCurrentRaycast.distance + 0.01f);
                
                // stop if no UI element was hit
                //if(pointerEvent.pointerCurrentRaycast.gameObject == null)
                //return;

                // Send control enter and exit events to our controller
                var hitControl = data.pointerEvent.pointerCurrentRaycast.gameObject;
                if(data.currentPoint != hitControl) {
                    if(data.currentPoint != null)
                        controller.OnExitControl(data.currentPoint);

                    if(hitControl != null)
                        controller.OnEnterControl(hitControl);
                }

                data.currentPoint = hitControl;

                // Handle enter and exit events on the GUI controlls that are hit
                base.HandlePointerExitAndEnter(data.pointerEvent, data.currentPoint);

                if(controller.ButtonDown()) {
                    ClearSelection();

                    data.pointerEvent.pressPosition = data.pointerEvent.position;
                    data.pointerEvent.pointerPressRaycast = data.pointerEvent.pointerCurrentRaycast;
                    data.pointerEvent.pointerPress = null;

                    // update current pressed if the curser is over an element
                    if(data.currentPoint != null) {
                        data.currentPressed = data.currentPoint;

                        GameObject newPressed = ExecuteEvents.ExecuteHierarchy(data.currentPressed, data.pointerEvent, ExecuteEvents.pointerDownHandler);
                        if(newPressed == null) {
                            // some UI elements might only have click handler and not pointer down handler
                            newPressed = ExecuteEvents.ExecuteHierarchy(data.currentPressed, data.pointerEvent, ExecuteEvents.pointerClickHandler);
                            if(newPressed != null) {
                                data.currentPressed = newPressed;
                            }
                        }
                        else {
                            data.currentPressed = newPressed;
                            // we want to do click on button down at same time, unlike regular mouse processing
                            // which does click when mouse goes up over same object it went down on
                            // reason to do this is head tracking might be jittery and this makes it easier to click buttons
                            ExecuteEvents.Execute(newPressed, data.pointerEvent, ExecuteEvents.pointerClickHandler);
                        }

                        if(newPressed != null) {
                            data.pointerEvent.pointerPress = newPressed;
                            data.currentPressed = newPressed;
                            Select(data.currentPressed);
                        }

                        ExecuteEvents.Execute(data.currentPressed, data.pointerEvent, ExecuteEvents.beginDragHandler);
                        data.pointerEvent.pointerDrag = data.currentPressed;
                        data.currentDragging = data.currentPressed;
                    }
                }// button down end


                if(controller.ButtonUp()) {
                    if(data.currentDragging != null) {
                        ExecuteEvents.Execute(data.currentDragging, data.pointerEvent, ExecuteEvents.endDragHandler);
                        if(data.currentPoint != null) {
                            ExecuteEvents.ExecuteHierarchy(data.currentPoint, data.pointerEvent, ExecuteEvents.dropHandler);
                        }
                        data.pointerEvent.pointerDrag = null;
                        data.currentDragging = null;
                    }
                    if(data.currentPressed) {
                        ExecuteEvents.Execute(data.currentPressed, data.pointerEvent, ExecuteEvents.pointerUpHandler);
                        data.pointerEvent.rawPointerPress = null;
                        data.pointerEvent.pointerPress = null;
                        data.currentPressed = null;
                    }
                }


                

                // drag handling
                if(data.currentDragging != null) {
                    ExecuteEvents.Execute(data.currentDragging, data.pointerEvent, ExecuteEvents.dragHandler);
                }



                // update selected element for keyboard focus
                if(base.eventSystem.currentSelectedGameObject != null) {
                    ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, GetBaseEventData(), ExecuteEvents.updateSelectedHandler);
                }
            }
        }
    }
}