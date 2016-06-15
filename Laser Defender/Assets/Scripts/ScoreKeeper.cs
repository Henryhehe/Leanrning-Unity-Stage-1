using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class ScoreKeeper : MonoBehaviour {

	public static int point = 0;
	// Use this for initialization
	void Start () {

	GetComponent<Text>().text = "score" +":" + point;
	}
	
	// Update is called once per frame
	void Update () {
	GetComponent<Text>().text = "score" +":" + point;
	}

	public void Score (int points)
	{
		point = points + point;
			
	}

	public static void Reset() {
		point = 0;
		PlayerController.health = 10;
	}
}
