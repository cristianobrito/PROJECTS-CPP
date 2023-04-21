#include <iostream>
using namespace std;

#include "Akilles.h"

Familia::Familia(string name)
{
	setFamiliaName(name);
}

void Familia::setFamiliaName(string name)
{
	FamiliaName = name;
}

string Familia::getFamiliaName()
{
	return FamiliaName;
}

void Familia::showMessage()
{
	cout << "bem vindos " << getFamiliaName()
		 << endl;
}