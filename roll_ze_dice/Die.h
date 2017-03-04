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

	int roll(void) const;

private:

	int side;
	void showSide() const;
	void setSide(int) const;
	int getSide() const;

};

