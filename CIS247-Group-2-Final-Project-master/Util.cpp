#include "Util.h"


bool checkValidInput(int min, int max, int choice)
{
	if ((choice > max) || (choice < min))
	{
		cout << "Invalid choice\n";
		system("PAUSE");
		return false;
	}
	else
	{
		return true;
	}
	
}