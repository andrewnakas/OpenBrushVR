using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class ToolManager : MonoBehaviour {
	public GameObject con;
	public Text teltext;
	public static bool canteleport; 
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void teleporter(){

		canteleport = !canteleport;
		if (canteleport == true) {
			BrushManager.canpaint = false;
			con.GetComponent <SteamVR_Teleporter> ().enabled = true;
			teltext.text = "Teleporter: On";
		} else {
			BrushManager.canpaint = true;
			con.GetComponent <SteamVR_Teleporter> ().enabled =false;
			teltext.text = "Teleporter: Off";

		}
	}
}
