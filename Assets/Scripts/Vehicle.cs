using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Vehicle : MonoBehaviour
{
    float speed;

    private void Start()
    {
        speed = Random.Range(4, 6);
    }
    private void Update()
    {
        gameObject.transform.Translate(speed * Time.deltaTime * Vector3.forward);
    }
}
