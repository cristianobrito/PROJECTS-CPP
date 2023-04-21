#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "Musica.h"

Musica::Musica(string name)
{
	setNomeDaMusica(name);
}

void Musica::setNomeDaMusica(string name)
{
	if (name.length() <= 10)
	{
		NomeDaMusica = name;
	}
	else
	{
		NomeDaMusica = name.substr(0, 10);
		cout << "nome maior que 10 caracteres \n";
	}
}

string Musica::getNomeDaMusica()
{
	return NomeDaMusica;
}

void Musica::MostraMusica()
{
	cout << "A musica desse ano e " << getNomeDaMusica()
		 << endl;
}

void Musica::CalculaMusica()
{
	int Total;    // total
	int Valor;    // grade
	int i;        // gradecounter
	double media; // average

	Total = 0;
	i = 0;

	cout << "Digite -1 para sair ou digite o valor: ";
	cin >> Valor;
	while (Valor != -1)
	{
		Total = Total + Valor;
		i = i + 1;
		cout << "Digite -1 para sair ou digite o valor: ";
		cin >> Valor;
	}
	if (i != 0)
	{
		media = static_cast<double>(Total) / i;
		cout << "\nContagens: " << i << endl;
		cout << "\nO total e: " << Total << endl;
		cout << "\nA media e: " << setprecision(2) << fixed << media;
		cout << endl;
	}
	else
	{
		cout << "\nNao foi digitado um numero ";
	}
}
