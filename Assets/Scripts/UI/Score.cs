using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;

public class Score : MonoBehaviour
{
    [SerializeField] int time;
    private int remainingTime;

    /// <summary>
    /// The current remaining time of timer
    /// </summary>
    public int timer { get; private set; }

    /// <summary>
    /// Highscore
    /// </summary>
    public string highscore { get; private set; }

    private float playerPos;
    private bool checkPos = true;

    /// <summary>
    /// Count of falled pizzas
    /// </summary>
    public int fallPizzaCount { get; private set; } = 0;

    /// <summary>
    /// the Score
    /// </summary>
    public int ScorePoint { get; private set; }

    void Start()
    {
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

        if (transform.position.x > playerPos + 5)
        {
            if (!Death.isDefeat) //After death do not encrease the score
            {
                ScorePoint++;
                checkPos = true;
            }
        }

        if (ScorePoint < 0) ScorePoint = 0; //Score cant be less the zero
    }

    public void PizzaFalling()
    {
        fallPizzaCount++;
        if (!Death.isDefeat)
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
        if(PlayerPrefs.GetInt("Highscore") < ScorePoint)
        {
            PlayerPrefs.SetInt("Highscore", ScorePoint);
            highscore = PlayerPrefs.GetInt("Highscore").ToString();
        }
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
            timer = remainingTime;
            yield return new WaitForSeconds(1f);

            //If timer is end
            if (remainingTime == 0)
            {
                Death.Defeat(gameObject);
            }
        }
    }
}