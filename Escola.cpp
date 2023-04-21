#include <iostream>
using namespace std;

#include "ESCOLA.h"

Escola::Escola(string name)
{
	setEscolaName(name);
}

void Escola::setEscolaName(string name)
{
	if (name.length() <= 10)
	{
		EscolaName = name;
	}
	else
	{
		EscolaName = name.substr(0, 10); // vai do caractere 0 ate 10 caractere
		cout << "o nome tem mais de 10 caracteres " << name
			 << "\n"
			 << endl;
	}
}

string Escola::getEscolaName()
{
	return EscolaName;
}

void Escola::showMessage()
{
	cout << "bem vindo a escola: "
     	 << getEscolaName()
		 << "\n";
}

void Escola::notaEscola()
{
	int total;      // total das notas
	int nota;       // nota a ser inserida
	int i;          // contador
	float media;    // media soma das notas dividido por 10
	
	total = 0;
	i = 1;

	while (i <= 10)
	{
		cout << "Digite as notas da escola: ";
		cin >> nota;
		total = total + nota;
		i = i + 1;
	}
	media = (float)total / 10;  // cast converte um valor em outro

	cout << "\nTotal das notas: "  << total << endl;
	cout << "\nmedia da escola: "  << media << endl;
}
