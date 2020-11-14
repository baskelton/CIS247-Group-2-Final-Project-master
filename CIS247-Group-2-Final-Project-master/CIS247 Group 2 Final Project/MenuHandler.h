//------------------------------------------------------
//Purpose:  This class will hold Menu methods
//			for differnt menues used in the program
//
//------------------------------------------------------


#pragma once
#include <vector>
#include "Parts.h"
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>

using namespace std;

enum addRemoveOpt{ADD, REMOVE};  //for later use int the add remove menu(makes things easier)
const int PRICE_WIDTH = 6;	//standardized width for the price column when printing inv contents.
const int NUM_WIDTH = 4;

class Inventory
{
public:
	Inventory(); //default

	//Internal Parts
	void addGPU(string, string, int, double);
	void addCPU(string, string, string, double, double);
	void addRAM(string, string, double, int, double);
	void addMOBO(string, string, string, double);

	void removeGPU();

	void printGPU();

private:
	int numItems; //track number of items in inventory

	//Internal Parts
	vector<GPU> GPUvect;
	vector<CPU> CPUvect;
	vector<RAM> RAMvect;
	vector<MOBO> MOBOvect;

};

//Menu Functions

class menu {
public:
	menu();
	void mainMenu(Inventory&);
	void inventoryMangMenu(Inventory&);
	void viewItemsMenu(Inventory&);
	void addRemoveItemMenu(Inventory&, addRemoveOpt);

	void internalPartsMenu();
	void externalPartsMenu();
	void extraPartsMenu();



	void addMangSubMenu(Inventory&);
	void removeMangSubMenu(Inventory&);

	void addGPUMenu(Inventory&);
	void removeGPUitem(Inventory&);
};



