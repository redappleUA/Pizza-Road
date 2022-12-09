using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float speed { get; set; } = 0;
    private Factory factory;
    private string rotationDirection;
    private Score score;
    public bool isStartMoving { get; private set; } = false;
    private bool isStartTiming = false;

    private void Awake()
    {
        factory = FindObjectOfType<Factory>();
        score = FindObjectOfType<Score>();

        SwipeDetection.SwipeEvent += OnSwipe;
    }
    private void FixedUpdate()
    {
        if (!Death.isDefeat && !FinishScreen.isFinished) //Block the moving after death/victory
        {
            //Move faster
            if (speed < 10)
            {
                if (rotationDirection is "up")
                {
                    speed++;
                    isStartMoving = true;
                    rotationDirection = null;
                }
            }
            //Move slowly
            if (speed > 0)
            {
                if (rotationDirection is "down")
                {
                    speed--;
                    rotationDirection = null;
                }
            }

            gameObject.transform.Translate(speed * Time.fixedDeltaTime * Vector3.down);

            //Strart the timer
            if (isStartMoving && !isStartTiming)
            {
                score.StartTimer();
                isStartTiming = true;
            }
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        speed = 0;

        //Allows the top pizza box to fall
        if (factory.PizzaCount > 0 && collision.gameObject.CompareTag("Vehicle")) 
        {
            factory.PizzaList[^1].transform.parent = null;

            foreach (var item in factory.PizzaList[^1].GetComponentsInChildren<Rigidbody>())
                item.GetComponent<Rigidbody>().isKinematic = false;


            factory.PizzaList.RemoveAt(factory.PizzaList.Count - 1);
            factory.PizzaCount--;

            score.PizzaFalling();
        }
    }

    private void OnDestroy()
    {
        SwipeDetection.SwipeEvent -= OnSwipe;
    }

    //OnSwipe is called on each swipe
    private void OnSwipe(Vector2 direction)
    {
        rotationDirection = direction == Vector2.up ? "up" :
            direction == Vector2.down ? "down" : null;
    }
}
