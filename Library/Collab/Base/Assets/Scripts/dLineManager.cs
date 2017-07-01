using UnityEngine;
using System.Collections;

public class dLineManager : MonoBehaviour {

#if UNITY_STANDALONE_WIN
	public SteamVR_TrackedObject trackedObj;

#elif UNITY_ANDROID || UNITY_IOS

    public bool tangoIspainting;


	#endif

	// Use this for initialization
	public MeshLineRenderer currLine;

	public MeshLineRenderer currLine1;

	public MeshLineRenderer currLine2;
	public MeshLineRenderer currLine3;
	public int numClicks = 0;
	public Material matter;
	public GameObject UndoManager;
	public Transform meshparent;
	public bool firstPointtime;
	public bool secondPointtime;
	public Vector3 lastpos;
	public GameObject sphere;
	public Transform sphereHigh;
	public Transform sphereLow;

	public Transform sphererl;
	public Transform spherell;
	public Transform sphererh;
	public Transform spherelh;
	void Awake()
	{//need to make this a singlton 
		#if UNITY_STANDALONE_WIN 
		trackedObj = GetComponent<SteamVR_TrackedObject>();

		#endif


	}
	void Start () {
		#if UNITY_STANDALONE_WIN 
		SteamVR_Controller.Device device = SteamVR_Controller.Input((int)trackedObj.index);

		#endif


	}
	
	// Update is called once per frame
	void Update () {


#if UNITY_STANDALONE_WIN
	

	
SteamVR_Controller.Device device = SteamVR_Controller.Input((int)trackedObj.index);
		if (device.GetTouchDown (SteamVR_Controller.ButtonMask.Trigger) && BrushManager.canpaint == true) {

			if (BrushManager.freeformbool == false) {
				GameObject go = new GameObject ();
				go.AddComponent<MeshFilter> ();
				go.AddComponent<MeshRenderer> ();
				currLine = go.AddComponent<MeshLineRenderer> ();

				go.AddComponent < MeshCollider> ().sharedMesh =	meshparent.GetComponent<MeshFilter> ().mesh	 ;
			
				currLine.setWidth (BrushManager.cursorsize);
				currLine.lmat = new Material (matter);
				if (currLine != null) {

					currLine.lmat.color = ColorManager.Instance.GetCurrentColor ();

				}
			} else {
				if (firstPointtime == true) {


					//cant get the line render making points up to the sphere, It works a point behind the point creator and is annoying because of the way the mesh line render works so you cant make the same point twice or else it really messes with it


					//	currLine.setWidth (BrushManager.cursorsize);
					//	currLine.AddPoint ((lastpos+ trackedObj.transform.position)/2);
					//currLine.AddPoint (trackedObj.transform.position);
					//numClicks++;

				
				//	currLine.setWidth (BrushManager.cursorsize);
				//	currLine.AddPoint (lastpos + (lastpos -sphere.transform.position)*.02f );
		currLine.AddPoint (sphereHigh.position,sphereLow.position);
					numClicks++;
				



				//	lastpos =sphere.transform.position;
				//	numClicks++;

				
				

				}
				if (firstPointtime == false) {

				
					GameObject go = new GameObject ();
					go.AddComponent<MeshFilter> ();
					go.AddComponent<MeshRenderer> ().sharedMaterial = new Material (matter) ;
					currLine = go.AddComponent<MeshLineRenderer> ();

					currLine.setWidth (BrushManager.cursorsize);
					currLine.lmat = 	go.GetComponent<MeshRenderer> ().sharedMaterial;

				
					firstPointtime = true;
				
				
				}
			}


		}else if (device.GetTouch (SteamVR_Controller.ButtonMask.Trigger) && BrushManager.canpaint == true){

			if (BrushManager.freeformbool == false) {
				//	currLine.setVertexCount(numClicks +1);
				currLine.setWidth (BrushManager.cursorsize);
				currLine.AddPoint (sphereHigh.position,sphereLow.position);
				numClicks++;
			}


		}else if (device.GetTouchUp (SteamVR_Controller.ButtonMask.Trigger)){
			if (BrushManager.freeformbool == false) {
				//	currLine.setVertexCount(numClicks +1);


				UndoManager.GetComponent<UndoManager> ().strokes.Add (currLine.gameObject);
				UndoManager.GetComponent<UndoManager> ().globalUndo.Add (0);
				StartCoroutine( delline());

			}

		}

#elif UNITY_ANDROID || UNITY_IOS
        if ( BrushManager.TangoPainting == true &&  BrushManager.canpaint == true ){
		if (BrushManager.freeformbool == false) {
			//	currLine.setVertexCount(numClicks +1);
				if (BrushManager.brushswitchint == 1 ){

				currLine.setWidth (BrushManager.cursorsize);
				currLine.AddPoint (sphereHigh.position,sphereLow.position);
			numClicks++;
		
				}


				else if (BrushManager.brushswitchint == 2 ) {

					//gotta write a method to make a square bursh

					currLine.setWidth (BrushManager.cursorsize);
					currLine.AddPoint (spherelh.position,spherell.position);
					numClicks++;

					currLine1.setWidth (BrushManager.cursorsize);
					currLine1.AddPoint (sphererh.position,sphererl.position);
					numClicks++;


					currLine2.setWidth (BrushManager.cursorsize);
					currLine2.AddPoint (spherelh.position,sphererh.position);
					numClicks++;

					currLine3.setWidth (BrushManager.cursorsize);
					currLine3.AddPoint (sphererl.position,spherell.position);
					numClicks++;

				}
				
				}
			}
		#endif
	

		if (currLine != null) {

			currLine.lmat.color = ColorManager.Instance.GetCurrentColor ();

		}
		if (currLine1 != null) {

			currLine1.lmat.color = ColorManager.Instance.GetCurrentColor ();

		}	if (currLine2 != null) {

			currLine2.lmat.color = ColorManager.Instance.GetCurrentColor ();

		}
		if (currLine3 != null) {

			currLine3.lmat.color = ColorManager.Instance.GetCurrentColor ();

		}
	
	
	}

	public IEnumerator delline(){

		numClicks = 0;
		currLine.transform.SetParent (meshparent);
		currLine = null;

		if (BrushManager.brushswitchint == 2) {

			numClicks = 0;
			currLine1.transform.SetParent (meshparent);
			currLine1 = null;


		}
		yield return null;

	}

#if UNITY_ANDROID || UNITY_IOS



    public void painterStart(){

		if (this.enabled == true) {

			if (BrushManager.freeformbool == false) {


				GameObject go = new GameObject ();
				go.AddComponent<MeshFilter> ();
				go.AddComponent<MeshRenderer> ();
				go.AddComponent < MeshCollider> ().sharedMesh = go.GetComponent<MeshFilter> ().mesh;
				currLine = go.AddComponent<MeshLineRenderer> ();

				currLine.setWidth (BrushManager.cursorsize);
				currLine.lmat = new Material (matter);


				if (BrushManager.brushswitchint == 2) {


					GameObject go1 = new GameObject ();
					go1.AddComponent<MeshFilter> ();
					go1.AddComponent<MeshRenderer> ();
				//	go1.AddComponent < MeshCollider> ().sharedMesh = go.GetComponent<MeshFilter> ().mesh;
					currLine1 = go1.AddComponent<MeshLineRenderer> ();

					currLine1.setWidth (BrushManager.cursorsize);
					currLine1.lmat = new Material (matter);

					GameObject go2 = new GameObject ();
					go2.AddComponent<MeshFilter> ();
					go2.AddComponent<MeshRenderer> ();
				//	go2.AddComponent < MeshCollider> ().sharedMesh = go.GetComponent<MeshFilter> ().mesh;
					currLine2 = go2.AddComponent<MeshLineRenderer> ();

					currLine2.setWidth (BrushManager.cursorsize);
					currLine2.lmat = new Material (matter);

					GameObject go3 = new GameObject ();
					go3.AddComponent<MeshFilter> ();
					go3.AddComponent<MeshRenderer> ();
				//	go3.AddComponent < MeshCollider> ().sharedMesh = go.GetComponent<MeshFilter> ().mesh;
					currLine3 = go3.AddComponent<MeshLineRenderer> ();

					currLine3.setWidth (BrushManager.cursorsize);
					currLine3.lmat = new Material (matter);



				}



			} else {
				if (firstPointtime == true) {


					//cant get the line render making points up to the sphere, It works a point behind the point creator and is annoying because of the way the mesh line render works so you cant make the same point twice or else it really messes with it


					//	currLine.setWidth (BrushManager.cursorsize);
					//	currLine.AddPoint ((lastpos+ trackedObj.transform.position)/2);
					//currLine.AddPoint (trackedObj.transform.position);
					//numClicks++;


					//	currLine.setWidth (BrushManager.cursorsize);
					//	currLine.AddPoint (lastpos + (lastpos -sphere.transform.position)*.02f );
				
					if (BrushManager.brushswitchint == 1) {
						currLine.AddPoint (sphereHigh.position, sphereLow.position);
						numClicks++;

					}
					else if (BrushManager.brushswitchint == 2) {


					

					
						currLine.AddPoint (spherelh.position,spherell.position);
						numClicks++;

						currLine1.AddPoint (sphererh.position,sphererl.position);
						numClicks++;


					
						currLine2.AddPoint (spherelh.position,sphererh.position);
						numClicks++;

				
						currLine3.AddPoint (sphererl.position,spherell.position);
						numClicks++;


				


					}
						


					freeformRedo ();

					//	lastpos =sphere.transform.position;
					//	numClicks++;




				}
				if (firstPointtime == false) {


					GameObject go = new GameObject ();
					go.AddComponent<MeshFilter> ();
					go.AddComponent<MeshRenderer> ();
					currLine = go.AddComponent<MeshLineRenderer> ();
					go.AddComponent < MeshCollider> ().sharedMesh = go.GetComponent<MeshFilter> ().mesh;
					currLine.setWidth (BrushManager.cursorsize);
					currLine.lmat = new Material (matter);


				

					if (BrushManager.brushswitchint == 2) {

						GameObject go1 = new GameObject ();
						go1.AddComponent<MeshFilter> ();
						go1.AddComponent<MeshRenderer> ();
						currLine1 = go.AddComponent<MeshLineRenderer> ();

						currLine1.setWidth (BrushManager.cursorsize);
						currLine1.lmat = new Material (matter);



						GameObject go2 = new GameObject ();
						go2.AddComponent<MeshFilter> ();
						go2.AddComponent<MeshRenderer> ();
						currLine2 = go2.AddComponent<MeshLineRenderer> ();

						currLine2.setWidth (BrushManager.cursorsize);
						currLine2.lmat = new Material (matter);

						GameObject go3 = new GameObject ();
						go3.AddComponent<MeshFilter> ();
						go3.AddComponent<MeshRenderer> ();
						currLine3 = go3.AddComponent<MeshLineRenderer> ();

						currLine3.setWidth (BrushManager.cursorsize);
						currLine3.lmat = new Material (matter);

					

					}
					freeformRedo ();

					firstPointtime = true;


				}
			}

		}
}


	public void freeformRedo(){
		//this makes the point catchup

		if (BrushManager.brushswitchint == 1) {
			currLine.AddPoint (sphereHigh.position, sphereLow.position);
			numClicks++;

		}
		else if (BrushManager.brushswitchint == 2) {





			currLine.AddPoint (spherelh.position,spherell.position);
			numClicks++;

			currLine1.AddPoint (sphererh.position,sphererl.position);
			numClicks++;



			currLine2.AddPoint (spherelh.position,sphererh.position);
			numClicks++;


			currLine3.AddPoint (sphererl.position,spherell.position);
			numClicks++;





		}

	}

	public void painterEnd(){




		if (this.enabled == true) {
			


			if (BrushManager.freeformbool == false) {
				//	currLine.setVertexCount(numClicks +1);
				if (BrushManager.brushswitchint == 2) {

					//makes the square all one game object

					currLine1.gameObject.transform.SetParent (currLine.gameObject.transform);

					currLine2.gameObject.transform.SetParent (currLine.gameObject.transform);
					currLine3.gameObject.transform.SetParent (currLine.gameObject.transform);

					currLine1 = null;
					currLine2 = null;
					currLine3 = null;
				}



				UndoManager.GetComponent<UndoManager> ().strokes.Add (currLine.gameObject);
				UndoManager.GetComponent<UndoManager> ().globalUndo.Add (0);
				numClicks = 0;
				currLine.transform.SetParent (meshparent);
				currLine = null;


			
			
			} 










		}

	}


#endif





		


	public void pointbreaker(){
	
		if (BrushManager.brushswitchint == 2 ) {

			//makes the square all one game object
			if (currLine1 != null) {
				currLine1.gameObject.transform.SetParent (currLine.gameObject.transform);

				currLine2.gameObject.transform.SetParent (currLine.gameObject.transform);
				currLine3.gameObject.transform.SetParent (currLine.gameObject.transform);

				currLine1 = null;
				currLine2 = null;
				currLine3 = null;
			}
		}


		if (currLine != null) {
			firstPointtime = false;
			UndoManager.GetComponent<UndoManager> ().strokes.Add (currLine.gameObject);
			numClicks = 0;
			currLine.transform.SetParent (meshparent);
		}
			currLine = null;

	}
	
}
