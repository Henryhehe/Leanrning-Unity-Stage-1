using UnityEngine;
using System.Collections;

public class NumberWizards : MonoBehaviour {
		//Onlu make things higher scope if needs to 
		int max;
		int min;
		int guess;

	// Use this for initialization
	// run in the beginning of the game 
	// only happen once in the beginning of the game
	void Start () {

		StartGame();

	}

	void StartGame ()
	{
		max = 1000;	
		min = 1;
		guess = 500;
		print("****************************************************");
		print("Welcome to Number Wizard");
		print("Pick a number in your head, but don't tell anyone");
		// the way to create variable in c#
		// max and min number of the game

		print("The highest number you can pick is"  + max);
		print("The lowest number you can pick is" + min);

		print ("Is the number higher or lower than" + guess);
		print(" Up = higher,down = lower, return = euqal");
		// the organge is for the string
		max = max + 1;max = max + 1;
	}


	// Update is called once per frame
	// it depends how many times the game is runnnuing 
	void Update ()
	{
		if (Input.GetKeyDown (KeyCode.UpArrow)) {
			//print ("Up arrow was pressed");
			min = guess;
			NextGuess ();
		} else if (Input.GetKeyDown (KeyCode.DownArrow)) {
			print ("Down arrow was pressed");
			max = guess;
			NextGuess();
		}
		else if (Input.GetKeyDown (KeyCode.Return)) {
			print ("I Won");
			StartGame();
		}
}
	void NextGuess ()
	{
		guess = (max + min) /2;
		print("Higher or lower than" + guess);
		print(" Up = higher,down = lower, return = euqal");
	}
}