#include <iostream>
using namespace std;

#include "Marinhos.h"

int main()
{
	Marines Peixe1("Dourado do rio grande");
	Marines Peixe2("GAROUPA");

	Peixe1.MostraMensagem();
	cout << "\n";
	Peixe1.mediaDePeixes();

	cout << "\n";
	Peixe2.MostraMensagem();
	cout << "\n";
	Peixe2.mediaDePeixes();
	cout << "\n";
}