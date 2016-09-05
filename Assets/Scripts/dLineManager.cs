using UnityEngine;
using System.Collections;

public class dLineManager : MonoBehaviour {
	public SteamVR_TrackedObject trackedObj;
	// Use this for initialization
	public MeshLineRenderer currLine;
	private int numClicks = 0;
	public Material matter;
	public GameObject UndoManager;
	public Transform meshparent;
	void Awake()
	{
		trackedObj = GetComponent<SteamVR_TrackedObject>();
	}
	void Start () {
		SteamVR_Controller.Device device = SteamVR_Controller.Input((int)trackedObj.index);
	}
	
	// Update is called once per frame
	void Update () {
SteamVR_Controller.Device device = SteamVR_Controller.Input((int)trackedObj.index);
		if (device.GetTouchDown (SteamVR_Controller.ButtonMask.Trigger) && BrushManager.canpaint == true) {
			GameObject go = new GameObject ();
			go.AddComponent<MeshFilter> ();
			go.AddComponent<MeshRenderer> ();
			currLine = go.AddComponent<MeshLineRenderer> ();

			currLine.setWidth (BrushManager.cursorsize);
			currLine.lmat =new Material( matter);


		}else if (device.GetTouch (SteamVR_Controller.ButtonMask.Trigger) && BrushManager.canpaint == true){
		//	currLine.setVertexCount(numClicks +1);
			currLine.setWidth (BrushManager.cursorsize);
			currLine.AddPoint(trackedObj.transform.position);
			numClicks++;



		}else if (device.GetTouchUp (SteamVR_Controller.ButtonMask.Trigger)){
			//	currLine.setVertexCount(numClicks +1);
			UndoManager.GetComponent<UndoManager>().strokes.Add(currLine.gameObject);
			numClicks = 0;
			currLine.transform.SetParent (meshparent);
			currLine = null;



		}

		if (currLine != null) {

			currLine.lmat.color = ColorManager.Instance.GetCurrentColor ();

		}
		}
	
}
