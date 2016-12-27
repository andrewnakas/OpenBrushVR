using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//this script rotates the square brush so it always face the direction of moving on the x and z axis
public class SquareFacePosition : MonoBehaviour {
	public Vector3 prevPos;
	public int count;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (BrushManager.brushswitchint == 2) {

		     Vector3 heading = transform.position - prevPos;
		float	 distance = heading.magnitude;
			Vector3  direction = heading / distance;


			if (Mathf.Abs(distance) > .01f ){
			transform.rotation = Quaternion.LookRotation (new Vector3(direction.x,direction.y,direction.z));

				prevPos = transform.position;

			}

		}
	}
}
