using UnityEngine;
using System.Collections;

public class Weapon : MonoBehaviour {

	public float speed;
	public float damage;


	void OnTriggerEnter2D (Collider2D collider)
	{
		GameObject collidingObject = collider.gameObject; 
		if (collidingObject.GetComponent<Health> ()) {
			Health health = collidingObject.GetComponent<Health> ();
			if (collidingObject.GetComponent<Attacker> ()) {
			health.takeDamage(damage);
			if (health.healthPoint <= 0) {
					Destroy(gameObject);
				}
			}
		}

	}

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