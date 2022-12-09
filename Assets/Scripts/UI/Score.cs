using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;

public class Score : MonoBehaviour
{
    [SerializeField] int time;
    private int remainingTime;
    public string timer { get; private set; }
    public string highscore { get; private set; }

    private float playerPos;
    private bool checkPos = true;
    private uint fallPizzaCount = 0;
    public uint ScorePoint { get; private set; }

    private GameOverScreen gameOverScreen;

    void Start()
    {
        gameOverScreen = FindObjectOfType<GameOverScreen>(true);

        if (PlayerPrefs.HasKey("Highscore") == true)
        {
            highscore = PlayerPrefs.GetInt("Highscore").ToString();
        }
        else
        {
            highscore = "No High Scores Yet";
        }
    }

    private void FixedUpdate()
    {
        if (checkPos)
        {
            playerPos = transform.position.x;
            checkPos = false;
        }

        if(transform.position.x > playerPos + 5)
        {
            if (!gameOverScreen.gameObject.activeSelf)
            {
                ScorePoint++;
                checkPos = true;
            }
        }
    }

    public void PizzaFalling()
    {
        fallPizzaCount++;
        ScorePoint -= 2 * fallPizzaCount;
    }

    public void StartTimer()
    {
        remainingTime = time;
        StartCoroutine(IncrimentTime());
    }

    public void StopTimer()
    {
        StopAllCoroutines();
    }

    public void ResumeTimer()
    {
        StartCoroutine(IncrimentTime());
    }

    public void SetHighscore()
    {
        PlayerPrefs.SetInt("Highscore", (int)ScorePoint);
        highscore = PlayerPrefs.GetInt("Highscore").ToString();

    }

    public void ClearHighscores()
    {
        PlayerPrefs.DeleteKey("Highscore");
        highscore = "No High Scores Yet";
    }

    IEnumerator IncrimentTime()
    {
        while (true)
        {
            remainingTime -= 1;
            timer = remainingTime.ToString() + " sec";
            yield return new WaitForSeconds(1f);

            if (remainingTime == 0)
            {
                Death.Defeat(gameObject);
            }
        }
    }
}