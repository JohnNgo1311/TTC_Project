using UnityEngine;

public class TouchScale : MonoBehaviour
{
    private Vector2 initialTouchDistance;
    private Vector3 initialScale;
    private bool isScaling = false;

    private void Start()
    {
        initialScale = transform.localScale;
    }

    private void Update()
    {
        if (Input.touchCount == 2)
        {
            Touch touch0 = Input.GetTouch(0);
            Touch touch1 = Input.GetTouch(1);

            // Check if both touches are within the bounds of the GameObject
            if (IsTouchOverGameObject(touch0) && IsTouchOverGameObject(touch1))
            {
                // Calculate the distance between the two touches
                float currentTouchDistance = Vector2.Distance(touch0.position, touch1.position);

                if (!isScaling)
                {
                    initialTouchDistance = new Vector2(currentTouchDistance, currentTouchDistance);
                    isScaling = true;
                }
                else
                {
                    // Calculate scale factor
                    float scaleFactor = currentTouchDistance / initialTouchDistance.x;

                    // Apply scaling to the GameObject
                    transform.localScale = initialScale * scaleFactor;
                }
            }
        }
        else if (Input.touchCount < 2)
        {
            isScaling = false;
        }
    }

    private bool IsTouchOverGameObject(Touch touch)
    {
        Ray ray = Camera.main.ScreenPointToRay(touch.position);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit))
        {
            return hit.transform == transform;
        }
        return false;
    }
}
