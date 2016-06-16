using UnityEngine;
using System.Collections;

public class Shooter : MonoBehaviour {
	public GameObject weapon,gun;
	private GameObject weaponParent;

	// Use this for initialization
	void Start ()
	{

		weaponParent = GameObject.Find ("weaponParent");
		if (!weaponParent) {
		weaponParent = new GameObject("weaponParent");
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
//	private void Destory ()
//	{
//		Destroy (gameObject);
//	}
//
}
