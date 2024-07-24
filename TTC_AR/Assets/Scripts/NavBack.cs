using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class NavBack : MonoBehaviour
{
    public string previousSceneName;
    public string recentSceneName;
    void Start()
    {

    }
    private void Awake()
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


    public void NavigatePop()
    {
        GlobalVariable.recentScene = recentSceneName;
        GlobalVariable.previousScene = previousSceneName;
        SceneManager.LoadScene(recentSceneName);
        PlayerPrefs.SetString(recentSceneName, SceneManager.GetActiveScene().name);
    }
}
