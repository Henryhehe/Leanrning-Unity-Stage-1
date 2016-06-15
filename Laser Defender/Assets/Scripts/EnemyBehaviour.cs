using UnityEngine;
using System.Collections;

public class EnemyBehaviour : MonoBehaviour {
	public float health = 10;
	public GameObject weaponPrefab;
	public float weaponSpeed = 2.0f;
	public float shotsPerSecond = 0.5f;
	public int points = 1;
	public AudioClip deathAudio;
	void OnTriggerEnter2D (Collider2D collider)
	{
		Weapon weapon1 = collider.gameObject.GetComponent<Weapon> ();
		if (weapon1) {
			this.health -= weapon1.GetDamage ();		
			weapon1.Hit();
			if (health <= 0) {
				Die();
			}
		}
	}
	void Start() {
//		Vector3 startPosition = transform.position + new Vector3(0f,-0.5f,0f);
//		GameObject Enemyweapon = Instantiate (weaponPrefab, startPosition, Quaternion.identity) as GameObject;
//		Enemyweapon.GetComponent<Rigidbody2D> ().velocity = new Vector3 (0f, -2.0f,0f);

	}
	void Update ()
	{
		float probability = shotsPerSecond * Time.deltaTime;
		if (Random.value < probability) {
			fireBack ();
		}
			}

	void fireBack()
	{
		Vector3 startPosition = transform.position + new Vector3(1.5f,-0.2f,0f);
		GameObject Enemyweapon = Instantiate (weaponPrefab, startPosition, Quaternion.identity) as GameObject;
		Enemyweapon.GetComponent<Rigidbody2D> ().velocity = new Vector3 (0f, -weaponSpeed,0f);
		Destroy(Enemyweapon,10f);
	}
	void Die()
	{
		AudioSource.PlayClipAtPoint(deathAudio,transform.position);
		Destroy(gameObject);
		GameObject.Find("Score").GetComponent<ScoreKeeper>().Score(points);
	}
}
