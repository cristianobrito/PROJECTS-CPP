////////////////////////////////////////////////
/*
  NANUS 24 DE ABRIL DE 2023
  CALCULO DE JUROS COMPOSTOS
*/
///////////////////////////////////////////////
#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;
using std::setprecision;

#include <cmath>
using std::pow;

int main()
{
	double amount;               // quantia em deposito ao fim de cada ano
	double principal  = 1000.0;  // quantia inicial antes dos juros
	double rate       = .05;     // taxa de juros
    
	cout << "ano" << setw(21) <<  "Amount deposit" << endl;

	cout << fixed <<setprecision(2);  // configura o formato de ponto flutuante

	// calcula a quantia para cada um dos dez anos
	for (int ano=1; ano<=10; ano++)
	{
		// calcula nova quantia durante ano especificado
		amount = principal * pow(1.0 + rate, ano);

		// exibe ano e quantia
		cout << setw(4) << ano << setw(21) << amount << endl;
	}
	return 0;
}

// livro como programar c++ deitel pg 191