#pragma once
#include<iostream>
#include "Element.h"

class ElementAmount
{
private:
	Element* _element = NULL;
	int _atomCount = 0;
public:
	/// <summary>
	/// Constructor
	/// </summary>
	/// <param name="name">The element name</param>
	/// <param name="symbol">The element symbol</param>
	/// <param name="aNum">The element atomic number</param>
	/// <param name="atomCount">The amount of the element</param>
	ElementAmount() {};
	ElementAmount(string name, string symbol, int aNum, int atomCount);
	~ElementAmount();
	void printElementAmount();
	void addElementAmount(string name, string symbol, int aNum, int atomCount);
};