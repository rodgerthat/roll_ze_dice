#include "Die.h"



Die::Die(void)
	: side(0)
{
}


Die::~Die(void)
{
}

int Die::getSide() const
{
	return side;
}

void Die::setSide(int i) const
{
	//side = i;
}


int Die::roll(void) const
{
	int i = rand() % 6 + 1;
	//setSide( i );
	showSide(i);
	return 0;
}

void Die::showSide(int i) const
{

	switch (i) {
	case 6 : 
		cout << "---------" << endl
			<<	"| *   * |" << endl
			<<	"| *   * |"	<< endl
			<<	"| *   * |"	<< endl
			<<	"---------" << endl;
		break;
	
	case 5 : 
		cout << "---------" << endl
			<<	"| *   * |" << endl
			<<	"|   *   |"	<< endl
			<<	"| *   * |"	<< endl
			<<	"---------" << endl;
		break;

	case 4 : 
		cout << "---------" << endl
			<<	"| *   * |" << endl
			<<	"|       |"	<< endl
			<<	"| *   * |"	<< endl
			<<	"---------" << endl;
		break;

	case 3 : 
		cout << "---------" << endl
			<<	"| *     |" << endl
			<<	"|   *   |"	<< endl
			<<	"|     * |"	<< endl
			<<	"---------" << endl;
		break;

	case 2 : 
		cout << "---------" << endl
			<<	"| *     |" << endl
			<<	"|       |"	<< endl
			<<	"|     * |"	<< endl
			<<	"---------" << endl;
		break;

	case 1 : 
		cout << "---------" << endl
			<<	"|       |" << endl
			<<	"|   *   |"	<< endl
			<<	"|       |"	<< endl
			<<	"---------" << endl;
		break;
	}
}