using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class NavScene : MonoBehaviour
{
    public string previousSceneName;
    public List<string> recentSceneName;
    public List<Button> listButton;
    private int index;
    void Start()
    {
        foreach (Button button in listButton)
        {
            int index = listButton.IndexOf(button);
            button.onClick.AddListener(NavigateNewScene);
        }

    }
    public void NavigateNewScene()
    {
        if (GlobalVariable.recentScene != recentSceneName[index])
        {
            GlobalVariable.recentScene = recentSceneName[index];
            GlobalVariable.previousScene = previousSceneName;
            SceneManager.LoadScene(recentSceneName[index]);
            PlayerPrefs.SetString(recentSceneName[index], SceneManager.GetActiveScene().name);
        }

    }
}