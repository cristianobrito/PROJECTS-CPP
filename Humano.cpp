#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "Humano.h"

Humano::Humano(string nome)
{
	setNome(nome);
}

void Humano::setNome(string nome)
{
	if (nome.length() <= 10)
	{
		nome = nome;
	}
	else
	{
		nome = nome.substr(0, 10);
		cout << "\nNome com mais de 10 letras " << nome;
	}
}

string Humano::getNome()
{
	return Nome;
}

void Humano::MostraNome()
{
	cout << "OLA SEJA BEM VINDO: " << getNome()
		 << "\n"
		 << endl;
}

void Humano::CalculaNota()
{
	int Total;
	int Valor;
	int i;
	double media;

	Total = 0;
	i = 0;

	cout << "\nDigite -1 para sair ou digitte a nota ";
	cin >> Valor;

	while (Valor != -1)
	{
		Total = Total + Valor;
		i = i + 1;
		cout << "Digite -1 para sair ou digite a nota ";
		cin >> Valor;
	}
	if (i != 0)
	{
		media = static_cast<double>(Total) / i;
		cout << "total: " << Total;
		cout << "\nentradas: " << i;
		cout << "\nmedia: " << setprecision(2) << fixed << media;
		cout << endl;
	}
	else
	{
		cout << "\ndigite um numero diferente de zero ";
	}
}