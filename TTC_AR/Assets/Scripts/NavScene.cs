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
        if (UnityEngine.Rendering.DebugManager.instance.enableRuntimeUI)
            UnityEngine.Rendering.DebugManager.instance.enableRuntimeUI = false;
        for (int i = 0; i < listButton.Count; i++)
        {
            int localIndex = i; // Tạo bản sao cục bộ của i
            listButton[i].onClick.AddListener(() => NavigateNewScene(localIndex));
        }
    }

    public void NavigateNewScene(int buttonIndex)
    {
        if (GlobalVariable.recentScene != recentSceneName[buttonIndex])
        {
            GlobalVariable.recentScene = recentSceneName[buttonIndex];
            GlobalVariable.previousScene = previousSceneName;
            SceneManager.LoadSceneAsync(recentSceneName[buttonIndex]);
            PlayerPrefs.SetString(recentSceneName[buttonIndex], SceneManager.GetActiveScene().name);
        }
    }
}
