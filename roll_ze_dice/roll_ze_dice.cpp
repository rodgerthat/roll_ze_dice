// roll_ze_dice.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Die.h"
#include "Response.h"

using std::cout;
using std::endl;
using std::cin;

// TODO: have the dice displayed side by side, not on top of one another...

int main()
{

	char rollAgain;		// hold user choice for rolling again

	// technically you don't even need this, you can just make one die and keep rolling it over and over again. 
	Die diceArray[9];	// make an array of dice
	Response response;	// get some witty responses ready.
	
	srand(time(0));		// seed the random number generator

	int numDice = 0;	// how many dice does the user wanna roll?
	int theAnswer = 1;	// something to store the answer in, whatever you do, don't make this a 0 to start...
	int userScore = 0;	// nowhere to go but up.
	int userAnswer = 0;	// 

	// output catchy gaem titles
	system("CLS");	// windows clear screen
	cout << endl;
	cout << "********************************" << endl;
	cout << "* Roll ze Dice : Product Game! *" << endl;
	cout << "********************************" << endl;
	cout << endl;

	do {
		
		cout << endl;
		cout << "How many dice? ( 0 - 9 ) : ";

		cin >> numDice ;	// get user input

		theAnswer = 1;		// reset the answer

		for (int i=0; i < numDice; ++i) {
			
			// for the number of selected dice, give 'em a roll.
			// still rolls when you go outside the bounds of 9 dice...
			diceArray[i].roll();
			theAnswer *= diceArray[i].getSide();	// calculate ze answer whilst we rollolololol

			// more debuggery
			//cout << endl <<  diceArray[i].getSide() << endl;
			//cout << endl << theAnswer << endl;
		}

		do {
			// query the user for ze answer!
			cout << endl;
			cout << "What is the product of these dice? ";
			cin >> userAnswer;
			
			// for some old skool debuggery
			//cout << "theAnswer : " << theAnswer << endl;
			//cout << "userAnswer : " << userAnswer << endl;

			if ( theAnswer != userAnswer ) {
				cout << "That answer is incorrect..." << endl;
				response.getNegativeReponse();
			}

		} while ( theAnswer != userAnswer );
		
		cout << "YAY! Correct!" << endl;
		response.getPostiveResponse();
		userScore += theAnswer;
		cout << "You're score is : " << userScore << endl;
		
		cout << endl;
		cout << "Roll ze dice again? y/n : ";
		
		cin >> rollAgain;

	} while ( rollAgain == 'y' );

	return 0;
}

