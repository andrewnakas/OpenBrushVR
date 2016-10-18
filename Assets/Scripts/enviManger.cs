using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class enviManger : MonoBehaviour {
	public bool groundVis;
	public GameObject ground;
	public Text groundbutton;
	public Material[] Skyboxes; 
	public int skyboxint= 6;

	public Text enviormentText;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void groundswitch()
	{
		groundVis = !groundVis;

		if (groundVis == true) {

			groundbutton.text = "Ground: False";
			ground.GetComponent<MeshRenderer>().enabled =  false;

		} else {


			groundbutton.text = "Ground: True";
			ground.GetComponent<MeshRenderer> ().enabled = true;
		}



	}

	public void SkyboxSwitch()
	{
		skyboxint--;
		switch (skyboxint)
			{

		case 4:
			RenderSettings.skybox = Skyboxes [skyboxint];
			enviormentText.text = "Enviorment: Gray";
				break;
			case 3:
			RenderSettings.skybox = Skyboxes [skyboxint];
			enviormentText.text = "Enviorment: Space";
				break;
			case 2:
			RenderSettings.skybox = Skyboxes [skyboxint];
			enviormentText.text = "Enviorment: White";
				break;
			case 1:
			RenderSettings.skybox = Skyboxes [skyboxint];
			enviormentText.text = "Enviorment: Night Sky";
				break;
		default:
			RenderSettings.skybox = Skyboxes [skyboxint];
			enviormentText.text = "Enviorment: Blue Sky";
			skyboxint = 6;
				break;
			}
		}

	
}
