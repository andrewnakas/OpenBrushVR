using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class HideAll : MonoBehaviour {
    public GameObject canvasHide;
    public GameObject canvasParent;
    public GameObject hideParent;
    public GameObject hideButton;
    public bool isHiding;

	// Use this for initialization
	void Start () {
		
	}

    // Update is called once per frame
    void Update() {

    }
    public void hider()
    {
        isHiding = !isHiding;
        if (isHiding == true)
        {
            hideButton.GetComponent<Image>().color = new Vector4(0, 0, 0, 0);
            hideButton.transform.GetChild(0).GetComponent<Text>().enabled = false;
            hideButton.transform.parent = canvasParent.transform;
            canvasHide.SetActive(false);
        }
        else
        {
            hideButton.GetComponent<Image>().color = new Vector4(255, 255, 255, 100);
            hideButton.transform.GetChild(0).GetComponent<Text>().enabled = true;
            hideButton.transform.parent = hideParent.transform;
            canvasHide.SetActive(true);
        }
    }
}
