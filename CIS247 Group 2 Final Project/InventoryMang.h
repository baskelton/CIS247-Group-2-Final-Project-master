#pragma once

#include <vector>
#include "Parts.h"

using namespace std;
class Inventory
{
public:
	Inventory(); //default
	//Internal Parts
	void addGPU(string, string, int, double);
	void addCPU(string, string, string, double, double);
	void addRAM(string, string, double, int, double);
	void addMOBO(string, string, string, double);
	
	vector<GPU> GPUvect;  // I have this here so we can access it in MenuHandler.
	

private:
	int numItems; //track number of items in inventory
	
	//Internal Parts
	//vector<GPU> GPUvect;  // Fixed Error
	vector<CPU> CPUvect;
	vector<RAM> RAMvect;
	vector<MOBO> MOBOvect;
};
