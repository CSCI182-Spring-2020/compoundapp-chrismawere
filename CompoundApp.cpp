// CompoundApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Compound.h"

using namespace std;

int main()
{
    // Create Butane
    Compound* c = new Compound(2);
    Compound* com = c;// copy object c to com


    c->addElement("Carbon", "C", 6, 4);
    c->addElement("Hydrogen", "H", 1, 10);
    c->printCompound();

    com->addElement("Carbon", "C", 6, 4);
    com->addElement("Hydrogen", "H", 1, 10);
    com->printCompound();

    delete c;
}
