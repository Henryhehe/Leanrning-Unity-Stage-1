using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour {

	// Use this for initialization
	public void LoadLevel (string name)
	{
		Blocks.breakableCount = 0;
		SceneManager.LoadScene (name);
	}
	public void Quit ()
	{
		
		Application.Quit();
	}
	public void LoadNextLevel ()
	{

		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);

	}
	public void BrickDestroyed() {
		if(Blocks.breakableCount <= 0) {
		 	LoadNextLevel();
		}
		}
}
