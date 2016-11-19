using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
public class TangoCanvas : MonoBehaviour {
	public GameObject ColorM;
	public GameObject ToolC;
	public GameObject BrushM;
	public GameObject SettingsM;

	// Use this for initialization
	void Start () {
	
		Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Brushson();



		StartCoroutine (colorStart ());
	
	
	
	
	
	}
	public void motionLevelLoad(){


		SceneManager.LoadScene ("OpenBrush_Tango");




	}

	public void openbrushload(){
		SceneManager.LoadScene ("OpenBrush_Tango_Augmented_Reality");


	}
	public IEnumerator colorStart(){
		//turn on color selection at artart
		yield return new WaitForSeconds (.25f);

		settingon ();
		yield return new WaitForSeconds (.25f);
		Toolson ();

		yield return new WaitForSeconds (.25f);
		coloron ();
	}
	// Update is called once per frame
	void Update () {
	
	}
	public void settingon(){
		SettingsM.SetActive (true);
		ToolC.SetActive (false);
		BrushM.SetActive (false);
		ColorM.SetActive (false);
	} 

	public void Toolson(){
	ToolC.SetActive (true);
		SettingsM.SetActive (false);
		BrushM.SetActive (false);
		ColorM.SetActive (false);
	} 
	public void Brushson(){
		BrushM.SetActive (true);
		SettingsM.SetActive (false);
		ToolC.SetActive (false);
		ColorM.SetActive (false);
	} 
	public void coloron(){
		ColorM.SetActive (true);
		SettingsM.SetActive (false);
		BrushM.SetActive (false);
		ToolC.SetActive (false);
	}
	public void hideAll(){
		ColorM.SetActive (false);
		SettingsM.SetActive (false);
		BrushM.SetActive (false);
		ToolC.SetActive (false);
	} 



}
