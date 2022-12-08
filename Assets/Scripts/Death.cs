using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Death : MonoBehaviour
{
    private Factory factory;

    private void Awake() => factory = FindObjectOfType<Factory>().GetComponent<Factory>();
    private void LateUpdate()
    {
        if (transform.position.z < -1)
        {
            Defeat(gameObject);
        }
#warning TODO: Game Screen
        if (factory.PizzaCount == 0) //TODO: Game Screen
        {
            Defeat(gameObject);
        }
    }

    public static void Defeat(GameObject player)
    {
        player.GetComponent<Rigidbody>().useGravity = true;
        player.GetComponent<Rigidbody>().freezeRotation = false;
    }
}
