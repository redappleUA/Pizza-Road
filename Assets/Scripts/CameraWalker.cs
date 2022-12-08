using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraWalker : MonoBehaviour
{
    private GameObject player;
    private Vector3 offset;
    private Vector3 offsetStop;
    private bool isFounded = false;
    private Player playerInst;

    [SerializeField] private float magnitudeToDeath;
    [SerializeField] private float speedToDeath;
    void FixedUpdate()
    {
        if (!isFounded)
        {
            player = GameObject.Find("Vespa(Clone)");
            offset = transform.position - player.transform.position;
            playerInst = player.GetComponent<Player>(); 
            isFounded = true;
        }
        
        if (playerInst.isStartMoving)
        {
            if (playerInst.speed < 1)
            {
                transform.position += speedToDeath * Time.fixedDeltaTime * Vector3.right;
                offsetStop = transform.position - player.transform.position;

                print(offsetStop.magnitude);
                if (offsetStop.magnitude < magnitudeToDeath)
                {
                    Death.Defeat(player);
                }
            }
            else if (isFounded)
            {
                if (offsetStop.magnitude < offset.magnitude)
                {
                    offsetStop = transform.position - player.transform.position;
                }
                else
                    transform.position = player.transform.position + offset;
            }  
        }
    }
}