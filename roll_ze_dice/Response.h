/********************************************************************************
 *	filename: Response.h
 *	  author: Norris, Joel R.
 *	 purpose:
 *
********************************************************************************/

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Response
{
public:
	Response(void);
	~Response(void);
	
	void getPostiveResponse();

	void getNegativeReponse();

private:
	int maxNumResponses;
	string response;
	string negativeResponseArray[];
	
};

