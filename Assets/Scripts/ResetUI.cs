using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ResetUI : MonoBehaviour {
    public GameObject confirmationScreen;

    // Use this for initialization
    void Start() {

    }

    // Update is called once per frame
    void Update() {

    }
    public void ResetStart() {
        confirmationScreen.SetActive(true);
        }

    public void ResetConfirm()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    } 
    public void ResetCancel()
    {

        confirmationScreen.SetActive(false);
    }



}
