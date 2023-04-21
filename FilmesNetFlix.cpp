#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;              // PARA COLOCAR POTOS DECIMAIS

#include "Filmes.h"            // IMPORTA A CLASSE

int main()
{
	Filmes Batman("O retorno"); // INSTANCIA O OBJ

	Batman.MostraFilme();       // CHAMA FUNC MENBRO
	Batman.ContaFilme();        // CHAMA OUTRA FUNC MENBRO

	cout << endl;

	return 0;
}