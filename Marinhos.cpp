#include <iostream>
using namespace std;

#include "Marinhos.h"

Marines::Marines(string nome)
{
	setPeixeNome(nome);
}

void Marines::setPeixeNome(string nome)
{
	if (nome.length() <= 10)
	{
		PeixeNome = nome;
	}
	else
	{
		PeixeNome = nome.substr(0, 10); // vai ate 10 caracteres
		cout << "nome muito grande para um peixe \n" << nome;
	}
}

string Marines::getPeixeNome()
{
	return PeixeNome;
}

void Marines::MostraMensagem()
{
	cout << "\nBem vindo ao aqua rio \n"
		 << getPeixeNome()
	     << endl;
}

void Marines::mediaDePeixes()
{
	int total;
	int quantidade;
	int i;
	float media;

	i = 0;
	total = 0;
	while (i<=10)
	{
		cout << "DIGITE A QUANTIDADE DE PEIXES: ";
		cin >> quantidade;
		total = total + quantidade;
		i = i + 1;
	}

	media = (float)total / 10;

	cout << "o total de peixes e: "         << total;
	cout << "\na media de peixes pegos e: " << media;
}