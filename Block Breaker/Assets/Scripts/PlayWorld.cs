using UnityEngine;
using System.Collections;

public class PlayWorld : MonoBehaviour {

	public Blocks blocks;
	public LevelManager levelManager;
	public int numDestoryed;
	public int numBricks;

	// Use this for initialization
	void Start () {
		numDestoryed = 0;
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (this.numDestoryed == numBricks) {
			levelManager.LoadLevel ("Win");
		}
	}
}
