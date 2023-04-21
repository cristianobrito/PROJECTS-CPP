#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "Anfibios.h"

Anfibios::Anfibios(string name)
{
	setAnfibioName(name);
}

void Anfibios::setAnfibioName(string name)
{
	if (name.length() <= 10)
	{
		AnfibioName = name;
	}
	else
	{
		AnfibioName = name.substr(0, 10);
		cout << "O nome e muito grande " << name << endl;
		cout << "\no nome tem mais de 10 caracteres \n";
	}
}

string Anfibios::getAnfibioName()
{
	return AnfibioName;
}

void Anfibios::showMessage()
{
	cout << "Bem vindo ao aquario " << getAnfibioName()
		<< endl;
}

void Anfibios::calculaMedia()
{
	int total;     // total 
	int valor;     // grade
	int i;         // gradecounter
	double media;  // average

	total = 0;
	i = 0;

	cout << "Digite -1 para sair ou digite os valores: ";
	cin >> valor;
	while (valor != -1)
	{
		total = total + valor;
		i = i + 1;
		cout << "Digite -1 para sair ";
		cin >> valor;
	}
	if (i != 0)
	{
		media = static_cast< double >(total) / i;
		cout << "\ncontagem " << i
			 << "\n";
		cout << "total " << total << "\n" << endl;
		cout << "media " << setprecision(2) << fixed << media << endl;
	}
	else
	{
		cout << "no foram digitados valores " << endl;
	}
}