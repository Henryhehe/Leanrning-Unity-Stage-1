using UnityEngine;
using System.Collections;

public class Shooter : MonoBehaviour {
	public GameObject weapon,gun;
	private GameObject weaponParent;
	private Animator animator;
	private Spawner myLaneSpawner;

	// Use this for initialization
	void Start ()
	{
		//Create a parentObject
		weaponParent = GameObject.Find("weaponParent");
		if (!weaponParent) {
		weaponParent = new GameObject("weaponParent");
		}
		animator = GetComponent<Animator>();
		SetMyLaneSpawner();
//		print(myLaneSpawner);
//		animator = GameObject.findObjectOfType<Animator>();	
	}
	void Update ()
	{
		// if there is a attacker in the lane, we would shoot it, if not we would just not being the attack state 
		if (IsAttackerInLane()) {
		animator.SetBool("IsAttacking",true);
		}else {
		animator.SetBool("IsAttacking",false);
		}
	}
	
	private void Fire ()
	{
		// it needs to Instantiate the projectile
		if (weapon) {
		// instantiate is for prefab
			GameObject newWeapon = Instantiate (weapon) as GameObject;
			if (newWeapon && gun) {
				newWeapon.transform.position = gun.transform.position;
				newWeapon.transform.parent = weaponParent.transform;
//				Vector3 adjustVector = new Vector3 (0f,0f,0f);
//				newWeapon.transform.position = newWeapon.transform.position + adjustVector;
			}
		}
	}
	// look through all spawners, and set myLaneSpawner if found 
	void SetMyLaneSpawner ()
	{
		float posY = this.transform.position.y;
		Spawner[] SpawnersArray = GameObject.FindObjectsOfType<Spawner> ();
		foreach (Spawner thisSpawner in SpawnersArray) {
			if (thisSpawner.transform.position.y == posY) {
				myLaneSpawner = thisSpawner;
				return;
//			} else {
//				Debug.LogWarning ("Nothing has been found in this Spawner");
			}
		}
	}


	private bool IsAttackerInLane ()
	{
//		if (myLaneSpaener) {
//			return true;
//		} else {
//			return false;
//		}
//		if (myLaneSpawner.transform.childCount <= 0) {
//			return false;
//		}
		// If there are attackers, are they ahead.
		if (myLaneSpawner) {
			foreach (Transform attacker in myLaneSpawner.transform) {
				if (attacker.transform.position.x > transform.position.x) {
					return true;
				}
			}
		}
		// Attacker in lane but behind us.
		return false;
	}
//	private void Destory ()
//	{
//		Destroy (gameObject);
//	}
//
}
