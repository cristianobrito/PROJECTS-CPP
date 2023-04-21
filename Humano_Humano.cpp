#include <iostream>
using namespace std;

#include "Humano.h"

int main()
{
	Humano Nano("Cristiano Oliveira");

	Nano.getNome();
	Nano.CalculaNota();

	return 0;
}