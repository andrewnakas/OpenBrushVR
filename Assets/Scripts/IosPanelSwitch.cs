using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IosPanelSwitch : MonoBehaviour {
    public GameObject points;
    public GameObject floors;
    public bool toggle;
	// Use this for initialization
	void Start () {
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }
	
	// Update is called once per frame
	void Update () {
		
	}
    public void ToggleDepthStuff()
    {
        toggle = !toggle;
        if (toggle == true)
        {
            points.SetActive(false);
            floors.SetActive(false);

        }
        else
        {
            points.SetActive(true);
            floors.SetActive(true);


        }


    }
}
