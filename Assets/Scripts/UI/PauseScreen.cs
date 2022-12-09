using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;
using UnityEngine.SocialPlatforms.Impl;

public class PauseScreen : MonoBehaviour
{
    private Button resumeButton;
    private Button restartButton;
    private Button exitButton;

    private HUDScreen screen;
    private void Awake()
    {
        gameObject.SetActive(false);
        screen = FindObjectOfType<HUDScreen>(true);
    }
    public void OpenPauseScreen()
    {
        gameObject.SetActive(true);

        var root = GetComponent<UIDocument>().rootVisualElement;

        restartButton = root.Q<Button>("RestartButton");
        resumeButton = root.Q<Button>("PauseButton");
        exitButton = root.Q<Button>("ExitButton");

        resumeButton.clicked += ResumeButtonClicked;
        restartButton.clicked += delegate () { GameOverScreen.RestartButtonPressed(); };
        exitButton.clicked += delegate () { GameOverScreen.ExitButtonPressed(); };

        Time.timeScale = 0;
    }

    void ResumeButtonClicked()
    {
        Time.timeScale = 1;
        gameObject.SetActive(false);
        screen.OpenHUDScreen();
    }
}
