
using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class BrushManager : MonoBehaviour {
	public static bool canpaint;
	public static bool couldpaint;
	public SteamVR_TrackedObject controller;
	public  Text btex;
	// painted bool that switches between the two brushes
	//will change to case sw when added a third brush
	public static bool brushswitchbool;
	public GameObject con;
	public static bool canRetexture;
	public static bool couldRetexture;

	public GameObject cursor;


	public Text LineText;
	public static bool freeformbool;
	public GameObject lineBreak;
	public static float cursorsize;
	public Image cylandarbrush; 
	public Image flatbrush;
	public Image retextureIMG;
	public ToolManager tooler; 
	// Use this for initialization
	void Start () {
		
		//need to make this a singlton 
		cursorsize =  0.1f;

		CylindarBrushtoggle ();
	
		flatbrushtoggle ();
		CylindarBrushtoggle ();
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

	/*
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
	*/


	public void CylindarBrushtoggle(){
		brushswitchbool = false;
		con.GetComponent<dLineManager> ().enabled = false;
		con.GetComponent<PinchDraw> ().enabled = true;
		cylandarbrush.color = Color.gray;
		flatbrush.color = Color.white;
		canpaint = true;
		tooler.teleportoff();
	}

	public  void flatbrushtoggle(){
		brushswitchbool = true;
		cylandarbrush.color =Color.white; 
		flatbrush.color = Color.gray;
		con.GetComponent<dLineManager> ().enabled =true;
		con.GetComponent<PinchDraw> ().enabled =false;
		canpaint = true;

		tooler.teleportoff();
	}


	public void deselectAllbrushes(){
		flatbrush.color = Color.white;
		cylandarbrush.color =Color.white; 
		con.GetComponent<PinchDraw> ().enabled =false;
		con.GetComponent<dLineManager> ().enabled = false;
	}




	public void LineChoice(){

		freeformbool = !freeformbool;

		if (freeformbool == true) {

			LineText.text = "Line Type: Point Build";
			lineBreak.SetActive (true);
			if (con.GetComponent<PinchDraw> ().firstpointtime == true) {
				

				con.GetComponent<PinchDraw> ().pointerbreaker ();

			}



		} else {
			LineText.text = "Line Type: Freeform";
			lineBreak.SetActive (false);
			if (con.GetComponent<dLineManager> ().firstPointtime == true) {

				con.GetComponent<dLineManager> ().pointbreaker ();



			}
		}



	}

	public void retexture(){


		canRetexture = !canRetexture;
		couldRetexture = !couldRetexture;

		if (canRetexture == true) {
		
			retextureIMG.color = Color.grey;
			canpaint = false;
			cursor.SetActive (false); 
			tooler.laser.SetActive (true);

		} else {
			

			cursor.SetActive (true); 
			tooler.laser.SetActive (false);
			retextureIMG.color = Color.white;

			if (ToolManager.couldteleport == true) {
				tooler.telporton ();

			} else {
				
				canpaint = true; 
				if (brushswitchbool == false) {
					CylindarBrushtoggle ();

				} else {

					flatbrushtoggle ();
				}
			} 
		

		}


	}

	public void linebreaker(){


	


	}

}
