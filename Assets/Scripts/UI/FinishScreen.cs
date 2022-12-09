using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;
using UnityEngine.SocialPlatforms.Impl;
using System.Collections.Generic;

public class FinishScreen : MonoBehaviour
{
    [SerializeField] List<Sprite> medals = new();

    private Label score;
    private Label highScore;
    private VisualElement medal;
    private Button nextButton;
    private Button exitButton;

    /// <summary>
    /// Check did the player finish
    /// </summary>
    public static bool isFinished { get; private set; }
    private Score scorePoint;
    private HUDScreen hudScreen;
    private GameOverScreen gameOverScreen;
    private void Awake()
    {
        gameObject.SetActive(false);
        scorePoint = FindObjectOfType<Score>();
        gameOverScreen = FindObjectOfType<GameOverScreen>();
        hudScreen = FindObjectOfType<HUDScreen>();
    }

    private void Start() => isFinished = false;
    public void OpenFinishScreen()
    {
        hudScreen.gameObject.SetActive(false);
        gameOverScreen.gameObject.SetActive(false);
        gameObject.SetActive(true);
        isFinished = true;

        var root = GetComponent<UIDocument>().rootVisualElement;

        nextButton = root.Q<Button>("NextButton");
        exitButton = root.Q<Button>("ExitButton");
        score = root.Q<Label>("Score");
        highScore = root.Q<Label>("HighScore");
        medal = root.Q<VisualElement>("Medal");

        nextButton.clicked += NextButtonPressed;
        exitButton.clicked += delegate () { GameOverScreen.ExitButtonPressed(); };

        score.text = "Score: " + scorePoint.ScorePoint.ToString();
        score.style.display = DisplayStyle.Flex;

        scorePoint.SetHighscore();
        highScore.text = "Highscore: " + scorePoint.highscore.ToString();
        highScore.style.display = DisplayStyle.Flex;

        medal.style.backgroundImage = new StyleBackground(MedalChoose());

        Time.timeScale = 0;
    }

    public void NextButtonPressed()
    {
        Factory.spawnCount += 2;
        Time.timeScale = 1;
        SceneManager.LoadScene("Game");
    }
    /// <summary>
    /// Choose the correct medal
    /// </summary>
    /// <returns>The sprite of the medal</returns>
    Sprite MedalChoose()
    {
        if ((scorePoint.timer >= 15) && (scorePoint.fallPizzaCount == 0))
            return medals[0];

        else if ((scorePoint.timer >= 10) && (scorePoint.fallPizzaCount <= 2))
            return medals[1];

        else
            return medals[2];
    }
}
