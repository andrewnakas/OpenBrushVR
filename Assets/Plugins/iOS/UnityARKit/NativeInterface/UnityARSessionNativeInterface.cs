using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Runtime.InteropServices;
using AOT;
using UnityEngine.XR.iOS;

namespace UnityEngine.XR.iOS {

    /// <summary>
    /// A struct that allows us go from native Matrix4x4 to managed
    /// </summary>
    public struct UnityARMatrix4x4
    {
        public Vector4 column0;
        public Vector4 column1;
        public Vector4 column2;
        public Vector4 column3;
    };

    struct internal_UnityARCamera
    {
        public UnityARMatrix4x4 worldTransform;
        public UnityARMatrix4x4 projectionMatrix;
        public ARTrackingState trackingState;
        public ARTrackingStateReason trackingReason;
        public uint getPointCloudData;
    };

    public struct UnityARCamera
    {
        public UnityARMatrix4x4 worldTransform;
        public UnityARMatrix4x4 projectionMatrix;
        public ARTrackingState trackingState;
        public ARTrackingStateReason trackingReason;
        public Vector3[] pointCloudData;
    };

    public struct UnityARAnchorData
	{
		public IntPtr ptrIdentifier;

		/**
 		The transformation matrix that defines the anchor's rotation, translation and scale in world coordinates.
		 */
		public UnityARMatrix4x4 transform;

		/**
		 The alignment of the plane.
		 */

        public ARPlaneAnchorAlignment alignment;

        /**
        The center of the plane in the anchor’s coordinate space.
        */

        public Vector4 center;

        /**
        The extent of the plane in the anchor’s coordinate space.
         */
        public Vector4 extent;

	}

    public struct UnityARHitTestResult
    {
        /**
         The type of the hit-test result.
         */
        public ARHitTestResultType type;

        /**
        The distance from the camera to the intersection in meters.
        */
        public double distance;

        /**
        The transformation matrix that defines the intersection's rotation, translation and scale
        relative to the anchor or nearest feature point.
        */
        public Matrix4x4 localTransform;

        /**
        The transformation matrix that defines the intersection's rotation, translation and scale
        relative to the world.
        */
        public Matrix4x4 worldTransform;

        /**
        The anchor that the hit-test intersected.
        */
        public IntPtr anchor;

        /**
        True if the test represents a valid hit test. Data is undefined otherwise.
        */
        public bool isValid;

    }

	public enum UnityARAlignment
	{
	    UnityARAlignmentGravity,
	    UnityARAlignmentGravityAndHeading,
	    UnityARAlignmentCamera
	}

	public enum UnityARPlaneDetection
	{
	    None = 0,
	    Horizontal = (1 << 0)
	}
   
    public struct ARKitSessionConfiguration
    {
        public UnityARAlignment alignment; 
        public bool getPointCloudData;
        public bool enableLightEstimation;
        public bool IsSupported { get { return IsARKitSessionConfigurationSupported(); } private set {} }

        public ARKitSessionConfiguration(UnityARAlignment alignment = UnityARAlignment.UnityARAlignmentGravity,
            bool getPointCloudData = false, 
            bool enableLightEstimation = false)
        {
            this.getPointCloudData = getPointCloudData;
            this.alignment = alignment;
            this.enableLightEstimation = enableLightEstimation;
        }
        
        [DllImport("__Internal")]
        private static extern bool IsARKitSessionConfigurationSupported();
    }



	public struct ARKitWorldTackingSessionConfiguration
	{
	    public UnityARAlignment alignment; 
	    public UnityARPlaneDetection planeDetection;
        public bool getPointCloudData;
        public bool enableLightEstimation;
        public bool IsSupported { get { return IsARKitWorldTrackingSessionConfigurationSupported(); } private set {} }

	    public ARKitWorldTackingSessionConfiguration(UnityARAlignment alignment = UnityARAlignment.UnityARAlignmentGravity,
	            UnityARPlaneDetection planeDetection = UnityARPlaneDetection.Horizontal,
            bool getPointCloudData = false, 
            bool enableLightEstimation = false)
	    {
            this.getPointCloudData = getPointCloudData;
	        this.alignment = alignment;
	        this.planeDetection = planeDetection;
            this.enableLightEstimation = enableLightEstimation;

	    }
        [DllImport("__Internal")]
        private static extern bool IsARKitWorldTrackingSessionConfigurationSupported();
	}

    public enum UnityARSessionRunOption {
        /** The session will reset tracking. */
        ARSessionRunOptionResetTracking           = (1 << 0),

        /** The session will remove existing anchors. */
        ARSessionRunOptionRemoveExistingAnchors   = (1 << 1)
    }

	public class UnityARSessionNativeInterface {

//	    public delegate void ARFrameUpdate(UnityARMatrix4x4 cameraPos, UnityARMatrix4x4 projection);
//        public static event ARFrameUpdate ARFrameUpdatedEvent;

        public delegate void ARFrameUpdate(UnityARCamera camera);
        public static event ARFrameUpdate ARFrameUpdatedEvent;

		public delegate void ARAnchorAdded(ARPlaneAnchor anchorData);
        public static event ARAnchorAdded ARAnchorAddedEvent;

	    public delegate void ARAnchorUpdated(ARPlaneAnchor anchorData);
        public static event ARAnchorUpdated ARAnchorUpdatedEvent;

	    public delegate void ARAnchorRemoved(ARPlaneAnchor anchorData);
        public static event ARAnchorRemoved ARAnchorRemovedEvent;

		public delegate void ARSessionFailed(string error);
        public static event ARSessionFailed ARSessionFailedEvent;

        delegate void internal_ARFrameUpdate(internal_UnityARCamera camera);
		public delegate void internal_ARAnchorAdded(UnityARAnchorData anchorData);
	    public delegate void internal_ARAnchorUpdated(UnityARAnchorData anchorData);
	    public delegate void internal_ARAnchorRemoved(UnityARAnchorData anchorData);

#if !UNITY_EDITOR
	    private IntPtr m_NativeARSession;
#endif

	    private static UnityARCamera s_Camera;
		
	    [DllImport("__Internal")]
        private static extern IntPtr unity_CreateNativeARSession(internal_ARFrameUpdate frameUpdate, internal_ARAnchorAdded anchorAdded, internal_ARAnchorUpdated anchorUpdated, internal_ARAnchorRemoved anchorRemoved, ARSessionFailed sessionFailed);

	    [DllImport("__Internal")]
	    private static extern void StartWorldTrackingSession(IntPtr nativeSession, ARKitWorldTackingSessionConfiguration configuration);

        [DllImport("__Internal")]
        private static extern void StartWorldTrackingSessionWithOptions(IntPtr nativeSession, ARKitWorldTackingSessionConfiguration configuration, UnityARSessionRunOption runOptions);

        [DllImport("__Internal")]
        private static extern void StartSession(IntPtr nativeSession, ARKitSessionConfiguration configuration);

        [DllImport("__Internal")]
        private static extern void StartSessionWithOptions(IntPtr nativeSession, ARKitSessionConfiguration configuration, UnityARSessionRunOption runOptions);

	    [DllImport("__Internal")]
	    private static extern void PauseSession(IntPtr nativeSession);

	    [DllImport("__Internal")]
	    private static extern int HitTest(IntPtr nativeSession, ARPoint point, ARHitTestResultType types);

	    [DllImport("__Internal")]
	    private static extern UnityARHitTestResult GetLastHitTestResult(int index);

		[DllImport("__Internal")]
		private static extern ARTextureHandles GetVideoTextureHandles();

		[DllImport("__Internal")]
		private static extern float GetAmbientIntensity();

		[DllImport("__Internal")]
		private static extern int GetTrackingQuality();

        [DllImport("__Internal")]
        private static extern float GetYUVTexCoordScale();

        [DllImport("__Internal")]
        private static extern bool GetARPointCloud (ref IntPtr verts, ref uint vertLength);

		[DllImport("__Internal")]
		private static extern void SetCameraNearFar (float nearZ, float farZ);

		public UnityARSessionNativeInterface()
		{
#if !UNITY_EDITOR
	        m_NativeARSession = unity_CreateNativeARSession(_frame_update, _anchor_added, _anchor_updated, _anchor_removed, _ar_session_failed);
#endif
	    }
		
		static UnityARSessionNativeInterface s_UnityARSessionNativeInterface = null;

		public static UnityARSessionNativeInterface GetARSessionNativeInterface()
		{
				if (s_UnityARSessionNativeInterface == null) {
					s_UnityARSessionNativeInterface = new UnityARSessionNativeInterface ();
				}	
				return s_UnityARSessionNativeInterface;
		}

        public Matrix4x4 GetCameraPose()
        {
            Matrix4x4 matrix = new Matrix4x4();
            matrix.SetColumn(0, s_Camera.worldTransform.column0);
            matrix.SetColumn(1, s_Camera.worldTransform.column1);
            matrix.SetColumn(2, s_Camera.worldTransform.column2);
            matrix.SetColumn(3, s_Camera.worldTransform.column3);
            return matrix; 
        }

        public Matrix4x4 GetCameraProjection()
        {
            Matrix4x4 matrix = new Matrix4x4();
            matrix.SetColumn(0, s_Camera.projectionMatrix.column0);
            matrix.SetColumn(1, s_Camera.projectionMatrix.column1);
            matrix.SetColumn(2, s_Camera.projectionMatrix.column2);
            matrix.SetColumn(3, s_Camera.projectionMatrix.column3);
            return matrix;
        }

		public void SetCameraClipPlanes(float nearZ, float farZ)
		{
#if !UNITY_EDITOR
			SetCameraNearFar (nearZ, farZ);
#endif
		}

        [MonoPInvokeCallback(typeof(internal_ARFrameUpdate))]
	    static void _frame_update(internal_UnityARCamera camera)
	    {
            UnityARCamera pubCamera = new UnityARCamera();
            pubCamera.projectionMatrix = camera.projectionMatrix;
            pubCamera.worldTransform = camera.worldTransform;
            pubCamera.trackingState = camera.trackingState;
            pubCamera.trackingReason = camera.trackingReason;
            s_Camera = pubCamera;

            if (camera.getPointCloudData == 1)
            {
                UpdatePointCloudData (ref s_Camera);
            }      

            if (ARFrameUpdatedEvent != null)
            {
                ARFrameUpdatedEvent(s_Camera);
            }
	    }

        static void UpdatePointCloudData(ref UnityARCamera camera)
        {
            IntPtr ptrResultVerts = IntPtr.Zero;
            uint resultVertLength = 0;
            bool success = GetARPointCloud (ref ptrResultVerts, ref resultVertLength);
            float[] resultVertices = null;
            if (success) {
                // Load the results into a managed array.
                resultVertices = new float[resultVertLength];
                Marshal.Copy (ptrResultVerts, resultVertices, 0, (int)resultVertLength); 

                Vector3[] verts = new Vector3[(resultVertLength / 4)];

                for (int count = 0; count < resultVertLength; count++)
                {
                    verts [count / 4].x = resultVertices[count++];
                    verts [count / 4].y = resultVertices[count++];
                    verts [count / 4].z = -resultVertices[count++];
                }
                camera.pointCloudData = verts;
            }

        }

		static ARPlaneAnchor GetPlaneAnchorFromAnchorData(UnityARAnchorData anchor)
		{
			//get the identifier for this anchor from the pointer
			ARPlaneAnchor arPlaneAnchor = new ARPlaneAnchor ();
            arPlaneAnchor.identifier = Marshal.PtrToStringAuto(anchor.ptrIdentifier);

			Matrix4x4 matrix = new Matrix4x4 ();
	        matrix.SetColumn(0, anchor.transform.column0);
	        matrix.SetColumn(1, anchor.transform.column1);
	        matrix.SetColumn(2, anchor.transform.column2);
	        matrix.SetColumn(3, anchor.transform.column3);

	        arPlaneAnchor.transform =  matrix;
			arPlaneAnchor.alignment = anchor.alignment;
            arPlaneAnchor.center = new Vector3(anchor.center.x, anchor.center.y, anchor.center.z);
            arPlaneAnchor.extent = new Vector3(anchor.extent.x, anchor.extent.y, anchor.extent.z);
			return arPlaneAnchor;
		}

        static ARHitTestResult GetHitTestResultFromResultData(UnityARHitTestResult resultData)
        {
            ARHitTestResult arHitTestResult = new ARHitTestResult ();
            arHitTestResult.type = resultData.type;
            arHitTestResult.distance = resultData.distance;
            arHitTestResult.localTransform = resultData.localTransform;
            arHitTestResult.worldTransform = resultData.worldTransform;
            arHitTestResult.isValid = resultData.isValid;
            if (resultData.anchor != IntPtr.Zero) {
                arHitTestResult.anchorIdentifier = Marshal.PtrToStringAuto (resultData.anchor);
            }
            return arHitTestResult;
        }

	    [MonoPInvokeCallback(typeof(internal_ARAnchorAdded))]
        static void _anchor_added(UnityARAnchorData anchor)
        {
            if (ARAnchorAddedEvent != null)
            {
				ARPlaneAnchor arPlaneAnchor = GetPlaneAnchorFromAnchorData(anchor);
				ARAnchorAddedEvent(arPlaneAnchor);
            }
        }

	    [MonoPInvokeCallback(typeof(internal_ARAnchorUpdated))]
	    static void _anchor_updated(UnityARAnchorData anchor)
        {
            if (ARAnchorUpdatedEvent != null)
            {
				ARPlaneAnchor arPlaneAnchor = GetPlaneAnchorFromAnchorData(anchor);
				ARAnchorUpdatedEvent(arPlaneAnchor); }
	    }

	    [MonoPInvokeCallback(typeof(internal_ARAnchorRemoved))]
	    static void _anchor_removed(UnityARAnchorData anchor)
	    {
            if (ARAnchorRemovedEvent != null)
            {
				ARPlaneAnchor arPlaneAnchor = GetPlaneAnchorFromAnchorData(anchor);
                ARAnchorRemovedEvent(arPlaneAnchor);
            }
	    }

	    [MonoPInvokeCallback(typeof(ARSessionFailed))]
		static void _ar_session_failed(string error)
		{
	        Debug.Log("ar_session_failed");		

            if (ARSessionFailedEvent != null)
            {
                ARSessionFailedEvent(error);
            }

		}		

        public void RunWithConfigAndOptions(ARKitWorldTackingSessionConfiguration config, UnityARSessionRunOption runOptions)
        {
#if !UNITY_EDITOR
            StartWorldTrackingSessionWithOptions (m_NativeARSession, config, runOptions);
#endif
        }

	    public void RunWithConfig(ARKitWorldTackingSessionConfiguration config)
	    {
#if !UNITY_EDITOR
	        StartWorldTrackingSession(m_NativeARSession, config);
#endif
	    }

	    public void Run()
	    {
	        RunWithConfig(new ARKitWorldTackingSessionConfiguration(UnityARAlignment.UnityARAlignmentGravity, UnityARPlaneDetection.Horizontal));
	    }

        public void RunWithConfigAndOptions(ARKitSessionConfiguration config, UnityARSessionRunOption runOptions)
        {
            #if !UNITY_EDITOR
            StartSessionWithOptions (m_NativeARSession, config, runOptions);
            #endif
        }

        public void RunWithConfig(ARKitSessionConfiguration config)
        {
            #if !UNITY_EDITOR
            StartSession(m_NativeARSession, config);
            #endif
        }
            
	    public void Pause()
	    {
#if !UNITY_EDITOR
	        PauseSession(m_NativeARSession);
#endif
	    }

	    public List<ARHitTestResult> HitTest(ARPoint point, ARHitTestResultType types)
	    {
#if !UNITY_EDITOR
	        int numResults = HitTest(m_NativeARSession, point, types);
	        Debug.Log(string.Format("HitTest results: {0}", numResults));
	        List<ARHitTestResult> results = new List<ARHitTestResult>();
		
	        for (int i = 0; i < numResults; ++i)
	        {
	            var result = GetLastHitTestResult(i);
                results.Add(GetHitTestResultFromResultData(result));
	        }

	        return results;
#else
            return new List<ARHitTestResult>();
#endif
	    }
		
		public ARTextureHandles GetARVideoTextureHandles()
		{
			return GetVideoTextureHandles ();
		}

		public float GetARAmbientIntensity()
		{
			return GetAmbientIntensity ();
		}

		public int GetARTrackingQuality()
		{
			return GetTrackingQuality();
		}
        
        public float GetARYUVTexCoordScale()
        {
            return GetYUVTexCoordScale();
        }
	}
}
