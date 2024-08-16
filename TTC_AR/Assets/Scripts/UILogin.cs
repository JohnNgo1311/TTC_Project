using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class UILogin : MonoBehaviour
{

    public TMPro.TMP_InputField userNameField;
    public TMPro.TMP_InputField passwordField;
    public Button loginButton;
    public string targetSceneName;

    private void Awake()
    {
        Screen.orientation = ScreenOrientation.Portrait;

    }
    void Start()
    {
        //Subscribe to onClick event
        loginButton.onClick.AddListener(adminDetails);

    }

    Dictionary<string, string> staffDetails = new Dictionary<string, string>
    {
        {"ttc","123456" },
        {"admin","123456" },
        {"Nhut","123456" },

    };


    public void adminDetails()
    {
        string userName;
        userName = userNameField.text;
        string password;
        password = passwordField.text;
        string foundPassword;
        GlobalVariable.recentScene = targetSceneName;
        GlobalVariable.previousScene = "LoginScene";
        if (staffDetails.TryGetValue(userName, out foundPassword) && (foundPassword == password))
        {
            SceneManager.LoadScene(targetSceneName);

            // Lưu tên cảnh hiện tại
            PlayerPrefs.SetString(targetSceneName, SceneManager.GetActiveScene().name);

            //  Debug.Log("User authenticated");
        }
        else
        {
            Debug.Log("Invalid password");
        }


    }
}