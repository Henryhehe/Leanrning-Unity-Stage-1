using UnityEngine;
using System.Collections;

public class Weapon : MonoBehaviour {

	public float speed;
	public float damage = 5;	
	// Use this for initialization
	void OnTriggerEnter2D(Collider2D collider)
	{
//	 Debug.Log("hit");
//	 Destroy(collider.transform.gameObject);
//	 Destroy(this.gameObject);
	}
//	void OnCollisionEnter2D (Collision2D collision)
//	{
//	Destroy(this.gameObject);
//	}
	public void Hit ()
	{
		Destroy(gameObject);
	}

	public float GetDamage ()
	{
		return this.damage;
	}
}
