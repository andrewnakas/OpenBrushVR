using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class ToolManager : MonoBehaviour {
	public GameObject con;
	public Text teltext;
	public static bool canteleport; 
	public static bool couldteleport; 
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	//hacky will change

		if (canteleport == true) {

			telporton ();
		} else {
			teleportoff ();

		}
	}
	public void teleportoff(){

		con.GetComponent <SteamVR_Teleporter> ().teleportOnClick = false;

	}
	public void telporton(){


		con.GetComponent <SteamVR_Teleporter> ().teleportOnClick = true;
	}
	public void teleporter(){
		couldteleport =!couldteleport;
		canteleport = !canteleport;
		if (couldteleport == true) {
			BrushManager.canpaint = false;
		
			con.GetComponent <SteamVR_Teleporter> ().teleportOnClick = true;
			teltext.text = "Teleporter: On";
		} else {
			
			con.GetComponent <SteamVR_Teleporter> ().teleportOnClick =false;
			teltext.text = "Teleporter: Off";
			BrushManager.canpaint = true;
		}
	}
}
