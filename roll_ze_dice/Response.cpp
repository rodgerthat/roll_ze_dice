#include "Response.h"


Response::Response(void)
	: maxNumResponses(3)
{
}


Response::~Response(void)
{
}

void Response::getPostiveResponse() {
	
	int randomNum = rand() % maxNumResponses;

	switch(randomNum) {

	case 0:	response = "Good Job!"; break;
	case 1:	response = "Nice work!"; break;
	case 2:	response = "Way to go!"; break;
	
	}

	cout << response << endl;
}

void Response::getNegativeReponse() {

	int randomNum = rand() % maxNumResponses;

	switch(randomNum) {

	case 0:	response = "OOOOh, Sorry, that's not the right answer."; break;
	case 1:	response = "Bummer dude,"; break;
	case 2:	response = "Nice try, but try again..."; break;
	case 3: response = "You've got this, try again..."; break;

	}

	cout << response << endl;
}