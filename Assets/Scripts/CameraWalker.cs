using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraWalker : MonoBehaviour
{
    private GameObject player;
    private Vector3 offset;
    private Vector3 offsetStop;
    private Player playerInst;

    [SerializeField] private float magnitudeToDeath;
    [SerializeField] private float speedToDeath;

    private void Awake()
    {
        player = GameObject.Find("Player");
        offset = transform.position - player.transform.position;
        playerInst = player.GetComponent<Player>();
    }
    void FixedUpdate()
    {
        
        if (playerInst.isStartMoving)
        {
            if (playerInst.speed < 1)
            {
                if (FinishScreen.isFinished is false)
                {
                    transform.position += speedToDeath * Time.fixedDeltaTime * Vector3.right;
                    offsetStop = transform.position - player.transform.position;

                    if (offsetStop.magnitude < magnitudeToDeath)
                    {
                        Death.Defeat(player);
                    }
                }
            }
            else
            {
                if (offsetStop.magnitude < offset.magnitude)
                {
                    transform.position += speedToDeath * Time.fixedDeltaTime * Vector3.right;
                    offsetStop = transform.position - player.transform.position;
                }
                else
                    transform.position = player.transform.position + offset;
            }  
        }
    }
}