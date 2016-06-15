using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ScoreDisplay : MonoBehaviour {

	// Use this for initialization
	void Start () {
		GetComponent<Text>().text = "You Score is" + " " + ScoreKeeper.point.ToString();
		ScoreKeeper.Reset();
	}
	
	// Update is called once per frame
}
