#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;                      // PONTOS DECIMAIS

#include <iomanip>
using std::setprecision;               // PRECISAO DECIMAL

#include "Filmes.h"                    // IMPORT DA CLASSE

Filmes::Filmes(string Nome)            // CONSTRUTOR
{
	setNomeFilme(Nome);
}

void Filmes::setNomeFilme(string Nome) // CONFIGURA O NOME
{
	if (Nome.length() <= 10)           // SE FOR MENOR Q 10
	{
		NomeFilme = Nome;
	}
	else
	{
		NomeFilme = Nome.substr(0, 10);// PEGA DE 0 ATÉ 10 CARACTERES
		cout << "\nNome Maior que 10 caracteres " << NomeFilme;
	}
}

string Filmes::getNomeFilme()
{
	return NomeFilme;                  // RETORNA O NOME
}

void Filmes::MostraFilme()
{
	cout << "\nBem vindo ao cinema " << getNomeFilme()
		 << endl;
}

void Filmes::ContaFilme()
{
	int Total;        // TOTAL DOS VALORES
	int Valor;        // VALOR DOS FILMES
	int i;            // CONTADOR
	double Media;     // MEDIA

	Total = 0;        // INICIALIZA SE NAO DA ERRO
	i = 0;            // IDEM AO DE CIMA

	cout << "Digite -1 para sair ou digite o valor ";
	cin >> Valor;
	while (Valor != -1)// ENQUANTO O VALOR NÃO FOR -1
	{
		Total = Total + Valor;
		i = i + 1;     
		cout << "Digite -1 para sair ou digite o valor ";
		cin >> Valor;
	}
	if (Valor != 0)    // SE FOI DIGITADO ALGUMA COISA
	{
		Media = static_cast<double>(Total) / i;  // CAST
		cout << "TOTAL: " << Total << "\n"
			 << "CONTADOR: " << i << "\n"
			 << "MEDIA: " << setprecision(2) << fixed << Media 
		     << endl;
	}
}