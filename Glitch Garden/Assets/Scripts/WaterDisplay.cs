using UnityEngine;
using System.Collections;
using UnityEngine.UI;
// this would give you warning if you don't have the Text element 
[RequireComponent (typeof(Text))]

public class WaterDisplay : MonoBehaviour {
	private Text starText;
	private int waterCount = 10;
	public enum Status {SUCCESS,FAILURE};

	// Use this for initialization
	void Start () {
	 starText = GetComponent<Text>();
	 starText.text = waterCount.ToString();
	}

	public void AddWaters(int amount) {
		print("Waters added to DisPlay");
		waterCount+=amount;
		UpdateDisplay();
	}
	public Status UseWater (int amount)
	{if(waterCount >=amount) {
		waterCount-=amount;
		UpdateDisplay();
		return Status.SUCCESS;
		}
		else{return Status.FAILURE;}}

	private void UpdateDisplay ()
	{
		starText.text = waterCount.ToString();
	}
}
