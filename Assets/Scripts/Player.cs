using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    float speed;

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

        gameObject.transform.Translate(speed * Time.deltaTime * Vector3.right);
    }

    private void OnCollisionEnter(Collision collision)
    {
        speed = 0;
    }
}
