using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class ResultsManager : MonoBehaviour {

	public Result[] characters;
	private static List<Result> results;

	private List<Result> heroes = new List<Result>();
	//private static List<Result> heroesList;

	private static List<Result> villains = new List<Result>();
	//private static List<Result> villainsList;

	private Result currentResult;

	[SerializeField]
	private Text characterText;

	[SerializeField]
	private Text descriptionText;

	[SerializeField]
	private GameObject resultBackground;


	private string good = "good";
	private string bad = "bad";

	void Start() {
		results = characters.ToList<Result>();
		Debug.Log(results.Count);

		for (int i = 0; i < results.Count; i++) {
			if (results[i].alignment == 1) {
				heroes.Add(results[i]);
			}
			else {
				villains.Add(results[i]);
			}
		}

		Debug.Log(heroes.Count);
		Debug.Log(villains.Count);

		int m = PlayerPrefs.GetInt(good);
		int n = PlayerPrefs.GetInt(bad);

		if (m > n) {
			setHero();
		}
		else if (n > m) { 
			setVillain();
		}
		else {
			setBoth();
		}
	}

	void setHero () {
		int randomNumber = Random.Range(0, heroes.Count);

		currentResult = heroes[randomNumber];

		characterText.text = currentResult.character;
		descriptionText.text = currentResult.description;
		resultBackground.GetComponent<RawImage>().texture = currentResult.image;
	}

	void setVillain () {
		int randomNumber = Random.Range(0, villains.Count);

		currentResult = villains[randomNumber];

		characterText.text = currentResult.character;
		descriptionText.text = currentResult.description;
		resultBackground.GetComponent<RawImage>().texture = currentResult.image;
	}

	void setBoth () {
		int randomNumber = Random.Range(0, results.Count);

		currentResult = results[randomNumber];

		characterText.text = currentResult.character;
		descriptionText.text = currentResult.description;
		resultBackground.GetComponent<RawImage>().texture = currentResult.image;
	}


}
