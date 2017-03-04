#include "Die.h"



Die::Die(void)
	: side(0)
{
}


Die::~Die(void)
{
}

void Die::setSide(int i) const
{

}


int Die::roll(void) const
{
	int i = rand() % 6 + 1;
	setSide( i );
	showSide();
	return 0;
}

void Die::showSide(void) const
{

	switch (side) {
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