using UnityEngine;
using System.Collections;

public class MusicPlayer : MonoBehaviour {
	static MusicPlayer instance = null;
//	public AudioClip startClip;
//	public AudioClip gameClip;
//	public AudioClip endClip;
//
	private AudioSource music;

	// Use this for initialization
	void Awake ()
	{ 
		if (instance !=null && instance != this) {
			Destroy(gameObject);
			print("Dupilicate music player self-destructing!");
		} else {
	// it claims the instance, because oh..this is the static variable of the class
		 instance = this;
		GameObject.DontDestroyOnLoad (gameObject);
//		music = GetComponent<AudioSource>();
		}
	}
	void Start ()
	{
		
	}
	// Update is called once per frame
//	void OnLevelWasLoaded (int level)
//	{
//		Debug.Log ("MusicPlyaer:Loaded" + level);
//		music.Stop ();
//		if (level == 0) {
//			music.clip = startClip;
//		} else if (level == 1) {
//		music.clip = gameClip;
//		}else if(level ==2) {
//		music.clip = endClip;
//		}
//	music.Play();
//	music.loop = true;
//	}
	void Update () {
	
	}
}
