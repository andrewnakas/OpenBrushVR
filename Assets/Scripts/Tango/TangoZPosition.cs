using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class TangoZPosition : MonoBehaviour {
	public GameObject controller;
	public Slider controllerPosition;
	// Use this for initialization
	void Start () {
		controller.transform.localPosition = new Vector3 (0, 0,controllerPosition.value);

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void ControllerChange(){

		controller.transform.localPosition = new Vector3 (0, 0,controllerPosition.value);

	}
}
