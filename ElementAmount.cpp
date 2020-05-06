#include "ElementAmount.h"

ElementAmount::ElementAmount(string name, string symbol, int aNum, int atomCount)
{
	_element = new Element(name, symbol, aNum);
	_atomCount = atomCount;
}

ElementAmount::~ElementAmount()
{
	if (_element != NULL)
		delete _element;
}

void ElementAmount::printElementAmount()
{
	_element->printElement();
	cout << "\tAtoms: " << _atomCount << endl;
}

void ElementAmount::addElementAmount(string name, string symbol, int aNum, int atomCount)
{
	_element = new Element(name, symbol, aNum);
	_atomCount = atomCount;
}