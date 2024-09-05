using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class Nav_Scene_Back : MonoBehaviour
{
    public string previousSceneName;
    public string recentSceneName;
    [SerializeField]
    private bool isOrientation = false;
    void Start()
    {

    }
    private void Awake()
    {
        if (isOrientation == false)
        {
            if (GlobalVariable.sceneNamesLandScape.Contains(GlobalVariable.recentScene))
            {
                Screen.orientation = ScreenOrientation.LandscapeLeft;
            }
            else
            {
                Screen.orientation = ScreenOrientation.Portrait;
            }
        }
        else
        {
            Screen.orientation = ScreenOrientation.AutoRotation;
        }
    }


    public void NavigatePop()
    {
        GlobalVariable.recentScene = recentSceneName;
        GlobalVariable.previousScene = previousSceneName;
        SceneManager.LoadScene(recentSceneName);
        PlayerPrefs.SetString(recentSceneName, SceneManager.GetActiveScene().name);
    }
}
