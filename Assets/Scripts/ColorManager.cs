using UnityEngine;
using System.Collections;

public class ColorManager : MonoBehaviour {
	public static ColorManager Instance;
	public ColorPicker picker;
	public Color col;
	void Awake(){

		if (Instance == null) {

			Instance = this;

		}
	}
	void OnDestroy(){
		if (Instance ==this) {

			Instance = null;

		}


	}
	private Color color;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void OnColorChange(){

		col =  picker.CurrentColor;

	}
	public Color GetCurrentColor(){

		return col; 

	}
}
