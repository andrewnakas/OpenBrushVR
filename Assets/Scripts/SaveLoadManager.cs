using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SaveLoadManager : MonoBehaviour {
	public GameObject objectsParent;
	public GameObject[] strokeObjects;

	public SaveInjector[] SaveFiles;


	public byte[] data;



	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

	}

	public void getAllStrokes(){
		for (int i = 0; i > objectsParent.transform.childCount; i++) {



			strokeObjects[i] = objectsParent.transform.GetChild (i).gameObject;
			SaveFiles [i] = objectsParent.transform.GetChild (i).gameObject.GetComponent<SaveInjector>();




		}


	}


	public void saveMesh(){

		getAllStrokes ();
		for (int i = 0; i> strokeObjects.Length; i++ ){


			//SaveFiles [i].

		
		
		}


	}

	public void loadMesh(){






	}
}
