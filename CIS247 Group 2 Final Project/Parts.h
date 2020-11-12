/*------------------------------------------------------
Purpose:  This class will hold Parts 
			for things such as CPU, GPU, RAM, Motherboards

			Done
*/

#pragma once

#include <iostream>
#include <vector>
using namespace std;

//Settup files for storage

//Internal Parts
const string GPU_file = "GPU's.csv";
const string CPU_file = "CPU's.csv";
const string RAM_file = "RAM.csv";

//Classes for Internal Parts
class GPU
{
private:
	string manufacture, model;
	int memory;
	double price;
	

public:
	//Default Constructor
	GPU();
	//Constructor
	GPU(string, string, int, double);

	//This needs to be here to overload the << operator for the MenuHandler
	friend ostream& operator<<(ostream& output, const vector<GPU>& g);
	
	//Accessors
	string getManufacture();
	string getModel();
	int getMemory();
	double getPrice();
};
class CPU
{
private:
	string manufacture, model;
	double clockSpeed, price;
public:
	CPU(string, string , string , double , double);

	//Accessors
	string getManufacture();
	string getModel();
	double getClockSpeed();
	double getPrice();
};
class RAM
{
private:
	string manufacture, model;
	int memory;
	double clockSpeed, price;
public:
	RAM(string, string, double , int, double);

	//Accessors
	string getManufacture();
	string getModel();
	double getClockSpeed();
	int getMemory();
	double getPrice();
};
class MOBO
{
private:
	string manufacture, model,chipSet;
	double price;
public:
	MOBO(string man, string mod, string chip, double price);

	//Accessors
	string getManufacture();
	string getModel();
	string getChipSet();
	double getPrice();
};




