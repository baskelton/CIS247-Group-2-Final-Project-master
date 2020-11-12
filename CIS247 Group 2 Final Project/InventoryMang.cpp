#include "InventoryMang.h"
#include "Parts.h"

using namespace std;

Inventory::Inventory() {
	int numItems = 0;
}

void Inventory::addGPU(string man, string mod, int mem, double price) {
	GPUvect.resize(4);
	GPUvect.push_back(GPU(man, mod, mem, price));
	numItems++;
}

// This keeps throwing exceptions, but I cannot figure out why.
// This function is so that way we can display the vector.
ostream& operator<<(ostream& os, const vector <GPU>& g)
{
	os << g;

	return os;
}