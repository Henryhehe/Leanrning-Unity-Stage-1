using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Button : MonoBehaviour {	
	private Color defaultColor = Color.HSVToRGB(0f,0f,0f);
	private Button[] buttonArray;
	public  GameObject selectedDefenderPrefab;
	//static only have one selected;
	public static GameObject DefenderSelected;
	// Use this for initialization
	void Start () {
		buttonArray = GameObject.FindObjectsOfType<Button>();

	}
	
	// Update is called once per frame
	void Update () {
	
	}
	void OnMouseDown ()
	{
		SpriteRenderer sprite = GetComponent<SpriteRenderer> ();
		Color color = sprite.color;
		//checking if selected
		if (color == defaultColor) {
			DefenderSelected = selectedDefenderPrefab;
			color = Color.HSVToRGB (0f, 0f, 1f);
			sprite.color = color; 
//			print (name + "is touched");
				// this foreach is to black out all the other buttons in the array
				foreach(Button thisButton in buttonArray) {
				thisButton.GetComponent<SpriteRenderer>().color = defaultColor;
				sprite.color = color;
				}
		//double click to make it back to default 
		} else {
			color = defaultColor;
			sprite.color = color;
		}
	}
}
