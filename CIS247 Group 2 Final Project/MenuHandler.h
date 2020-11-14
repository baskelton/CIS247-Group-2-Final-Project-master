//------------------------------------------------------
//Purpose:  This class will hold Menu methods
//			for differnt menues used in the program
//
//------------------------------------------------------


#pragma once

using namespace std;

enum addRemoveOpt{ADD, REMOVE};  //for later use int the add remove menu(makes things easier)

class menuHandler
{
private:

public:
	static void mainMenu();
};


void inventoryMangMenu();
void viewItemsMenu();
void addRemoveItemMenu(addRemoveOpt);

void internalPartsMenu();
void externalPartsMenu();
void extraPartsMenu();



void addMangSubMenu();
void removeMangSubMenu();

void addGPUMenu();
 