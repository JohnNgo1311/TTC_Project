using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using Vuforia;
public class OpenCanvas : MonoBehaviour
{
    public GameObject targetCanvas, btnOpen, btnClose;
    public GameObject generalPanel;
    public string tagName;
    private bool isShowCanvas = false;


    // Cached reference to the main camera
    void Start()
    {
        targetCanvas.SetActive(false);
        generalPanel.SetActive(true);
        btnClose.SetActive(false);
        btnOpen.SetActive(true);
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0) || Input.touchCount > 0)
        {
            Vector3 inputPosition = Input.GetMouseButtonDown(0) ? Input.mousePosition : (Vector3)Input.GetTouch(0).position;
            HandleInput(inputPosition);
        }

    }

    private void HandleInput(Vector3 inputPosition)
    {
        Ray ray = Camera.main.ScreenPointToRay(inputPosition);
        if (Physics.Raycast(ray, out RaycastHit hit) && hit.collider.CompareTag(tagName))
        {

            if (isShowCanvas)
            {

                onCloseCanvas();
                isShowCanvas = false;

            }
            else
            {
                if (GlobalVariable.isOpenCanvas == false)
                {
                    onOpenCanvas();
                    isShowCanvas = true;
                }
            }

        }
    }

    private void onOpenCanvas()
    {
        targetCanvas.SetActive(true);
        btnOpen.SetActive(false);
        btnClose.SetActive(true);
        GlobalVariable.isOpenCanvas = true;
    }

    private void onCloseCanvas()
    {
        targetCanvas.SetActive(false);
        btnClose.SetActive(false);
        btnOpen.SetActive(true);
        GlobalVariable.isOpenCanvas = false;
    }

}
