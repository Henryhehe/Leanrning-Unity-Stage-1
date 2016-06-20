using UnityEngine;
using System.Collections;

public class Health : MonoBehaviour {

	public float healthPoint =10;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

	}
 	public void takeDamage (float damage)
	{
//		print ("I am taking damage now");
		if (healthPoint > 0){
			healthPoint = healthPoint - damage;
		} 
		}
 	public void Die() {
 	// Option trigger animation.
 	Destroy(gameObject);
	}
}