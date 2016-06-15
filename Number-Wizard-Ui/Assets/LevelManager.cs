using UnityEngine;
using System.Collections;
// use this to load game scene or any scenes transitions
public class LevelManager : MonoBehaviour {

	public void LoadLevel (string name)
	{
		Application.LoadLevel(name);

	}
	public void QuitRequest ()
	{
		Debug.Log("Quit request for");
		Application.Quit();
	}

}
