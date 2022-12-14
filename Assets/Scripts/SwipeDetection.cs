using UnityEngine;

public class SwipeDetection : MonoBehaviour
{
    public static event OnSwipeInput SwipeEvent;
    public delegate void OnSwipeInput(Vector2 direction);

    private Vector2 tapPosition;
    private Vector2 swipeDelta;

    private readonly float deadZone = 80;
    private bool isSwiping;
    private bool isMobile;

    void Start()
    {
        isMobile = Application.isMobilePlatform;
    }

    void Update()
    {
        if (!isMobile)
        {
            if (Input.GetMouseButtonDown(0)) //If we tap the button
            {
                isSwiping = true;
                tapPosition = Input.mousePosition;
            }
            else if (Input.GetMouseButtonUp(0)) //If we release the button
                ResetSwipe();
        }
        else
        {
            if (Input.touchCount > 0)
            {
                if (Input.GetTouch(0).phase == TouchPhase.Began) //If the touching has just begun
                {
                    isSwiping = true;
                    tapPosition = Input.GetTouch(0).position;
                }
                else if (Input.GetTouch(0).phase == TouchPhase.Canceled || Input.GetTouch(0).phase == TouchPhase.Ended) //If the touching ended
                {
                    ResetSwipe();
                }
            }
        }
        CheckSwipe();
    }

    private void CheckSwipe()
    {
        swipeDelta = Vector2.zero; //Reset the delta

        if (isSwiping)
        {
            //Calculate the delta
            if (!isMobile && Input.GetMouseButton(0))
                swipeDelta = (Vector2)Input.mousePosition - tapPosition;
            else if (Input.touchCount > 0)
                swipeDelta = Input.GetTouch(0).position - tapPosition;
        }
        if (swipeDelta.magnitude > deadZone) //If the swipe happened
        {
            if (SwipeEvent != null) //If the event have subscribers
            {
                if (Mathf.Abs(swipeDelta.x) > Mathf.Abs(swipeDelta.y)) //If swipe is horizontal
                    SwipeEvent(swipeDelta.x > 0 ? Vector2.right : Vector2.left);
                else                                                   //If swipe is vertical
                    SwipeEvent(swipeDelta.y > 0 ? Vector2.up : Vector2.down);
            }
            ResetSwipe();
        }
    }

    private void ResetSwipe()
    {
        isSwiping = false;

        tapPosition = Vector2.zero;
        swipeDelta = Vector2.zero;
    }
}