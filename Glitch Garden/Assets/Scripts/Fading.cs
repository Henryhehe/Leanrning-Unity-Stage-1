using UnityEngine;
using System.Collections;

public class Fading : MonoBehaviour {
	
	public Texture2D fadeOutTexture; // the texture will overlay the screen, this can be a black image or a loading graphic 
	public float fadeSpeed = 2.0f;	// the fading speed 
	private int drawDepth = -1000;	// The texture's order the draw hierarchy, a low number means in render's on top
	private float alpha = 1.0f;		// the texture's alpha value between 0 and 1
	private int fadeDir = -1;		// the direction to fade: in = -1 or out = 1


	void OnGUI ()
	{
	 alpha += fadeDir * fadeSpeed * Time.deltaTime;
	 // force(clamp) the number between 0 and 1.
	 alpha = Mathf.Clamp01(alpha);
	 //set color of our GUI( in this casue our texture) all color values remian the same & the Alpha is set to the alpha varaible 
	 GUI.color = new Color(GUI.color.r,GUI.color.g,GUI.color.b,alpha); //set the alpha value 
	 GUI.depth = drawDepth;		// make the blakc texture render on top( drawn last)
	 GUI.DrawTexture(new Rect(0,0,Screen.width,Screen.height),fadeOutTexture); // draw the texture to fit in the entire screen area
	}

	//sets fadedir to the direction paremeter making the scene fade in if -1 and out if 1
	public float BeginFade (int direction)
	{
		fadeDir = direction;
		return(fadeSpeed);	// return the fadeSpeed variable so it's easy to time the application.loadlevel()
	}
	// onLevelWasLoaded is called when a level is loaded, it takes loaded level index(int) as a prameter so you can limit the dade in to certain scenes 

	void OnLevelWasLoaded(){
		//alpha = 1; // use this if the alpha is not set to 1 by default 
		BeginFade(-1); //call the ade in function 

	}

}
