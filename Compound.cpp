#include "Compound.h"
#include<iostream>

using namespace std;

Compound::Compound(Compound& Com)
{
	_compound = Com._compound;
}


Compound::Compound(int nNumberElements)
{
	_compound = new ElementAmount[nNumberElements];
	_compoundSize = nNumberElements;
}

Compound::~Compound()
{
	if (_compound != NULL)
		delete[] _compound;
}

void Compound::addElement(string name, string symbol, int aNum, int aCount)
{
	if (_elementIndex < _compoundSize) {
		_compound[_elementIndex].addElementAmount(name, symbol, aNum, aCount);
		_elementIndex++;
	}
}

void Compound::printCompound()
{
	for (int i = 0; i < _compoundSize; i++)
		_compound[i].printElementAmount();
}