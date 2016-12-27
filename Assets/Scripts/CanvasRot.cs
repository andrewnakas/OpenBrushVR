using UnityEngine;
using System.Collections;

public class CanvasRot : MonoBehaviour {


	#if UNITY_STANDALONE_WIN 
	public SteamVR_TrackedObject controller;

	#elif UNITY_ANDROID 




	#endif

	// Use this for initialization
	public float currentXAxis;
	public float lateXAxis;

	void Start () {
	
	}

	// Update is called once per frame
	void Update () {
		#if UNITY_STANDALONE_WIN 
	
	
		SteamVR_Controller.Device device = SteamVR_Controller.Input((int)controller.index);

	
		currentXAxis = device.GetAxis (Valve.VR.EVRButtonId.k_EButton_Axis0) [0]+1;
	

//		currentXAxis = Input.GetTouch(0).deltaPosition.magnitude;
	
	//	Debug.Log (currentXAxis -lateXAxis);
		if (currentXAxis - lateXAxis > 0.2f) {

			transform.Rotate(Vector3.forward * (currentXAxis - lateXAxis )* 5000*Time.deltaTime);
		} 

		if (currentXAxis - lateXAxis < -0.2f) {

			transform.Rotate(Vector3.forward * (currentXAxis - lateXAxis )* 5000*Time.deltaTime);

		}
		#endif

			
	}
	void LateUpdate () {

		#if UNITY_STANDALONE_WIN 
		SteamVR_Controller.Device device = SteamVR_Controller.Input((int)controller.index);


		lateXAxis = device.GetAxis (Valve.VR.EVRButtonId.k_EButton_Axis0) [0]+1;

		#endif
	}
}
