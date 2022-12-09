using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class Death : MonoBehaviour
{
    private Factory factory;
    private static GameOverScreen gameOverScreen;

    private void Awake()
    {
        factory = FindObjectOfType<Factory>();
        gameOverScreen = FindObjectOfType<GameOverScreen>(true);
    }
    private void FixedUpdate()
    {
        if (factory.PizzaCount == 0)
        {
            gameOverScreen.OpenGameOverScreen();
        }
    }

    public static void Defeat(GameObject player)
    {
        player.GetComponent<Player>().speed = 0;
        var rb = player.GetComponent<Rigidbody>();
        rb.useGravity = true;
        rb.isKinematic = false;

        gameOverScreen.OpenGameOverScreen();
    }
}
