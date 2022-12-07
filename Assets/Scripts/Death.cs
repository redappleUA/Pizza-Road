using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Death : MonoBehaviour
{
    private Factory factory;

    private void Start() => factory = FindObjectOfType<Factory>().GetComponent<Factory>();
    private void LateUpdate()
    {
        if (transform.position.z < -1)
        {
            gameObject.GetComponent<Rigidbody>().useGravity = true;
            gameObject.GetComponent<Rigidbody>().freezeRotation = false;
        }
        if (factory.PizzaCount == 0) //TODO: Game Screen
        {
            gameObject.GetComponent<Rigidbody>().useGravity = true;
            gameObject.GetComponent<Rigidbody>().freezeRotation = false;
        }
    }
}
