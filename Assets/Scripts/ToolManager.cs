using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class ToolManager : MonoBehaviour {
	public GameObject con;
	public Text teltext;
	public static bool canteleport; 
	public static bool couldteleport; 

	public Image teleportbutton;
	public BrushManager brusher;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	//hacky will change


	}
	public void teleportoff(){

		con.GetComponent <SteamVR_Teleporter> ().teleportOnClick = false;
		couldteleport = false;
		canteleport = false;
		teleportbutton.color = Color.white;
		teltext.text = "Teleporter: Off";
		BrushManager.canpaint = true;
	}
	public void telporton(){


		con.GetComponent <SteamVR_Teleporter> ().teleportOnClick = true;
	
	
	
	
	}



	public void teleporter(){
		couldteleport =!couldteleport;
		canteleport = !canteleport;


		if (couldteleport == true) {
			BrushManager.canpaint = false;
			teleportbutton.color = Color.gray;

			con.GetComponent <SteamVR_Teleporter> ().teleportOnClick = true;
			teltext.text = "Teleporter: On";
			brusher.deselectAllbrushes ();

			Debug.Log (couldteleport);
		} else {
			if (BrushManager.brushswitchbool == false) {
				brusher.CylindarBrushtoggle ();

			} else {
		brusher.flatbrushtoggle ();

			}
			Debug.Log (couldteleport);
			teleportbutton.color = Color.white;
			con.GetComponent <SteamVR_Teleporter> ().teleportOnClick =false;
			teltext.text = "Teleporter: Off";
			BrushManager.canpaint = true;
		}
	}
}
