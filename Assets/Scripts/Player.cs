using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float speed { get; private set; }
    private Factory factory;
    public bool isStartMoving { get; private set; } = false;

    private void Awake() => factory = FindObjectOfType<Factory>();
    private void FixedUpdate()
    {
        if(speed < 10)
        {
            if (Input.GetKeyDown(KeyCode.W))
            {
                speed++;
                isStartMoving = true;
            }
        }

        if(speed > 0)
        {
            if (Input.GetKeyDown(KeyCode.S)) speed--;
        }

        gameObject.transform.Translate(speed * Time.fixedDeltaTime * Vector3.down);
    }

    private void OnCollisionEnter(Collision collision)
    {
        speed = 0;

        if(factory.PizzaCount > 0 && collision.gameObject.CompareTag("Vehicle")) 
        {
            factory.PizzaList[^1].transform.parent = null;

            foreach (var item in factory.PizzaList[^1].GetComponentsInChildren<Rigidbody>())
                item.GetComponent<Rigidbody>().isKinematic = false;


            factory.PizzaList.RemoveAt(factory.PizzaList.Count - 1);
            factory.PizzaCount--;
                
        }
    }
}
