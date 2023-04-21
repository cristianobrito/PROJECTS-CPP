#include <iostream>
using namespace std;

#include <string>
using std::string;

#include "Akilles.h"

int main()
{
	Familia nossa("Oliveira e Mendes");
	cout << "ola " << nossa.getFamiliaName()
		<< endl;
	system("Pause");
	return 0;
}