using UnityEngine;
using System.Collections;

public class Weapon : MonoBehaviour {

	public float speed;
	public float damage;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		//calculate the position based on the frame
		// the speed is continous


		transform.Translate(Vector3.right * speed * Time.deltaTime);
	}
}
