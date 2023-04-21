#include <iostream>
using namespace std;

#include "ESCOLA.h"

int main()
{
	Escola Colegio("Cafe Filho de nobrega da silva");
	Escola Colegio2("Oreste Barbosa");
    
	Colegio.showMessage();
	Colegio2.showMessage();

	Colegio.notaEscola();
}