using UnityEngine;
using System.Collections;

public class Spawner : MonoBehaviour {

	public GameObject[] AttackerPrefabArray;
		// Update is called once per frame
	void Update ()
	{
		foreach (GameObject thisAttacker in AttackerPrefabArray) {
			if (isTimeToSpawn(thisAttacker)) {
				Spawn(thisAttacker);
			}
		}
	}
	bool isTimeToSpawn (GameObject attackerGameObject)
	{
		Attacker attacker = attackerGameObject.GetComponent<Attacker>();
		float meanSpawnDelay = attacker.seenEverySeconds;
		float spawnPerSeconds = 1 / meanSpawnDelay;
		if (Time.deltaTime > meanSpawnDelay) {
			Debug.LogWarning ("SpawnRate capped by frame Rat");
		}
		float threshold = spawnPerSeconds * Time.deltaTime;
		return Random.value < threshold;
	
	}
	void Spawn (GameObject myGameOject)
	{
		GameObject myAttacker = Instantiate(myGameOject) as GameObject;
		myAttacker.transform.parent = transform;
		myAttacker.transform.position = transform.position;
	}
}

