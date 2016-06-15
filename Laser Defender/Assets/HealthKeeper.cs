using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class HealthKeeper : MonoBehaviour {

	// Use this for initialization
	
	// Update is called once per frame
	void Update () {
		GetComponent<Text>().text = "helath" +":" + PlayerController.health;
	}
}
