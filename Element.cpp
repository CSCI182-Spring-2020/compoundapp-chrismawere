#include "Element.h"

Element::Element(string name, string symbol, int aNum)
{
	_name = name;
	_symbol = symbol;
	_atomicNum = aNum;
}

void Element::printElement()
{
	cout << _name << "\t" << _symbol << "\tZ = " << _atomicNum;
}
