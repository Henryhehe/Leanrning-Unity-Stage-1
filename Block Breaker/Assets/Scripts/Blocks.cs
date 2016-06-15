using UnityEngine;
using System.Collections;

public class Blocks : MonoBehaviour {

	private int timesHit;
	public PlayWorld playWorld;
	private LevelManager levelManager;
	public AudioClip crack;
	public Sprite[] hitSprites;
	public static int breakableCount = 0;
	private bool isBreakable;
	public GameObject smoke;
	// Use this for initialization
	void Start ()
	{
		levelManager = GameObject.FindObjectOfType<LevelManager> ();
		timesHit = 0;	
		isBreakable = (this.tag == "Breakable");
		if (isBreakable) {
			breakableCount++;
		}
		}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnCollisionEnter2D (Collision2D collision)
	{
		AudioSource.PlayClipAtPoint (crack,transform.position);
		if (isBreakable) {
			HandleHits ();
		}


	}

	void HandleHits() {
		timesHit++;
//		SimulateWin();
		if (timesHit >= (this.hitSprites.Length + 1)) {
			breakableCount--;
//		passing messages
			Instantiate(smoke, this.transform.position, Quaternion.identity);
		 	levelManager.BrickDestroyed();
			Destroy (gameObject);
//		playWorld.numDestoryed++;
//			print(playWorld.numDestoryed);
		} else {
	 LoadSprites();
		}

	}
	void LoadSprites ()
	{
		int spirteIndex = timesHit - 1; 
		if (hitSprites [spirteIndex]) {
			this.GetComponent<SpriteRenderer> ().sprite = hitSprites [spirteIndex];
		} else {
			Debug.LogError("Brick spirte missing");

		}
	}

	// TODO Remove this method once we can actually win

//	void SimulateWin ()
//	{
//		levelManager.LoadNextLevel();
//		
//	}
}
