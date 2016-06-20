using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameTimer : MonoBehaviour {

	public float StartTime;
	private float remainningTime;
	private Slider gameTimer;
	private float frameTime;
	private bool WinToken = false;
	private LevelManager levelmanager;
	private AudioSource audioSource;
	private GameObject winLabel;

	// Use this for initialization
	void Start () {
	gameTimer = GetComponent<Slider>();
	audioSource = GetComponent<AudioSource>();
	audioSource.Stop();
	levelmanager = GameObject.FindObjectOfType<LevelManager>();
	frameTime = 1/StartTime;
	winLabel = GameObject.Find("Win");
	winLabel.SetActive(false);
	}
	
	// Update is called once per frame
	void Update ()
	{
		gameTimer.value += (Time.deltaTime * frameTime);
//another way of doing it, Time.timeSinceLevelLoad, this value would help you get the time of the loading time
		if (gameTimer.value == 1 && WinToken ==false) {
			WinToken = true;
			winLabel.SetActive(true);
			audioSource.Play();
			Invoke("Win",audioSource.clip.length);
		}
			}

	void Win() {
	levelmanager.LoadNextLevel();
	}
}
