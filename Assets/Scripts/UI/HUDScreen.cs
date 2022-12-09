using UnityEngine.UIElements;
using UnityEngine;

public class HUDScreen : MonoBehaviour
{
    private Label score;
    private Button pauseButton;
    private PauseScreen pauseScreen;
    void Start()
    {
        pauseScreen = FindObjectOfType<PauseScreen>(true);
        OpenHUDScreen();
    }
    void Update()
    {
        //score.text = Score.ScorePoints.ToString();

        if(Time.timeScale < .2f) gameObject.SetActive(false);
    }

    public void OpenHUDScreen()
    {
        gameObject.SetActive(true);

        var root = GetComponent<UIDocument>().rootVisualElement;

        score = root.Q<Label>("ScoreLabel");
        score.style.display = DisplayStyle.Flex;
        pauseButton = root.Q<Button>("PauseButton");

        pauseButton.clicked += delegate () { pauseScreen.OpenPauseScreen(); };
    }
}
