using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {
	public float Speed;
	public float padding = 2f;
	public float weaponSpeed = 1.0f;
	public float firingRate = 0.2f;
	public static float health = 10f;
	private Vector3 PlayerPosition;
//	public Weapon weapon;
	float xmin;
	float xmax;
	public GameObject weaponPrefab;
	public AudioClip audio;
	// Use this for initialization


	void Start () {
		PlayerPosition = new Vector3(0,this.transform.transform.position.y,0f);
		// calcuate the limit space, it will take a vector 3 and in there, it is not x,y,z, it is the first value would usually be 
		//0, 1, it is the x, y coordinate usually the 0 to 1. it is the distance between the camera and the object you want to find out
		float distance = transform.position.z - Camera.main.transform.position.z;
		Vector3 leftmost = Camera.main.ViewportToWorldPoint(new Vector3(0,0,distance));
		Vector3 rightmost = Camera.main.ViewportToWorldPoint(new Vector3(1,0,distance));
		xmin = leftmost.x + padding;
		xmax = rightmost.x - padding;
//		weapon = GameObject.FindObjectOfType<Weapon>();
	}
	// Update is called once per frame
	void Update ()
	{
		Move ();
		if (Input.GetKeyDown(KeyCode.Space)) {
			InvokeRepeating("Fire", 0.000001f, firingRate);
//			Fire ();
		}
		else if (Input.GetKeyUp(KeyCode.Space)) {
			CancelInvoke("Fire");
		}

	}
	void OnTriggerEnter2D (Collider2D collider)
	{
		Weapon weapon1 = collider.gameObject.GetComponent<Weapon> ();
		if (weapon1) {
			Debug.Log("damaged");
			health -= weapon1.GetDamage ();		
			weapon1.Hit();
			if (health <= 0) {
			Die();
			}
		}
	}

	// this is the control move function
	void Move ()
	{
		if (Input.GetKey(KeyCode.LeftArrow)) {
			// transform.position += Vector3.left * speed * Time.deltaTime
			PlayerPosition.x -= (Speed * Time.deltaTime);
			setPosition ();
		} else if (Input.GetKey (KeyCode.RightArrow)) {
			PlayerPosition.x += (Speed * Time.deltaTime);
			setPosition ();
//		} else if(Input.GetKey(KeyCode.UpArrow))
//		// just to do something later.
//		{
//			PlayerPosition.y += (Speed* Time.deltaTime);
//			setPosition();
//		} else if(Input.GetKey(KeyCode.DownArrow))
//		{
//			PlayerPosition.y -= (Speed* Time.deltaTime);
//			setPosition();
//		}
		}
	}

	void setPosition() {
		//restrict the player to the gameSpace
		this.transform.position =  new Vector3(Mathf.Clamp(PlayerPosition.x,xmin,xmax),PlayerPosition.y,PlayerPosition.z);
	}

	void Fire() {
		Vector3 offset = new Vector3(-0.5f,1f,0f);
		GameObject weapon = Instantiate (weaponPrefab, transform.position + offset, Quaternion.identity) as GameObject;
		weapon.GetComponent<Rigidbody2D> ().velocity = new Vector3 (0f, weaponSpeed,0f);
		AudioSource.PlayClipAtPoint(audio,transform.position);
		Destroy(weapon,2.0f);
	}
// this is the fire function 
//	void Fire ()
//	{
//
//
//
//
//	}
	void Die() {
	LevelManager man = GameObject.Find("LevelManager").GetComponent<LevelManager>();
	man.LoadLevel("Lose");
		Destroy(gameObject);
	}
}
