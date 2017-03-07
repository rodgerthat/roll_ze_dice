// roll_ze_dice.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Die.h"

using std::cout;
using std::endl;
using std::cin;

// TODO: have the dice displayed side by side, not on top of one another...

int main()
{

	char rollAgain;		// hold user choice for rolling again

	// technically you don't even need this, you can just make one die and keep rolling it over and over again. 
	Die diceArray[9];	// make an array of dice
	
	srand(time(0));		// seed the random number generator

	int numDice = 0;	// how many dice does the user wanna roll?
	int theAnswer = 0;	// something to store the answer in

	do {
		
		cout << endl;
		cout << "How many dice? ( 0 - 9 ) : ";

		cin >> numDice ;	// get user input

		for (int i=0; i < numDice; ++i) {
			
			// for the number of selected dice, give 'em a roll.
			// still rolls when you go outside the bounds of 9 dice...
			diceArray[i].roll();
			theAnswer *= diceArray[i].getSide();	// calculate ze answer whilst we rollolololol

		}

		// query the user for ze answer!
		
		cout << endl;
		cout << "Roll ze dice again? y/n : ";
		
		cin >> rollAgain;

	} while ( rollAgain == 'y' );

	return 0;
}

