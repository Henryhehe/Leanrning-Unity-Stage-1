using UnityEngine;
using System.Collections;

public class Paddle : MonoBehaviour {

	public float xPosition;
	public bool autoPlay = false;
	private Ball ball;
	public float minX,maxX;



	void Start ()
	{

		ball = GameObject.FindObjectOfType<Ball> ();

	}
	// Update is called once per frame


	void Update ()
	{
		if (autoPlay == false) {
			MoveWithMouse ();
		}
		else {
			AutoPlay();
		}
	}

	void MoveWithMouse () {
		xPosition = (Input.mousePosition.x /Screen.width)*16;
//		print(xPosition);
		// the f is to show it is float 
//		Vector3 paddlePos = new Vector3(Mathf.Clamp(xPosition,-7.0f,7.0f),this.transform.transform.position.y,0f);
		Vector3 paddlePos = new Vector3(Mathf.Clamp(xPosition,minX,maxX),this.transform.transform.position.y,0f);
		this.transform.position = paddlePos;

	}
	void AutoPlay() {
//		print(xPosition);
		// the f is to show it is float 
		Vector3 paddlePos = new Vector3(0f,this.transform.transform.position.y,0f);
		Vector3 ballPos = ball.transform.position;
//		paddlePos.x = Mathf.Clamp(ballPos.x,-8.0f,8.0f);
		paddlePos.x = Mathf.Clamp(ballPos.x,-8.0f,8.0f);
		this.transform.position = paddlePos;

	}
}
