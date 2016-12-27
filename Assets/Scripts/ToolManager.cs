using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class ToolManager : MonoBehaviour {
	public GameObject con;
	public Text teltext;
	public static bool canteleport; 
	public static bool couldteleport; 
	public GameObject laser;
	public Image teleportbutton;
	public BrushManager brusher;
	public GameObject cursor;
	public Text retexturetxt;


	#if UNITY_STANDALONE_WIN 


	public SteamVR_TrackedObject trackedObj;


	#elif UNITY_ANDROID 
	public bool isGripped;
	#endif

	public static GameObject curSelGameObject;
	public  GameObject lastSelGameObject;
	public UndoManager Undoer;
	public GameObject eportmesh;
	// Use this for initialization
	void Start () {
		//laser.enabled = false;
	}
	
	void Awake () {
		laser.SetActive (false);
	}// Update is called once per frame
	void Update () {
	//hacky will change
		#if UNITY_STANDALONE_WIN 
		SteamVR_Controller.Device device = SteamVR_Controller.Input((int)trackedObj.index);
		if (curSelGameObject != null && device.GetTouch (SteamVR_Controller.ButtonMask.Grip)) {
			if (curSelGameObject.transform.parent == (eportmesh.transform)) {
				lastSelGameObject = curSelGameObject;
				Undoer.prevTrans.Add (new UndoManager.PrevTrans (curSelGameObject.transform.position, curSelGameObject.transform.rotation, curSelGameObject.transform.localScale, curSelGameObject)); 
			
				Undoer.globalUndo.Add (1);
				curSelGameObject.transform.SetParent (cursor.transform);
			}

			curSelGameObject.transform.SetParent (cursor.transform);

		} else if (  device.GetTouchUp (SteamVR_Controller.ButtonMask.Grip)){
			if (curSelGameObject != null) {
				curSelGameObject.transform.SetParent (eportmesh.transform);
			}
		}

		#elif UNITY_ANDROID 
		if (curSelGameObject != null && isGripped == true) {
		
			Debug.Log ("LEtsGo");
			if (curSelGameObject.transform.parent == (eportmesh.transform)) {
				lastSelGameObject = curSelGameObject;
				Undoer.prevTrans.Add (new UndoManager.PrevTrans (curSelGameObject.transform.position, curSelGameObject.transform.rotation, curSelGameObject.transform.localScale, curSelGameObject)); 

				Undoer.globalUndo.Add (1);
				curSelGameObject.transform.SetParent (cursor.transform);
			}

			curSelGameObject.transform.SetParent (cursor.transform);

		} 
		#endif

	}

	public void delLastSelected(){

		if (lastSelGameObject != null) {
			Undoer.del.Add (lastSelGameObject);
			Undoer.globalUndo.Add (2);
			lastSelGameObject.SetActive (false);


		}


	}
	public void teleportoff(){
		cursor.SetActive (true);
		con.GetComponent <SteamVR_Teleporter> ().teleportOnClick = false;
		couldteleport = false;
		canteleport = false;
		teleportbutton.color = Color.white;
		teltext.text = "Teleporter: Off";
		BrushManager.canpaint = true;
		laser.SetActive (false);
	}
	public void telporton(){

		cursor.SetActive (false);
		BrushManager.canpaint = false;
		teleportbutton.color = Color.gray;
		laser.SetActive (true);
		con.GetComponent <SteamVR_Teleporter> ().teleportOnClick = true;
		teltext.text = "Teleporter: On";
		brusher.deselectAllbrushes ();

		Debug.Log (couldteleport);

	
	
	
	
	}



	public void teleporter(){
		couldteleport =!couldteleport;
		canteleport = !canteleport;


		if (couldteleport == true) {
			cursor.SetActive (false);
			BrushManager.canpaint = false;
			teleportbutton.color = Color.gray;
			laser.SetActive (true);
			con.GetComponent <SteamVR_Teleporter> ().teleportOnClick = true;
			teltext.text = "Teleporter: On";
			brusher.deselectAllbrushes ();

			Debug.Log (couldteleport);
		} else {
			if (BrushManager.brushswitchint == 0) {
				brusher.CylindarBrushtoggle ();

			} else if (BrushManager.brushswitchint == 1) {
				
				brusher.flatbrushtoggle ();

			} else if (BrushManager.brushswitchint == 2) {

				brusher.squarebrushtoggle ();


			}
			cursor.SetActive (true);
			laser.SetActive (false);
			Debug.Log (couldteleport);
			teleportbutton.color = Color.white;
			con.GetComponent <SteamVR_Teleporter> ().teleportOnClick =false;
			teltext.text = "Teleporter: Off";
			BrushManager.canpaint = true;
		}
	}


	#if UNITY_ANDROID 

		
	public void GripStart(){

		isGripped = true;


	}
	public void GripEnd(){

		isGripped = false;
		if (curSelGameObject != null) {
			curSelGameObject.transform.SetParent (eportmesh.transform);
		}

	}

	#endif

}
