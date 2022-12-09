using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UIElements;

public class GameOverScreen : MonoBehaviour
{
    private Label score;
    private Button restartButton;
    private Button exitButton;

    private HUDScreen hudScreen;
    private static Score scorePoint;

    private void Awake()
    {
        gameObject.SetActive(false);
        hudScreen = FindObjectOfType<HUDScreen>();
        scorePoint = FindObjectOfType<Score>();
    }
    public static void RestartButtonPressed()
    {
        Time.timeScale = 1;
        SceneManager.LoadScene("Game");
    }
    public static void ExitButtonPressed() => Application.Quit();
    public void OpenGameOverScreen()
    {
        hudScreen.gameObject.SetActive(false);
        gameObject.SetActive(true);

        var root = GetComponent<UIDocument>().rootVisualElement;

        restartButton = root.Q<Button>("RestartButton");
        exitButton = root.Q<Button>("ExitButton");
        score = root.Q<Label>("Score");

        restartButton.clicked += delegate () { FinishScreen.NextButtonPressed(); };
        exitButton.clicked += ExitButtonPressed;

        score.text = "Score: " + scorePoint.ScorePoint.ToString();
        score.style.display = DisplayStyle.Flex;
    }
}