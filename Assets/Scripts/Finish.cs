using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Finish : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
#warning TODO: Finish
        if (other.gameObject.CompareTag("Player"))
        {
            Death.Defeat(other.gameObject);
            print("YEAP");
        }
    }
}
