using UnityEngine;
using System.Collections;

public class LoseCollider : MonoBehaviour {
// Collider 2D is the object that will be passed into the method 

	private LevelManager levelManager;
 	void OnTriggerEnter2D(Collider2D trigger){
 		levelManager = GameObject.FindObjectOfType<LevelManager>();
		levelManager.LoadLevel("Lose");

	}
	void OnCollisionEnter2D(Collision2D collision){
		print("Collision");
	}

	}

