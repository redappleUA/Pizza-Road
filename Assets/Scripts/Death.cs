using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class Death : MonoBehaviour
{
    public static bool isDefeat { get; set; }
    private Factory factory;

    private static GameOverScreen gameOverScreen;

    private void Awake()
    {
        factory = FindObjectOfType<Factory>();
        gameOverScreen = FindObjectOfType<GameOverScreen>(true);
    }

    private void Start() => isDefeat = false;
    private void FixedUpdate()
    {
        if (factory.PizzaCount == 0)
        {
            gameOverScreen.OpenGameOverScreen();
        }
    }

    //Player loss
    public static void Defeat(GameObject player)
    {
        isDefeat = true;
        player.GetComponent<Player>().speed = 0;
        var rb = player.GetComponent<Rigidbody>();
        rb.useGravity = true;
        rb.isKinematic = false;

        if(FinishScreen.isFinished is false)
            gameOverScreen.OpenGameOverScreen();
    }
}
