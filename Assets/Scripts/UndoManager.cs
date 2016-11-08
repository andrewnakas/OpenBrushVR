using UnityEngine;
using System.Collections;
using System.Collections.Generic;




public class UndoManager : MonoBehaviour {
	public List<GameObject> strokes;
	public List<GameObject> redostrokes;




	public GameObject redoButton;
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
		if (redostrokes.Count >= 1) {

			redoButton.SetActive (true);

		} else {

			redoButton.SetActive (false);

		}
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


	//transform undood still need to add redo in and add it to the global undo system


	public void TransUndoer(){

		if (prevTrans.Count >= 1) {

		
			//destroy objec.

			if (prevTrans [prevTrans.Count - 1].SelectedG != null) {
				tempG = prevTrans [prevTrans.Count - 1].SelectedG;
				tempG.transform.position = prevTrans [prevTrans.Count - 1].Prevpos;

				tempG.transform.rotation = prevTrans [prevTrans.Count - 1].Prevrot;
				tempG.transform.localScale = prevTrans [prevTrans.Count - 1].Prevscale;
				redoTrans.Add (new RedoTrans (prevTrans [prevTrans.Count - 1].Prevpos, prevTrans [prevTrans.Count - 1].Prevrot, prevTrans [prevTrans.Count - 1].Prevscale, prevTrans [prevTrans.Count - 1].SelectedG));
			}
			//redostrokes.Add (strokes [strokes.Count - 1]);
			prevTrans.Remove (		prevTrans [	prevTrans.Count - 1]);
		}

	}

}



