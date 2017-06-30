using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class depthFinder : MonoBehaviour {
	public GameObject sphere;
	public Camera cam;
#if UNITY_ANDROID
    public TangoPointCloud pc;
#endif
	public Text nearestPoint;
	public float pcReturn;
	public bool depthOff;
	public Material currentMat; 
	public Text depthButton;
	public Slider controllerPos;
	public GameObject sliderPos;
	// Use this for initialization

	//this script calls a modified tango find nearest point method to determine if the cursor is close to  
	void Start () {
		controllerPos.minValue = .4f;

	
	}
	public void depthSwitch(){

		depthOff = !depthOff;

		if (depthOff == true) {

			depthButton.text = "Depth Finder: False";
			currentMat.color = new Vector4 (1, 1, 1, .5f);
			controllerPos.minValue = 0;

		} else {

			depthButton.text = "Depth Finder: True";

			if (controllerPos.value < .4f) {

				controllerPos.value = .4f;
			}

			controllerPos.minValue = .4f;

			//sliderPos.transform.localPosition = new Vector3 (0, 0, .3f);


		}

	}
	// Update is called once per frame
	void Update () {


		if (depthOff == false) {

			//nearestPoint.gameObject.SetActive (true);
		//	findcenterPoint ();

		} else {

		//	nearestPoint.gameObject.SetActive (false);
		
		}
	}
/*
	public void findcenterPoint(){


		pcReturn = pc.FindClosestPointGameObject (sphere.transform, 1);

		//Debug.Log (pcReturn);
		//nearestPoint.text = pcReturn.ToString ();

		if (pcReturn < .2f) {


			currentMat.color = new Vector4 (1, .92f, .016f, .5f);
		} else 
		{


			currentMat.color = new Vector4 (1, 1, 1, .5f);
		}
}
*/

}
