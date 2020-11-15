/*
	Purpose:  This class will hold Menu methods
			  for differnt menues used in the program

			 
*/


#include "Util.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include "MenuHandler.h"
#include "Parts.h"
#include <vector>
#include <sstream>

using namespace std;





//Main Menu -testing(partial)

void mainMenu(Inventory& inv)
{
	bool exit = false;
	string input;
	int userChoice;
	do
	{
		do
		{
			cout << "Main Menu: " << endl;
			cout << "1)Menu Opt 1" << endl;
			cout << "2)Menu Opt 2" << endl;
			cout << "3)Menu Opt 3" << endl;
			cout << "4)Menu Opt 4" << endl;
			cout << "5)Inv Management" << endl;
			cout << "6)Exit" << endl;
			cout << "Please enter you choice: ";
			cin >> userChoice;		
			
		} while (!checkValidInput(1, 7, userChoice));
	
		switch (userChoice)
		{
		case 1 :
			system("cls");
			//code to submenu
			break;
		case 2:
			system("cls");
			//code to submenu
			break;
		case 3:
			system("cls");
			//code to submenu
			break;
		case 4:
			system("cls");
			//code to submenu
			break;
		case 5:
			system("cls");
			inventoryMangMenu(inv);
			break;
		case 6:
			exit = true;
			break;
		default:
			cout << "Invalid input. Please enter 1, 2, 3, 4, 5, or 6." << endl;
		}
	} while (userChoice != 6);
}

//Inventory Management Menu -testing(partial)
void inventoryMangMenu(Inventory& inv)  
{
	int userChoice;
	bool exit = false;
	do
	{
		do
		{
			cout << "Inventory Managment Menu:" << endl;
			cout << "1)Add Item(testing)" << endl;
			cout << "2)Remove Item(testing)" << endl;
			cout << "3)View all items(testing)" << endl;
			cout << "4)Select a build (testing)" << endl;
			cout << "5)Return to main menu(testing)" << endl;
			cin >> userChoice;
			cin.ignore();
			userChoice = toupper(userChoice);
		} while (!checkValidInput(1, 4, userChoice));
		
		switch (userChoice)
		{
		case 1:
			system("cls");
			addMangSubMenu(inv);
			break;
		case 2:
			system("cls");
			removeMangSubMenu(inv);
			break;
		case 3:
			system("cls");
			inv.printGPU();
			break;
		case 4:
			system("cls");
			selectGPUmenu(inv);
			break;
		case 5:
			system("cls");
			inventoryMangMenu(inv);
			break;
		default:
			cout << "Invalid choice. Please enter 1, 2, 3, or 4." << endl;
		}
	} while (exit != true);
}



//Adding and Removing Items Menu -testing(partial)
void addRemoveItemMenu(Inventory& inv,addRemoveOpt addRemoveOptInput)  {
	bool exit = false;
	int userChoice;
	string addRemovePath;
	if (addRemoveOptInput == ADD)
		addRemovePath = "ADD";
	else if (addRemoveOptInput == REMOVE)
		addRemovePath = "Remove";
	do
	{	
		cout << "What would you like to do:" << endl;
		cout << "1)Add an item (testing)" << endl;
		cout << "2)Remove an item (testing)" << endl;
		cout << "3)View all (testing)" << endl;
		cout << "4)Choose a build (testing)" << endl;
		cout << "5)Return to Inv menu" << endl;
		cin >> userChoice;
		cin.ignore();
		userChoice = toupper(userChoice);
	} while (!checkValidInput(1, 5, userChoice));
	switch (userChoice)
	{
	case 1:
		system("cls");
		addMangSubMenu(inv);
		break;
	case 2:
		system("cls");
		removeMangSubMenu(inv);
		break;
	case 3:
		system("cls");
		inv.printGPU();
		break;
	case 4:
		system("cls");
		selectGPUmenu(inv);
		break;
	case 5:
		system("cls");
		inventoryMangMenu(inv);
		break;
	
	}
} 

//Adding Items (Managment) submenu(testing)
void addMangSubMenu(Inventory& inv) 
{
	int userChoice;
	do
	{
		cout << "Adding an item Submenu" << endl;
		cout << "What woudld you like to add?" << endl;
		cout << "1)GPU (testing)" << endl;
		cin >> userChoice;
		cin.ignore();
		userChoice = toupper(userChoice);
	} while (!checkValidInput(1, 4, userChoice));
	switch (userChoice)
	{
	case 1:
		system("cls");
		addGPUMenu(inv);
		break;
	case 2:
		system("cls");
		//code to submenu
		break;
	case 3:
		system("cls");
		//code to submenu
		break;
	case 4:
		system("cls");
		inventoryMangMenu(inv);
		break;
	}

}

void removeMangSubMenu(Inventory& inv)
{
	int userChoice;
	do
	{
		cout << "Adding an item Submenu" << endl;
		cout << "What woudld you like to remove?" << endl;
		cout << "1)GPU (testing)" << endl;
		cin >> userChoice;
		cin.ignore();
		userChoice = toupper(userChoice);
	} while (!checkValidInput(1, 4, userChoice));
	switch (userChoice)
	{
	case 1:
		system("cls");
		removeGPUmenu(inv);
		break;
	case 2:
		system("cls");
		//code to submenu
		break;
	case 3:
		system("cls");
		//code to submenu
		break;
	case 4:
		system("cls");
		inventoryMangMenu(inv);
		break;
	}

}

void addGPUMenu(Inventory& inv) 
{
	string man, mod;
	int mem;
	double price;
	
	cout << "Please press Enter to continue adding information." << endl;
	cin.ignore();
	cout << "Enter the Manufacture: " << endl;
	getline(cin, man);
	cout << "Enter the Model:" << endl;
	getline(cin, mod);
	cout << "Enter the amount of memory: " << endl;
	cin >> mem;
	cout << "Enter the Price: " << endl;
	cin >> price;
	inv.addGPU(man,mod,mem,price);

}

void removeGPUmenu(Inventory& inv) {
	inv.removeGPU();
}


// Testing to see if we can display a specific GPU build from the code.

ostream& operator<<(ostream& output, GPU& V) {  // overloads the "<<" so we can display all parts of the GPU class, which is all the vector is.
	output << V.getManufacture() << ", ";
	output<< V.getModel()<< ", ";
	output<< V.getMemory() << ", ";
	output << V.getPrice() << endl;

	return output;
}

void selectGPUmenu(Inventory& inv) {
	int choice;
	string opt;

	cout << "From the list select the GPU number build you want: " << endl;
	inv.printGPU();
	cin >> choice;

	cout << inv.GPUvect.at(choice - 1); // because the << is overloaded we can call the vector now at a choice to display the build they want.
	// ^ the - 1 is to get the correct index location of their selected build.
} 

