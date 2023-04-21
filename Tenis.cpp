#include <iostream>
using namespace std;

#include "Tenis.h"

Tenis::Tenis(string name)
{
	setTenisName(name);
}

void Tenis::setTenisName(string name)
{
	if (name.length() <= 10)
	{
		TenisName = name;
	}
	else 
	{
		TenisName = name.substr(0, 10); // inicia em 0 ate 10
		cout << "Nome muito grande " << name << "\nlimite 10"
			 << endl;
	}
}

string Tenis::getTenisName()
{
	return TenisName;
}

void Tenis::showMessage()
{
	cout << "Bem vindo " << getTenisName()
		 << endl;
}

void Tenis::ValorTenis()
{
	int total;
	int valorProduto;
	int produto;
	int media;

	total = 0;
	valorProduto = 1;
	while (valorProduto <= 10)
	{
		cout << "digite o valor dos calcados: ";
		cin >> produto;
		total = total + valorProduto;
		valorProduto = valorProduto + 1;
	}
	media = total / 10;
	cout << "\nVALOR DOS TENIS: ";
	cout << "Media de preco: " << media << endl;
}
