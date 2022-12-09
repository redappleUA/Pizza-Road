using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;
using UnityEngine.SocialPlatforms.Impl;

public class FinishScreen : MonoBehaviour
{
    private Label score;
    private Button nextButton;
    private Button exitButton;
    private void Awake() => gameObject.SetActive(false);
    public void OpenFinishScreen() //int scorePoint
    {
        gameObject.SetActive(true);

        var root = GetComponent<UIDocument>().rootVisualElement;

        nextButton = root.Q<Button>("NextButton");
        exitButton = root.Q<Button>("ExitButton");
        score = root.Q<Label>("ScoreLabel");

        nextButton.clicked += NextButtonPressed;
        exitButton.clicked += delegate () { GameOverScreen.ExitButtonPressed(); };

        //score.text = "Score: " + scorePoint.ToString();
        //score.style.display = DisplayStyle.Flex;

        Time.timeScale = 0;
    }

    public static void NextButtonPressed()
    {
        Time.timeScale = 1;
        SceneManager.LoadScene("Game");
    }
}
