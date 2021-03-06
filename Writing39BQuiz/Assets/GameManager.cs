﻿using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour {

	public Question[] questions;
	private static List<Question> unansweredQuestions;

	private Question currentQuestion;

	[SerializeField]
	private Text scenarioText;

	[SerializeField]
	private Text choice1Text;

	[SerializeField]
	private Text choice2Text;

	[SerializeField]
	private Text choice1Answer;

	[SerializeField]
	private Text choice2Answer;

	[SerializeField]
	private Animator animator;

	[SerializeField]
	private float timeBetweenQuestions = 1f;

	private string good = "good";
	private string bad = "bad";
	private string index = "index";

	void Start() 
	{
		if (unansweredQuestions == null) 
		{
			unansweredQuestions = questions.ToList<Question> ();
			PlayerPrefs.SetInt(good, 0);
			PlayerPrefs.SetInt(bad, 0);
			PlayerPrefs.SetInt(index, 0);
		}
		
		SetCurrentQuestion();
	}

	void SetCurrentQuestion ()
	{
		Debug.Log("Good: "+ PlayerPrefs.GetInt(good).ToString());
		Debug.Log("Bad: "+ PlayerPrefs.GetInt(bad).ToString());
		Debug.Log("Index: "+ PlayerPrefs.GetInt(index).ToString());

		currentQuestion = unansweredQuestions [PlayerPrefs.GetInt(index)];

		int n = PlayerPrefs.GetInt(index);
		PlayerPrefs.SetInt(index, n+1);
		Debug.Log(PlayerPrefs.GetInt(index));

		scenarioText.text = currentQuestion.scenario;
		choice1Text.text = currentQuestion.choice1;
		choice2Text.text = currentQuestion.choice2;
		choice1Answer.text = currentQuestion.choice1Answer;
		choice2Answer.text = currentQuestion.choice2Answer;

	}

	IEnumerator TransitionToNextQuestion () {
		//unansweredQuestions.Remove (currentQuestion);

		if (PlayerPrefs.GetInt(index) >= unansweredQuestions.Count) {

			yield return new WaitForSeconds (timeBetweenQuestions);
			
			SceneManager.LoadScene("Results");

		}
		else {

			yield return new WaitForSeconds (timeBetweenQuestions);

			SceneManager.LoadScene (SceneManager.GetActiveScene ().buildIndex);
		}

	} 

	public void UserSelectChoice1()
	{
		Debug.Log ("Choice 1");

		int n = PlayerPrefs.GetInt(good);
		PlayerPrefs.SetInt(good, n+1);

		int m = PlayerPrefs.GetInt(index);
		PlayerPrefs.SetInt(index, m + currentQuestion.choice1increment);

		animator.SetTrigger ("Choice1");
		StartCoroutine (TransitionToNextQuestion ());
	}

	public void UserSelectChoice2()
	{
		Debug.Log ("Choice 2");

		int n = PlayerPrefs.GetInt(bad);
		PlayerPrefs.SetInt(bad, n+1);


		int m = PlayerPrefs.GetInt(index);
		PlayerPrefs.SetInt(index, m + currentQuestion.choice2increment);

		animator.SetTrigger ("Choice2");
		StartCoroutine (TransitionToNextQuestion ());
	}
}
