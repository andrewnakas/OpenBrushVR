using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EditorMovement : MonoBehaviour {
    private float mouseX = 0;
    private float mouseY = 0;
    private float mouseZ = 0;
    // Use this for initialization
    void Start () {
		
	}
	#if UNITY_EDITOR
    private void Update()
    {
        if (!Input.GetKey(KeyCode.LeftAlt) && !Input.GetKey(KeyCode.LeftCommand))
        {
            // Update the emulated rotation (do this first to make sure the position is rotated)
            //
            // Note: We need to use Input.GetAxis here because Unity3D does not provide a way to get the underlying
            // mouse delta.
            if (!Input.GetKey(KeyCode.LeftShift))
            {
              transform.eulerAngles += new Vector3 (  0,Input.GetAxis("Mouse X")  * 100* Time.deltaTime,0);
                transform.eulerAngles -= new Vector3(Input.GetAxis("Mouse Y") * 100* Time.deltaTime, 0, 0);
            }
            else
            {
                transform.eulerAngles -= new Vector3(0,0,Input.GetAxis("Mouse X") * 100 * Time.deltaTime);
            }
        }

        // Update the emulated position
       Quaternion poseRotation = Quaternion.Euler(transform.eulerAngles);
        Vector3 directionRight = poseRotation * Vector3.right;
        Vector3 directionForward = poseRotation * Vector3.forward;
        Vector3 directionUp = poseRotation * Vector3.up;

        if (Input.GetKey(KeyCode.W))
        {
            // Forward
            transform.position += directionForward * Time.deltaTime;
        }

        if (Input.GetKey(KeyCode.S))
        {
            // Backward
            transform.position -= directionForward * Time.deltaTime;
        }

        if (Input.GetKey(KeyCode.A))
        {
            // Left
            transform.position -= directionRight  * Time.deltaTime;
        }

        if (Input.GetKey(KeyCode.D))
        {
            // Right
            transform.position += directionRight * Time.deltaTime;
        }

        if (Input.GetKey(KeyCode.E))
        {
            // Up
            transform.position += directionUp * Time.deltaTime;
        }

        if (Input.GetKey(KeyCode.Q))
        {
            // Down
            transform.position -= directionUp  * Time.deltaTime;
        }

        // Record the current state
       // pose.m_timestamp = now;
     //   while (m_emulatedPoseHistory.Count > 0
       //        && m_emulatedPoseHistory[0].m_timestamp < now - EMULATION_POSE_KEEP_TIME_SECS)
     //   {
       //     m_emulatedPoseHistory.RemoveAt(0);
      //  }

      //  m_emulatedPoseHistory.Add(pose);

      //  m_emulationIsDirty = true;
    }
	#endif
}
