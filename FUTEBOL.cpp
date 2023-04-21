#include <iostream>
using namespace std;
#include "FUTEBOL.h"

Futebol::Futebol(string name)
{
	setTimeName(name);	
}
	
void Futebol::setTimeName(string name)
{
	TimeName = name;
}

string Futebol::getTimeName()
{
	return TimeName;
}

void Futebol::displayMessage()
{
	cout << "bem vindo " << getTimeName()
   		 << endl;
}