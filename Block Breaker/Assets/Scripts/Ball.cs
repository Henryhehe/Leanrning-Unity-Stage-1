using UnityEngine;
using System.Collections;

public class Ball : MonoBehaviour {
	// we declare here, so when the game starts we go looking for the paddle immediately. so we don't need to reference to it manualy.
	private Paddle paddle;
	private bool hasStarted = false;
	private Vector3 paddleToBallVector;

	// Use this for initialization
	void Start ()
	{
		paddle = GameObject.FindObjectOfType<Paddle> ();
		paddleToBallVector = this.transform.position - paddle.transform.position;

	}
	// Update is called once per frame
	void Update ()
	{

		if (!hasStarted) {
		this.transform.position = paddle.transform.position + paddleToBallVector;

			if (Input.GetMouseButtonDown (0)) {
				hasStarted = true;
				this.GetComponent<Rigidbody2D> ().velocity = new Vector2 (2f, 10f);
			}
		}
	}
	void onCollisionEnter2D (Collision2D collision)
	{
		Vector3 tweak = new Vector3 (Random.Range (0f, 0.2f), Random.Range (0f, 0.2f),0);
		if (hasStarted) {
			GetComponent<AudioSource> ().Play ();
			GetComponent<Rigidbody>().velocity += tweak;
		}
	}
}

