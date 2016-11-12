using UnityEngine;
using System.Collections;
using System.Collections.Generic;




public class UndoManager : MonoBehaviour {
	public List<GameObject> strokes;
	public List<GameObject> redostrokes;


	public List<GameObject> del;
	public List<GameObject> redodel;

	public List<int> globalUndo;
	public List<int> globalRedo;

	public GameObject redoButton;
	public GameObject redotButton;
		public Transform meshexporter;



	public GameObject tempG;
	public class PrevTrans {

		public Vector3  Prevpos;
		public Quaternion  Prevrot;
		public Vector3  Prevscale;
		public GameObject SelectedG;

		public PrevTrans ( 	Vector3  prevpos ,Quaternion  prevrot, Vector3  prevscale, GameObject selectedG){
			Prevpos = prevpos;
			Prevrot=prevrot;
			Prevscale =  prevscale;
			SelectedG = selectedG;        
		}
	}
	public List<PrevTrans> prevTrans = new List<PrevTrans>();


	public class RedoTrans {

		public Vector3  Redopos;
		public Quaternion  Redorot;
		public Vector3  Redoscale;
		public GameObject RSelectedG;

		public RedoTrans ( Vector3  redopos ,Quaternion  redorot, Vector3  redoscale, GameObject rselectedG){
			Redopos = redopos;
			Redorot=redorot;
			Redoscale =  redoscale;
			RSelectedG = rselectedG;        
		}
	}
	public List<RedoTrans> redoTrans = new List<RedoTrans>();
	// Use this for initialization
	void Start () {
		//need to make this a singlton 
	
	//	prevTrans.Add (new PrevTrans (this.transform, this.gameObject));
	}

	// Update is called once per frame
	void Update () {


		if (globalRedo.Count >= 1) {

			redoButton.SetActive (true);

		} else {

			redoButton.SetActive (false);

		}


	
	}


	public void globalUndoer(){
		if (globalUndo [globalUndo.Count - 1] == 0 ) {



			Undoer ();

		globalAdd (0);
			return;
		} 


		if ( globalUndo [globalUndo.Count - 1] == 1    ) {

			TransUndoer ();
			globalAdd (1);
	
			return;

		}

		if (globalUndo [globalUndo.Count - 1] == 2) {


			DelUndoer ();
			globalAdd (2);
			return;
		}
	}
	public void globalRedoer(){
		if (globalRedo [globalRedo.Count - 1] == 0 ) {


			Redoer ();
	globeRedo (0);

			return;
		} if ( globalRedo [globalRedo.Count - 1] == 1    ) {



			TransRedoer ();

	globeRedo(1);

			return;
		}

		if ( globalRedo [globalRedo.Count - 1] == 2    ) {



			DelRedoer ();

			globeRedo(2);
			return;
		}
	}



	//coroutines  to manage the undo lists
	 public void globalAdd(int ok){

		globalRedo.Add (ok);
		globalUndo.RemoveAt (globalUndo.Count - 1);
	
	}


	public 	void globeRedo(int ok){

		globalUndo.Add (ok);
		globalRedo.RemoveAt (globalRedo.Count - 1);
	
	}






	public void Undoer(){

		if (strokes.Count >= 1) {


			//destroy objec.
			strokes [strokes.Count - 1].transform.SetParent(null);
			strokes [strokes.Count - 1].SetActive (false);

			redostrokes.Add (strokes [strokes.Count - 1]);
			strokes.Remove (	strokes [strokes.Count - 1]);
		}

	}

	public void Redoer(){

	

	
			//destroy objec.
			redostrokes [redostrokes.Count - 1].SetActive (true);

		strokes.Add (redostrokes [redostrokes.Count - 1]);
		strokes [strokes.Count - 1].transform.SetParent(meshexporter);

			redostrokes.Remove (	redostrokes [redostrokes.Count - 1]);
		}


	public void DelUndoer(){
//		Debug.Log ("Fireromnh");
		if (del.Count >= 1) {


			//destroy objec.
			del [del.Count - 1].transform.SetParent(meshexporter);
			del [del.Count - 1].SetActive (true);

			redodel.Add (del [del.Count - 1]);
			del.Remove (	del [del.Count - 1]);
		}

	}

	public void DelRedoer(){




		//destroy objec.
		redodel[redodel.Count - 1].SetActive (false);

		del.Add (redodel [redodel.Count - 1]);
		redodel [redodel.Count - 1].transform.SetParent(null);

		redodel.Remove (	redodel [redodel.Count - 1]);
	}


	//transform undood still need to add redo in and add it to the global undo system


	public void TransUndoer(){

		if (prevTrans.Count >= 1) {

		
			//destroy objec.

			if (prevTrans [prevTrans.Count - 1].SelectedG != null) {

				tempG = prevTrans [prevTrans.Count - 1].SelectedG;
				redoTrans.Add (new RedoTrans (tempG.transform.position, tempG.transform.rotation, tempG.transform.localScale, tempG));

				tempG.transform.position = prevTrans [prevTrans.Count - 1].Prevpos;

				tempG.transform.rotation = prevTrans [prevTrans.Count - 1].Prevrot;
				tempG.transform.localScale = prevTrans [prevTrans.Count - 1].Prevscale;

			}
			//redostrokes.Add (strokes [strokes.Count - 1]);
			prevTrans.Remove (		prevTrans [	prevTrans.Count - 1]);
		}

	}


	public void TransRedoer(){

		if (redoTrans.Count >= 1) {


			//destroy objec.

			if (redoTrans [redoTrans.Count - 1].RSelectedG != null) {
			

				tempG = redoTrans [redoTrans.Count - 1].RSelectedG;
				prevTrans.Add (new PrevTrans (tempG.transform.position, tempG.transform.rotation, tempG.transform.localScale, tempG));
				tempG.transform.position = redoTrans [redoTrans.Count - 1].Redopos;

				tempG.transform.rotation = redoTrans [redoTrans.Count - 1].Redorot;
				tempG.transform.localScale = redoTrans [redoTrans.Count - 1].Redoscale;
				//prevTrans.Add (new PrevTrans (redoTrans [redoTrans.Count - 1].Redopos, redoTrans [redoTrans.Count - 1].Redorot, redoTrans [redoTrans.Count - 1].Redoscale, redoTrans [redoTrans.Count - 1].RSelectedG));
			}
			//redostrokes.Add (strokes [strokes.Count - 1]);
			redoTrans.Remove (		redoTrans [	redoTrans.Count - 1]);
		}

	}

}



