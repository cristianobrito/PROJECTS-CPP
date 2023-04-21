#include <iostream>
using namespace std;

#include "Anfibios.h"

int main()
{
	Anfibios Anura("SAPO");

	Anura.showMessage();
	Anura.calculaMedia();
	cout << endl;
	return 0;
}