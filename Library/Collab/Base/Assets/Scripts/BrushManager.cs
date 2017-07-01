
using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class BrushManager : MonoBehaviour {
	public static bool canpaint;
	public static bool couldpaint;

#if UNITY_STANDALONE_WIN


	public SteamVR_TrackedObject controller;


#elif UNITY_ANDROID || UNITY_IOS



    public static bool TangoPainting;
	public static bool TangoPaintingStart;
	public Slider cursorSizer;
	#endif

	public  Text btex;
	// painted bool that switches between the two brushes
	//will change to case sw when added a third brush
	public static int brushswitchint;
	public GameObject con;
	public static bool canRetexture;
	public static bool couldRetexture;

	public GameObject cursor;


	public Text LineText;
	public static bool freeformbool;
	public GameObject lineBreak;
	public static float cursorsize;
	public Image squarebrush; 
	public Image cylandarbrush; 
	public Image flatbrush;
	public Image retextureIMG;
	public ToolManager tooler; 
	// Use this for initialization
	void Start () {
#if UNITY_ANDROID || UNITY_IOS
        cursorsize = .05f;
		sliderValue();

		canpaint = true;
		#endif
		//need to make this a singlton 
		cursorsize =  0.05f;

		CylindarBrushtoggle ();
	
		flatbrushtoggle ();
		CylindarBrushtoggle ();
		cursor.transform.localScale = new Vector3 (cursorsize, cursorsize, cursorsize);
	}
	
	// Update is called once per frame
	void Update () {
		#if UNITY_STANDALONE_WIN 


	

	

		SteamVR_Controller.Device device = SteamVR_Controller.Input((int)controller.index);

		if (device.GetTouch (SteamVR_Controller.ButtonMask.Touchpad)) {
			cursorsize = (device.GetAxis (Valve.VR.EVRButtonId.k_EButton_Axis0) [0] + 1) * 0.1f;




			cursor.transform.localScale = new Vector3 (cursorsize, cursorsize, cursorsize);
		}


		#endif
	}

#if UNITY_ANDROID || UNITY_IOS

    public void sliderValue(){
		cursorsize = cursorSizer.value;




		cursor.transform.localScale = new Vector3 (cursorsize, cursorsize, cursorsize);
	}
		#endif

	
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
	
		if (freeformbool == true) {
			con.GetComponent<PinchDraw> ().pointerbreaker ();
			con.GetComponent<dLineManager> ().pointbreaker ();
		}
		brushswitchint = 0;
		con.GetComponent<dLineManager> ().enabled = false;
		con.GetComponent<PinchDraw> ().enabled = true;
		cylandarbrush.color = Color.gray;
		flatbrush.color = Color.white;
		squarebrush.color = Color.white;
		canpaint = true;
		tooler.teleportoff();
	}

	public  void flatbrushtoggle(){
	
	
		brushswitchint = 1;
		if (freeformbool == true) {
			con.GetComponent<PinchDraw> ().pointerbreaker ();
			con.GetComponent<dLineManager> ().pointbreaker ();
		}
		cylandarbrush.color =Color.white; 
		flatbrush.color = Color.gray;
		squarebrush.color = Color.white;
		con.GetComponent<dLineManager> ().enabled =true;
		con.GetComponent<PinchDraw> ().enabled =false;
		canpaint = true;

		tooler.teleportoff();
	}

	public  void squarebrushtoggle(){
	
	
		brushswitchint = 2;
		cylandarbrush.color =Color.white; 
		squarebrush.color = Color.gray;
		flatbrush.color = Color.white;
		con.GetComponent<dLineManager> ().enabled =true;
		con.GetComponent<PinchDraw> ().enabled =false;

		con.GetComponent<PinchDraw> ().pointerbreaker ();
		con.GetComponent<dLineManager> ().pointbreaker ();
		canpaint = true;

		tooler.teleportoff();
	}

	public void deselectAllbrushes(){
		flatbrush.color = Color.white;
		cylandarbrush.color =Color.white; 
		squarebrush.color = Color.white;
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
				if (brushswitchint ==0) {
					CylindarBrushtoggle ();

				} else if  (brushswitchint ==0) {

					flatbrushtoggle ();
				}
			} 
		

		}


	}

	public void linebreaker(){


	


	}


#if UNITY_ANDROID || UNITY_IOS



    public void PaintingStart(){
		TangoPaintingStart = true; 
		TangoPainting = true;
	//	Debug.Log ("PaintingStartt");
	} 

	public void PaintingEnd(){



		TangoPainting = false;
	//	Debug.Log ("End");
	}

	#endif

}
