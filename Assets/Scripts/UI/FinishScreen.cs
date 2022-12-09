using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;
using UnityEngine.SocialPlatforms.Impl;

public class FinishScreen : MonoBehaviour
{
    [SerializeField] Sprite medals;

    private Label score;
    private Label highScore;
    private VisualElement medal;
    private Button nextButton;
    private Button exitButton;

    public static bool isFinished { get; private set; } = false;
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
    public void OpenFinishScreen() //int scorePoint
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

        nextButton.clicked += NextButtonPressed;
        exitButton.clicked += delegate () { GameOverScreen.ExitButtonPressed(); };

        score.text = "Score: " + scorePoint.ScorePoint.ToString();
        score.style.display = DisplayStyle.Flex;

        scorePoint.SetHighscore();
        highScore.text = "Highscore: " + scorePoint.highscore.ToString();
        highScore.style.display = DisplayStyle.Flex;


        Time.timeScale = 0;
    }

    public static void NextButtonPressed()
    {
        Time.timeScale = 1;
        SceneManager.LoadScene("Game");
    }
}
