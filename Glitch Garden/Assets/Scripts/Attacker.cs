using UnityEngine;
using System.Collections;

public class Attacker : MonoBehaviour {

	private float CurrentSpeed;
	private GameObject currentTarget;
//	private float damage =5;
	// Use this for initialization
	void OnTriggerEnter2D(Collider2D other)
	{
//		Debug.Log("Object: " + other + " has collided with: " + gameObject); 
	}		
		
	void Start () {
//
//		Rigidbody2D myRigidbody = gameObject.AddComponent<Rigidbody2D>();
//		myRigidbody.isKinematic = true;
	}
	
	// Update is called once per frame
	void Update () {
	transform.Translate(Vector3.left * CurrentSpeed * Time.deltaTime);
	}

	public void SetSpeed (float speed)
	{
		CurrentSpeed = speed;
	}
	// called from animator!!!
	public void StrikeCurrentTarget (float damage)
	{
		if (currentTarget) {
			print ("we find a currentTarget and it is" + currentTarget.name);
			Health healthScript = currentTarget.GetComponent<Health> ();
			if (healthScript) {
				print ("and we also find a healthScript");
				healthScript.takeDamage (damage);
				print (healthScript.healthPoint);
				if (healthScript.healthPoint <= 0) {
				print("this is the point when the health reaches 0");
					healthScript.Die();
					GetComponent<Fox> ().StopAttacking();
				}
			}
	}
//	Debug.Log(gameObject + "is doing damage");
	}

	public void Attack (GameObject obj)
	{
		print("I am attacking now");
		currentTarget = obj;
	}
	
}
