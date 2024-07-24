using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenCanvas : MonoBehaviour
{
    public GameObject targetCanvas, btnOpen, btnClose;
    public GameObject generalPanel;
    public string tagName;
    bool isShowCanvas = false;
    private GameObject gameObjectParent;
    // Start is called before the first frame update
    void Start()
    {
        targetCanvas.SetActive(false);
        generalPanel.SetActive(true);
        btnOpen.SetActive(true);
        btnClose.SetActive(false);
        gameObjectParent = targetCanvas.transform.parent.gameObject;
        gameObjectParent.SetActive(false);
    }
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit) && hit.collider.CompareTag(tagName))
            {
                if (isShowCanvas)
                {
                    onCloseCanvas();
                    isShowCanvas = false;
                }
                else
                {
                    onOpenCanvas();
                    isShowCanvas = true;
                }

            }

        }

    }

    void onOpenCanvas()
    {
        targetCanvas.SetActive(true);
        gameObjectParent.SetActive(true);
        btnClose.SetActive(true);
        btnOpen.SetActive(false);
    }
    void onCloseCanvas()
    {
        targetCanvas.SetActive(false);
        gameObjectParent.SetActive(false);
        btnClose.SetActive(false);
        btnOpen.SetActive(true);
    }
}
