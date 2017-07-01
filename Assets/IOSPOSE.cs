using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IOSPOSE : MonoBehaviour {
	#if UNITY_EDITOR 
	public Transform pose;	// Use this for initialization
	void Start () {
		
	}
	private const float MOUSE_LOOK_SENSITIVITY = 100.0f;
	private const float TRANSLATION_SPEED = 2.0f;

	// Update is called once per frame
	void Update () {
		
			//E/mulatedPose pose;
			//f/loat now = Time.realtimeSinceStartup;

			//if (m_emulatedPoseHistory.Count > 0)
			//{
			//	pose = new EmulatedPose(m_emulatedPoseHistory[m_emulatedPoseHistory.Count - 1]);
			//}
			
			
			//	pose = new EmulatedPose();
			//	m_beginningOfPoseEmulation = now;
		

			if (!Input.GetKey(KeyCode.LeftAlt) && !Input.GetKey(KeyCode.LeftCommand))
			{
				// Update the emulated rotation (do this first to make sure the position is rotated)
				//
				// Note: We need to use Input.GetAxis here because Unity3D does not provide a way to get the underlying
				// mouse delta.
				if (!Input.GetKey(KeyCode.LeftShift))
				{
				pose.eulerAngles =  new Vector3 (-pose.rotation.x-Input.GetAxis("Mouse Y") * MOUSE_LOOK_SENSITIVITY * Time.deltaTime, pose.rotation.y + Input.GetAxis("Mouse X") * MOUSE_LOOK_SENSITIVITY * Time.deltaTime,0);
					//pose.rotation.x -= ;
				}
				else
				{
				pose.eulerAngles = new Vector3 (pose.rotation.x,pose.rotation.y,pose.rotation.z + Input.GetAxis("Mouse X") * MOUSE_LOOK_SENSITIVITY * Time.deltaTime);
				}
			}

			// Update the emulated position
		Quaternion poseRotation = Quaternion.Euler(pose.eulerAngles);
			Vector3 directionRight = poseRotation * Vector3.right;
			Vector3 directionForward = poseRotation * Vector3.forward;
			Vector3 directionUp = poseRotation * Vector3.up;

			if (Input.GetKey(KeyCode.W))
			{
				// Forward
				pose.position += directionForward * TRANSLATION_SPEED * Time.deltaTime;
			}

			if (Input.GetKey(KeyCode.S))
			{
				// Backward
				pose.position -= directionForward * TRANSLATION_SPEED * Time.deltaTime;
			}

			if (Input.GetKey(KeyCode.A))
			{
				// Left
				pose.position -= directionRight * TRANSLATION_SPEED * Time.deltaTime;
			}

			if (Input.GetKey(KeyCode.D))
			{
				// Right
				pose.position += directionRight * TRANSLATION_SPEED * Time.deltaTime;
			}

			if (Input.GetKey(KeyCode.E))
			{
				// Up
				pose.position += directionUp * TRANSLATION_SPEED * Time.deltaTime;
			}

			if (Input.GetKey(KeyCode.Q))
			{
				// Down
				pose.position -= directionUp * TRANSLATION_SPEED * Time.deltaTime;
			}

			// Record the current state
			//pose.m_timestamp = now;
			//while (m_emulatedPoseHistory.Count > 0 
			//	&& m_emulatedPoseHistory[0].m_timestamp < now - EMULATION_POSE_KEEP_TIME_SECS)
			//{
			//	m_emulatedPoseHistory.RemoveAt(0);
			//}

			//m_emulatedPoseHistory.Add(pose);

			//m_emulationIsDirty = true;
		

	}
	#endif
}
