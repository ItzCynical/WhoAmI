using System.Collections;
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


	void Start() 
	{
		if (unansweredQuestions == null || unansweredQuestions.Count == 0) 
		{
			unansweredQuestions = questions.ToList<Question> ();
		}

		SetCurrentQuestion();
	}

	void SetCurrentQuestion ()
	{
		int randomQuestionIndex = Random.Range (0, unansweredQuestions.Count);
		currentQuestion = unansweredQuestions [randomQuestionIndex];

		scenarioText.text = currentQuestion.scenario;
		choice1Text.text = currentQuestion.choice1;
		choice2Text.text = currentQuestion.choice2;
		choice1Answer.text = currentQuestion.choice1Answer;
		choice2Answer.text = currentQuestion.choice2Answer;

	}

	IEnumerator TransitionToNextQuestion () {
		unansweredQuestions.Remove (currentQuestion);

		yield return new WaitForSeconds (timeBetweenQuestions);

		SceneManager.LoadScene (SceneManager.GetActiveScene ().buildIndex);


	} 

	public void UserSelectChoice1()
	{
		Debug.Log ("Choice 1");

		animator.SetTrigger ("Choice1");
		StartCoroutine (TransitionToNextQuestion ());
	}

	public void UserSelectChoice2()
	{
		Debug.Log ("Choice 2");

		animator.SetTrigger ("Choice2");
		StartCoroutine (TransitionToNextQuestion ());
	}
}
