using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class BrushManager : MonoBehaviour {
	public static bool canpaint;
	public SteamVR_TrackedObject controller;
	public  Text btex;
	// painted bool that switches between the two brushes
	//will change to case sw when added a third brush
	public bool brushswitchbool;
	public GameObject con;

	public GameObject cursor;
	public static float cursorsize;
	// Use this for initialization
	void Start () {
		

		cursorsize =  0.1f;




		cursor.transform.localScale = new Vector3 (cursorsize, cursorsize, cursorsize);
	}
	
	// Update is called once per frame
	void Update () {
	

		SteamVR_Controller.Device device = SteamVR_Controller.Input((int)controller.index);

		if (device.GetTouch (SteamVR_Controller.ButtonMask.Touchpad)) {
			cursorsize = (device.GetAxis (Valve.VR.EVRButtonId.k_EButton_Axis0) [0] + 1) * 0.1f;




			cursor.transform.localScale = new Vector3 (cursorsize, cursorsize, cursorsize);
		}

	}
	public void BrushSwitch(){

		brushswitchbool = !brushswitchbool;

		if (brushswitchbool == false) {
			btex.text = "Brush: Cylinder";
			con.GetComponent<dLineManager> ().enabled = false;
			con.GetComponent<PinchDraw> ().enabled = true;
		} else {
			con.GetComponent<dLineManager> ().enabled =true;
			con.GetComponent<PinchDraw> ().enabled =false;
			btex.text = "Brush: Flat";

		}


	}

}
