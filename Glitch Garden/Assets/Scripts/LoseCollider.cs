using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class LoseCollider : MonoBehaviour {
	private LevelManager levelManager;
	// Use this for initialization
	void OnTriggerEnter2D (Collider2D collider) {
		levelManager.LoadLevel("Lose");
	}
	void Start() {
	levelManager = GameObject.FindObjectOfType<LevelManager>();
	}

}
