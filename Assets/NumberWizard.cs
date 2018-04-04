using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class NumberWizard : MonoBehaviour {
	int max;
	int min;
	int guess;
	int maxGussesAllowed =10;

	public Text text;
	//public Text jo;
	// Use this for initialization
	void Start () {
		StartGame();
	}
	
	void StartGame(){
		max = 1000;
		min = 1;
		NextGuess ();
	}

	public void GuessLower(){
		max = guess;
		NextGuess ();
	}

	public void GuessHigher(){
		min = guess;
		NextGuess ();
	}

	void NextGuess(){
		guess = Random.Range(min, max+1);
		 
		//jo.text = "";
		text.text = guess.ToString();
		maxGussesAllowed = maxGussesAllowed -1;
		if (maxGussesAllowed<=0){
			Application.LoadLevel("Win");
		}
	}
}
