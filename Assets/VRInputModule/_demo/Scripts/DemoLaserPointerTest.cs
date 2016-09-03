using UnityEngine;

namespace Wacki {

    public class DemoLaserPointerTest : IUILaserPointer {
        
        public bool buttonState = false;
        bool _prevButtonState = false;
        bool _buttonChanged = false;

        protected override void Update()
        {
            base.Update();

            if(buttonState == _prevButtonState) {
                _buttonChanged = false;
            } else {
                _buttonChanged = true;
                _prevButtonState = buttonState;
            }

            if(ButtonDown())
                Debug.Log("Button down!");
            if(ButtonUp())
                Debug.Log("Button up!");
        }

        public override bool ButtonDown()
        {
            return _buttonChanged && buttonState;
        }

        public override bool ButtonUp()
        {
            return _buttonChanged && !buttonState;
        }

        public override void OnEnterControl(GameObject control)
        {
            Debug.Log("OnEnterControl " + control.name);
        }

        public override void OnExitControl(GameObject control)
        {
            Debug.Log("OnExitControl " + control.name);
        }
    }

}