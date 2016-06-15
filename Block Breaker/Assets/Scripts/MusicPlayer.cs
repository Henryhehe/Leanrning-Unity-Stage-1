﻿using UnityEngine;
using System.Collections;

public class MusicPlayer : MonoBehaviour {
	static MusicPlayer instance = null;
	// Use this for initialization
	void Awake ()
	{ 
		if (instance !=null) {
			Destroy(gameObject);
			print("Dupilicate music player self-destructing!");
		} else {
	// it claims the instance, because oh..this is the static variable of the class
		 instance = this;
		GameObject.DontDestroyOnLoad (gameObject);
		}
	}
	void Start ()
	{
		
	}
	// Update is called once per frame
	void Update () {
	
	}
}
