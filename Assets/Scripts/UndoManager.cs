using UnityEngine;
using System.Collections;
using System.Collections.Generic;
public class UndoManager : MonoBehaviour {
	public List<GameObject> strokes;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void Undoer(){

		if (strokes.Count >= 1) {


			//destroy objec.
			strokes [strokes.Count - 1].SetActive (false);

			strokes.Remove (	strokes [strokes.Count - 1]);
		}

	}
}
