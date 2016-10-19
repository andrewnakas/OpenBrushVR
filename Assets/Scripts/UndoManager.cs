using UnityEngine;
using System.Collections;
using System.Collections.Generic;
public class UndoManager : MonoBehaviour {
	public List<GameObject> strokes;
	public List<GameObject> redostrokes;
	public GameObject redoButton;

	public Transform meshexporter;
	// Use this for initialization
	void Start () {
		//need to make this a singlton 
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
		strokes [strokes.Count - 1].transform.SetParent(meshexporter);
		strokes.Add (redostrokes [redostrokes.Count - 1]);
			redostrokes.Remove (	redostrokes [redostrokes.Count - 1]);
		}

	}

