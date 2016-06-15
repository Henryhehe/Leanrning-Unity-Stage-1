using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Fadein : MonoBehaviour {
	public float fadeInTime;

	private Image fadePanel;
	private Color currentColor = Color.black;
	// Use this for initialization
	void Start () {
		fadePanel = GetComponent<Image>();
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (Time.timeSinceLevelLoad < fadeInTime) {
			float alpha = Time.deltaTime/ fadeInTime;
			currentColor.a -= alpha;
			fadePanel.color = currentColor;
		} else {
		// this will set the panel to 
			gameObject.SetActive(false);
		}
	}
}
