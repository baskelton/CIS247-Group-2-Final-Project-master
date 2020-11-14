
#include "Parts.h"
#include "MenuHandler.h"

using namespace std;

Inventory::Inventory() {
	numItems = 0;
}

void Inventory::addGPU(string man, string mod, int mem, double price) 
{
	GPUvect.push_back(GPU(man, mod, mem, price));
}

void Inventory::removeGPU() {
	GPUvect.pop_back();
}

void Inventory::printGPU() 
{
	system("cls");
	cout << left << setw(NUM_WIDTH) << " " << setw(22) << "Manufacture" << setw(22) << "Model" << setw(22) << "Memory" << setw(15) << "Price" << setw(10)<< endl;
	vector<GPU>::iterator iter = GPUvect.begin();
	int i = 1;
	while (iter != GPUvect.end())
	{
		cout << setw(NUM_WIDTH) << i << left << setw(22) << iter->getManufacture() << setw(22) << iter->getModel() << setw(22) << iter->getMemory() << setw(15) << iter->getPrice() << endl;
		iter++; i++;
	}
	
}
