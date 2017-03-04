// roll_ze_dice.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Die.h"

using std::cout;
using std::endl;
using std::cin;


int main()
{


	char c;	// hold user choice

	// seed the random number generator
	srand(time(0));

	// how many dice?
	int numDice = 0;
	Die diceArray[9];

	do {

		cout << "How many dice? ( 0 - 9 )" << endl;
		

	} while ( ( c = cin.get() ) != '!' );

	for (int i=0; i < numDice; ++i) {

		diceArray[i].roll();
		// the dice should've already been instantiated
		//diceArray[] = new Die;

	}

	return 0;
}

