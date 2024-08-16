using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Linq;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using System;

public class Gain_List_Devices_For_Search : MonoBehaviour
{
    public GameObject parent_Object;
    public GameObject prefab_Device;

    private int number_Of_Devices;

    void Start()
    {
        number_Of_Devices = GlobalVariable_Search_Devices.devices_Model_By_Grapper.Count;
        for (int i = 0; i < number_Of_Devices; i++)
        {
            DeviceModel new_Device = GlobalVariable_Search_Devices.devices_Model_By_Grapper[i];
            GameObject new_Object = Instantiate(prefab_Device, parent_Object.transform);
            new_Object.name = new_Device.code;

            if (new_Object != null)
            {
                Debug.Log("New object was created");
            }

            UpdateDeviceInformation(new_Object, new_Device);
            new_Object.SetActive(false);
        }
        Destroy(prefab_Device.gameObject);
    }

    private void UpdateDeviceInformation(GameObject new_GameObject, DeviceModel device)
    {
        // Lấy các thành phần TMP_Text từ object mới
        TMP_Text code = new_GameObject.transform.Find("information/code_group/code").GetComponent<TMP_Text>();
        TMP_Text function = new_GameObject.transform.Find("information/function_group/function").GetComponent<TMP_Text>();
        TMP_Text range_measurement = new_GameObject.transform.Find("information/range_measurement_group/range_measurement").GetComponent<TMP_Text>();
        TMP_Text I_O = new_GameObject.transform.Find("information/I_O_group/I_O").GetComponent<TMP_Text>();
        TMP_Text jb_name = new_GameObject.transform.Find("jb_information_group/jb_name").GetComponent<TMP_Text>();
        TMP_Text jb_location = new_GameObject.transform.Find("jb_information_group/jb_location").GetComponent<TMP_Text>();

        // Cập nhật giá trị text từ DeviceModel
        code.text = device.code;
        function.text = device.function;
        range_measurement.text = device.rangeMeasurement;
        I_O.text = device.ioAddress;

        List<string> jb_infor = JB_SplitString(device.jbConnection);
        jb_name.text = jb_infor[0];
        jb_location.text = jb_infor[1];
    }

    private List<string> JB_SplitString(string jb_infor)
    {
        string[] parts = jb_infor.Split('_');
        string jb_Name = parts[0];
        string jb_Location = parts[1];
        return new List<string> { jb_Name, jb_Location };
    }


    /* private void PreloadSprites()
     {
         Addressables.LoadAssetsAsync<Sprite>($"GrapperA_Module_Location_Rack{device_information[3]}", OnSpriteLoaded).Completed += OnSpritesLoadComplete;
         Addressables.LoadAssetsAsync<Sprite>("Real_Outdoor_JB_TSD", OnSpriteLoaded).Completed += OnSpritesLoadComplete;
         Addressables.LoadAssetsAsync<Sprite>("default", OnSpriteLoaded).Completed += OnSpritesLoadComplete;
     }
     private void OnSpriteLoaded(Sprite sprite)
     {
         spriteCache[sprite.name] = sprite;
     }

     private void OnSpritesLoadComplete(AsyncOperationHandle<IList<Sprite>> handle)
     {
         if (handle.Status != AsyncOperationStatus.Succeeded)
         {
             Debug.LogError("Failed to load sprites: " + handle.OperationException);
         }
     }*/

}
