using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Finish : MonoBehaviour
{
    private FinishScreen fScreen;

    private void Awake() => fScreen = FindObjectOfType<FinishScreen>(true);
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            fScreen.OpenFinishScreen();
        }
    }
}
