using UnityEngine;
using System.Collections;
// this is a safely requirment for the script.
[RequireComponent (typeof (Attacker))]
public class Fox : MonoBehaviour{

	private  Animator FoxAnimator;
	private Attacker attacker;
	// Use this for initialization
	void OnTriggerEnter2D (Collider2D collider)
	{
		GameObject collidingObject = collider.gameObject; 
		if (collidingObject.GetComponent<BlueO>()) {
			FoxAnimator.SetTrigger("Jumping");
			Invoke("StopJumping",1f);
		}
		else if(collidingObject.GetComponent<Defenders>()){
			FoxAnimator.SetBool("IsAttacking",true);
//			print("Am I attacking now?");
			attacker.Attack(collidingObject);
		}
		}
	void Start () {
		FoxAnimator = GetComponent<Animator>();
		attacker = GetComponent<Attacker>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	public void StopAttacking(){
		FoxAnimator.SetBool("IsAttacking",false);
	}
	void StopJumping() {
		FoxAnimator.SetTrigger("Walking");
	}
}
