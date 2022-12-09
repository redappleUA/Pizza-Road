using UnityEngine.UIElements;
using UnityEngine;

public class HUDScreen : MonoBehaviour
{
    private Label score;
    private Label timer;
    private Button pauseButton;
    private PauseScreen pauseScreen;

    private Score scorePoint;
    private Player player;
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
        scorePoint = FindObjectOfType<Score>();
        pauseScreen = FindObjectOfType<PauseScreen>(true);
        OpenHUDScreen();
    }
    void FixedUpdate()
    {
        if (player.isStartMoving)
        {
            score.text = scorePoint.ScorePoint.ToString();
            timer.text = scorePoint.timer.ToString();
        }

        if(Time.timeScale < 1) gameObject.SetActive(false);
    }

    public void OpenHUDScreen()
    {
        gameObject.SetActive(true);

        var root = GetComponent<UIDocument>().rootVisualElement;

        score = root.Q<Label>("ScoreLabel");
        timer = root.Q<Label>("Timer");
        score.style.display = DisplayStyle.Flex;
        timer.style.display = DisplayStyle.Flex;
        pauseButton = root.Q<Button>("PauseButton");

        pauseButton.clicked += delegate () { pauseScreen.OpenPauseScreen(); };
    }
}
