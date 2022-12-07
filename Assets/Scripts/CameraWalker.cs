using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraWalker : MonoBehaviour
{
    private GameObject player;
    private Vector3 offset;
    private bool isFounded = false;

    void Update()
    {
        if (!isFounded)
        {
            player = GameObject.Find("Vespa(Clone)");
            offset = transform.position - player.transform.position;
            isFounded = true;
        }
        if(isFounded)
            transform.position = player.transform.position + offset;
    }
}