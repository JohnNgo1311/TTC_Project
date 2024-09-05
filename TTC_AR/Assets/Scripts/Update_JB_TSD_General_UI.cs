using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System;

//! Script này sử dụng cho JB_TSD_General_Panel trong mỗi module

public class Update_JB_TSD_General_UI : MonoBehaviour
{

    private string rack_Name = "Rack_1";
    private string module_Name = "D1.1.I";
    private Module_General_Model module_General_Model;

    [SerializeField] private Canvas module_Canvas;
    [SerializeField] private RectTransform list_Devices_Transform;
    [SerializeField] private RectTransform jb_TSD_General_Transform;
    [SerializeField] private RectTransform jb_TSD_Detail_Transform;
    [SerializeField] private RectTransform jb_TSD_Connection_Vertical_Group;
    [SerializeField] private RectTransform jb_TSD_Connection_Horizontal_Group;
    [SerializeField] private Button jb_TSD_Connection_Button_Prefab;
    [SerializeField] private TMP_Text jb_TSD_Connection_Name_Prefab;
    [SerializeField] private TMP_Text jb_TSD_Connection_Location_Prefab;
    private void Start()
    {
        module_Canvas = GetComponentInParent<Canvas>();

        // Giảm thiểu việc sử dụng Find/GetComponent nhiều lần
        list_Devices_Transform = module_Canvas.transform.Find("List_Devices").GetComponent<RectTransform>();
        jb_TSD_Detail_Transform = module_Canvas.transform.Find("Detail_JB_TSD").GetComponent<RectTransform>();
        jb_TSD_General_Transform = module_Canvas.transform.Find("JB_TSD_General_Panel").GetComponent<RectTransform>();

        jb_TSD_Connection_Vertical_Group = jb_TSD_General_Transform.Find("Scroll_Area/Content/JB_TSD_Connection_Vertical_Group").GetComponent<RectTransform>();
        jb_TSD_Connection_Horizontal_Group = jb_TSD_Connection_Vertical_Group.Find("JB_TSD_Connection_Horizontal_Group").GetComponent<RectTransform>();

        jb_TSD_Connection_Button_Prefab = jb_TSD_Connection_Horizontal_Group.Find("JB_TSD_Connection_Button").GetComponent<Button>();
        jb_TSD_Connection_Name_Prefab = jb_TSD_Connection_Button_Prefab.transform.Find("JB_TSD_Connection_Name").GetComponent<TMP_Text>();
        jb_TSD_Connection_Location_Prefab = jb_TSD_Connection_Horizontal_Group.Find("JB_TSD_Connection_Location").GetComponent<TMP_Text>();

        Create_Module_General();
        Instantiate_JB_TSD_Connection_List();
    }

    private void Create_Module_General()
    {
        rack_Name = $"Rack_{module_Canvas.name.Substring(1, 1)}";
        module_Name = module_Canvas.gameObject.name.Split("_")[0];
        switch (rack_Name)
        {
            case "Rack_1":
                module_General_Model = GlobalVariable.rackData_GrapperA.Rack_1.Find(module => module.Module == module_Name);
                break;
            case "Rack_2":
                module_General_Model = GlobalVariable.rackData_GrapperA.Rack_2.Find(module => module.Module == module_Name);
                break;
            case "Rack_4":
                module_General_Model = GlobalVariable.rackData_GrapperA.Rack_4.Find(module => module.Module == module_Name);
                break;
            case "Rack_5":
                module_General_Model = GlobalVariable.rackData_GrapperA.Rack_5.Find(module => module.Module == module_Name);
                break;
            case "Rack_6":
                module_General_Model = GlobalVariable.rackData_GrapperA.Rack_6.Find(module => module.Module == module_Name);
                break;
            default:
                break;
        }

    }
    private void Instantiate_JB_TSD_Connection_List()
    {
        foreach (var jb_TSD_Connection in module_General_Model.JbConnection)
        {
            // Giảm số lần Instantiate và Find
            var new_JB_TSD_Connection_Horizontal_Group = Instantiate(jb_TSD_Connection_Horizontal_Group, jb_TSD_Connection_Vertical_Group);
            var new_JB_TSD_Connection_Button = new_JB_TSD_Connection_Horizontal_Group.gameObject.transform.Find("JB_TSD_Connection_Button").GetComponent<Button>();
            var new_JB_TSD_Connection_Name = new_JB_TSD_Connection_Button.transform.Find("JB_TSD_Connection_Name").GetComponent<TMP_Text>();
            var new_JB_TSD_Connection_Location = new_JB_TSD_Connection_Horizontal_Group.Find("JB_TSD_Connection_Location").GetComponent<TMP_Text>();

            var jbParts = jb_TSD_Connection.Split('_');
            new_JB_TSD_Connection_Name.text = jbParts[0];
            new_JB_TSD_Connection_Location.text = jbParts.Length > 1 ? jbParts[1] : string.Empty;

            new_JB_TSD_Connection_Button.onClick.AddListener(() =>
             {
                 GlobalVariable.navigate_from_List_Devices = false;
                 GlobalVariable.navigate_from_JB_TSD_General = true;
                 NavigateJBDetailScreen(jb_TSD_Connection);
             });
        }
        jb_TSD_Connection_Horizontal_Group.gameObject.SetActive(false);
    }

    public void NavigateJBDetailScreen(string jB_TSD_Connection)
    {
        GlobalVariable.jb_TSD_Title = jB_TSD_Connection; // Name_Location of JB
        if (GlobalVariable.navigate_from_JB_TSD_General)
        {
            jb_TSD_General_Transform.gameObject.SetActive(false);
            jb_TSD_Detail_Transform.gameObject.SetActive(true);
        }
        if (GlobalVariable.navigate_from_List_Devices)
        {
            list_Devices_Transform.gameObject.SetActive(false);
            jb_TSD_Detail_Transform.gameObject.SetActive(true);
        }
    }

}

