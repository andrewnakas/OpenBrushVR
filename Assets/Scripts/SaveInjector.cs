using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//this 
public class SaveInjector : MonoBehaviour {
	public int saveNumber;


	public string fileName = "SerializedMesh.data";
	public bool saveTangents = false;

	public byte[] feedSave;


	// Use this for initialization
	public  byte[]  SaveMesh () {
		Mesh inputMesh = GetComponent<MeshFilter>().mesh;
		string fullFileName = Application.dataPath + "/" + fileName;
		feedSave =	MeshSerializer.WriteMesh (inputMesh, saveTangents);
		print ("Saved " + name + " mesh to " + fullFileName );


		return feedSave; 
	}


	public Matrix4x4 trsSave(){

		Matrix4x4 m = Matrix4x4.TRS (transform.position, transform.rotation, transform.localScale);



		return m;


	}

	// Update is called once per frame
	void Update () {
		
	}
}
