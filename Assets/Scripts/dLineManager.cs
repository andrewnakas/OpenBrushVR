using UnityEngine;
using System.Collections;

public class dLineManager : MonoBehaviour {
	public SteamVR_TrackedObject trackedObj;
	// Use this for initialization
	public MeshLineRenderer currLine;
	public int numClicks = 0;
	public Material matter;
	public GameObject UndoManager;
	public Transform meshparent;
	public bool firstPointtime;
	public bool secondPointtime;
	public Vector3 lastpos;
	public GameObject sphere;
	void Awake()
	{//need to make this a singlton 
		trackedObj = GetComponent<SteamVR_TrackedObject>();
	}
	void Start () {
		SteamVR_Controller.Device device = SteamVR_Controller.Input((int)trackedObj.index);
	}
	
	// Update is called once per frame
	void Update () {
SteamVR_Controller.Device device = SteamVR_Controller.Input((int)trackedObj.index);
		if (device.GetTouchDown (SteamVR_Controller.ButtonMask.Trigger) && BrushManager.canpaint == true) {

			if (BrushManager.freeformbool == false) {
				GameObject go = new GameObject ();
				go.AddComponent<MeshFilter> ();
				go.AddComponent<MeshRenderer> ();
				currLine = go.AddComponent<MeshLineRenderer> ();

				currLine.setWidth (BrushManager.cursorsize);
				currLine.lmat = new Material (matter);

			} else {
				if (firstPointtime == true) {


					//cant get the line render making points up to the sphere, It works a point behind the point creator and is annoying because of the way the mesh line render works so you cant make the same point twice or else it really messes with it


					//	currLine.setWidth (BrushManager.cursorsize);
					//	currLine.AddPoint ((lastpos+ trackedObj.transform.position)/2);
					//currLine.AddPoint (trackedObj.transform.position);
					//numClicks++;

				
				//	currLine.setWidth (BrushManager.cursorsize);
				//	currLine.AddPoint (lastpos + (lastpos -sphere.transform.position)*.02f );
					currLine.AddPoint (sphere.transform.position );
					numClicks++;
				



				//	lastpos =sphere.transform.position;
				//	numClicks++;

				
				

				}
				if (firstPointtime == false) {

				
					GameObject go = new GameObject ();
					go.AddComponent<MeshFilter> ();
					go.AddComponent<MeshRenderer> ();
					currLine = go.AddComponent<MeshLineRenderer> ();

					currLine.setWidth (BrushManager.cursorsize);
					currLine.lmat = new Material (matter);

				
					firstPointtime = true;
				
				
				}
			}


		}else if (device.GetTouch (SteamVR_Controller.ButtonMask.Trigger) && BrushManager.canpaint == true){

			if (BrushManager.freeformbool == false) {
				//	currLine.setVertexCount(numClicks +1);
				currLine.setWidth (BrushManager.cursorsize);
				currLine.AddPoint (sphere.transform.position);
				numClicks++;
			}


		}else if (device.GetTouchUp (SteamVR_Controller.ButtonMask.Trigger)){
			if (BrushManager.freeformbool == false) {
				//	currLine.setVertexCount(numClicks +1);
				UndoManager.GetComponent<UndoManager> ().strokes.Add (currLine.gameObject);
				numClicks = 0;
				currLine.transform.SetParent (meshparent);
				currLine = null;

			}

		}

		if (currLine != null) {

			currLine.lmat.color = ColorManager.Instance.GetCurrentColor ();

		}
		}


	public void pointbreaker(){
		if (currLine != null) {
			firstPointtime = false;
			UndoManager.GetComponent<UndoManager> ().strokes.Add (currLine.gameObject);
			numClicks = 0;
			currLine.transform.SetParent (meshparent);
		}
			currLine = null;

	}
	
}
