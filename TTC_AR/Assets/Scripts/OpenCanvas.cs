using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using Vuforia;

public class OpenCanvas : MonoBehaviour
{
    public GameObject targetCanvas, btnOpen, btnClose;
    public GameObject generalPanel;
    public string tagName;

    bool isShowCanvas = false;
    public List<GameObject> imageTargetsParents;
    public GameObject specificImageTarget;

    // Start is called before the first frame update
    void Start()
    {
        targetCanvas.SetActive(false);
        generalPanel.SetActive(true);
        btnOpen.SetActive(true);
        btnClose.SetActive(false);
        if (imageTargetsParents.Contains(specificImageTarget))
        {
            imageTargetsParents.Remove(specificImageTarget);
        }

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
        btnOpen.SetActive(false);
        btnClose.SetActive(true);
        foreach (GameObject imageTargetsParent in imageTargetsParents)
        {
            imageTargetsParent.SetActive(false);
        }

    }
    void onCloseCanvas()
    {
        targetCanvas.SetActive(false);
        btnClose.SetActive(false);
        btnOpen.SetActive(true);
        foreach (GameObject imageTargetsParent in imageTargetsParents)
        {
            imageTargetsParent.SetActive(true);
        }
    }
}
