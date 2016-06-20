using UnityEngine;
using System.Collections;

public class Defenders : MonoBehaviour {

	private WaterDisplay waterDisplay;
	public int cost;
	void Start() {

	waterDisplay = GameObject.FindObjectOfType<WaterDisplay>();
	}

	public void AddWaters (int amount)
	{
		waterDisplay.AddWaters(amount);
	}
	public void UseWaters (int amount)
	{
	;
	}
}
