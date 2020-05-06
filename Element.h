#pragma once
#include <iostream>

using namespace std;

class Element
{
private:
	string _name = "";
	string _symbol = "";
	int _atomicNum = 0;
public:
	Element(string name, string symbol, int aNum);
	~Element() {};
	void printElement();

};
