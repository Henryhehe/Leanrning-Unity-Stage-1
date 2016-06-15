using UnityEngine;
using System.Collections;

public class setStartVolume : MonoBehaviour {

	private MusicPlayer musicPlayer;
	// Use this for initialization
	void Start ()
	{
		musicPlayer = GameObject.FindObjectOfType<MusicPlayer> ();
		if (musicPlayer) {
		float volume = PlayerPrefsManager.GetMasterVolumn();
			musicPlayer.ChangeVolume(volume);
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
