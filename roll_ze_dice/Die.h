/********************************************************************************
 *	filename: Die.h
 *	  author: Norris, Joel R.
 *	 purpose:
 *
********************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

class Die
{

public:
	Die(void);
	~Die(void);

	int roll(void);

private:

	int side;
	void showSide(int) const;
	void setSide(int);
	int getSide() const;

};

