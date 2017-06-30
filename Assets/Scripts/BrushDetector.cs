using UnityEngine;
using System.Collections;

public class BrushDetector : MonoBehaviour {
	
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void OnCollisionEnter(Collision col){
		if (ToolManager.curSelGameObject == null) {
			ToolManager.curSelGameObject = col.gameObject;
		//	Debug.Log ("hittinh");

		}

	}

	public void OnCollisionExit(Collision col){
		if (col.gameObject == ToolManager.curSelGameObject) {
			ToolManager.curSelGameObject = null;

		}
		Debug.Log ("hittinh");

	}
}
