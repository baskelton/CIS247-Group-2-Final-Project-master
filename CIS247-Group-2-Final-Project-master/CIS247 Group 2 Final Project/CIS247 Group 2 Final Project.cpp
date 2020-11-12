// ---------------------------------------------------------------
// Programming:				PC Building Application
// Developer:				Group 2
// Date Written:            Started:  Nov 5 2020
//							Finished: 
// Purpose:                 CIS247 Group 2 final project
//                                                 
// ---------------------------------------------------------------

#include <iostream>
#include "MenuHandler.h"

int main()
{

	// Simple main file to open the main menu and allow user to navigate
	// through the program
	
	Inventory inv;
	menu men;
	cout << "Hello and welcome to Group 2's CIS247 Final Project app" << endl;
	men.mainMenu(inv);
	cout << "Thank you!";
	system("pause");
	return 0;
}
