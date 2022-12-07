using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    private float speed;
    private Factory factory;

    private void Start() => factory = FindObjectOfType<Factory>();
    private void Update()
    {
        if(speed < 10)
        {
            if (Input.GetKeyDown(KeyCode.W)) speed++;
        }

        if(speed > 0)
        {
            if (Input.GetKeyDown(KeyCode.S)) speed--;
        }

        gameObject.transform.Translate(speed * Time.deltaTime * Vector3.down);
    }

    private void OnCollisionEnter(Collision collision)
    {
        speed = 0;

        if(factory.PizzaCount > 0) 
        {
            factory.PizzaList[^1].transform.parent = null;
            //factory.PizzaList[^1].transform.Translate(10 * Time.deltaTime * Vector3.up);

            foreach (var item in factory.PizzaList[^1].GetComponentsInChildren<Rigidbody>())
                item.GetComponent<Rigidbody>().isKinematic = false;


            factory.PizzaList.RemoveAt(factory.PizzaList.Count - 1);
            factory.PizzaCount--;

        }
        print(factory.PizzaCount);
    }
}
