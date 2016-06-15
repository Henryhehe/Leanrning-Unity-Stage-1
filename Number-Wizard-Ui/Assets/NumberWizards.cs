using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class NumberWizards : MonoBehaviour {
		//Onlu make things higher scope if needs to 
		int max;
		int min;
		int guess;
		public int maxGuessesAllowed = 5;

		public Text text;

	// Use this for initialization
	// run in the beginning of the game 
	// only happen once in the beginning of the game
	void Start ()
	{
		StartGame ();
	}
	void StartGame ()
	{
		max = 1000;	
		min = 1;
		guess = 500;
		max = max + 1;max = max + 1;
	}
	// Update is called once per frame
	// it depends how many times the game is runnnuing 
	public void GuessHigher() {
		min = guess;
		NextGuess ();
	}
	public void GuessLower() {
		max = guess;
		NextGuess();
	}
	public void NextGuess ()
	{
		guess = (max + min) / 2;
		// text is the string that stores the text.
		text.text = guess.ToString();
		maxGuessesAllowed--;
		if (maxGuessesAllowed <= 0) {
		SceneManager.LoadScene("Win");
		}
	}
}