#pragma once

		
#include<iostream>
#include "ElementAmount.h"

class Compound
{
private:
	ElementAmount* _compound = NULL;
	int _compoundSize;
	int _elementIndex = 0;
public:
	//constructor
	Compound(int nNumberElements);
	
	// copy constructor
	
	Compound(Compound& com);
	
	// Destructor for Compound objects. Deallocate _compound.
	
	~Compound();

	// Add a new ElementAmountObject to _compound array
	void addElement(string name, string symbol, int aNum, int aCount);
	
	// Print the Compound

	void printCompound();
};