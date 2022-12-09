using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DefeatTrigger : MonoBehaviour
{
    private Factory factory;
    private GameObject player;
    private void Awake()
    {
        factory = FindObjectOfType<Factory>();
        player = GameObject.FindWithTag("Player");
    }
    private void OnTriggerEnter(Collider other)
    {
        Death.Defeat(player);

        if(factory.PizzaCount > 0)
        {
            foreach (var item in factory.PizzaList[^1].GetComponentsInChildren<Rigidbody>())
                item.GetComponent<Rigidbody>().isKinematic = false;
        }
    }
}
