/////////////////////////////////////////////////////////////////////
/*
  - author: NANUS  data: 28 de abril de 2023
  - limite de linhas 50 identação 1 tab ou 2 spaces
  - comentarios coluna 30
  - todo programa deve sempre começar com um comentario sobre o que
    ele faz isso é uma boa pratica de programação
    esse programama mostra as tres formas de comandos basicas para um 
    programa estruturado 
    sequencia seleção e repetição
*/
/////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int maior;                   // variavel global

int main()
{
	cout << "TRES FORMAS BASICAS \n"
		 << "sequencia seleção e repetição"
		 << endl;

	// sequencia é como o programa executa de cima pra baixao os comandos
	// seleção if if else switch

	/////////////////////////////////////////////////////////////////
	int a, b;
	cout << "DIGITE OS NUMEROS PARA A e B: \n";
	cin >> a >> b;

	// seleção if else
	if (a>b)
	{
		cout << "A: " << a;
		maior = 1;
	}
	else
	{
		cout << "B: " << b;
		maior = 2;
	}
	cout << endl;
	/////////////////////////////////////////////////////////////////

	/////////////////////////////////////////////////////////////////
    // seleção switch
	int code = maior;
	switch (code)
	{
	case 1:
		if (a>b)
		{
			cout << "a e maior ";
			cout << a;
		}
		break;
	case 2:
		if (a < b)
		{
			cout << "b e maior ";
			cout << b;
		}
		break;

	default:
		cout << "digite somente numeros ";
		break;
	}
	cout << endl;
	/////////////////////////////////////////////////////////////////

	// repetição for
	/////////////////////////////////////////////////////////////////
	int i;
	for (i = 0; i <= a; i++)
	{
		cout << "*";
	}
	for (i = 0; i <= b; i++)
	{
		cout << "@";
	}

	cout << endl;
	/////////////////////////////////////////////////////////////////

	// repetição while
	/////////////////////////////////////////////////////////////////
	while (b<a)
	{
		cout << "\n@";
		b += 1;
	}

	while (a<b)
	{
		cout << "\n!";
		a += 1;
	}
	cout << endl;
	/////////////////////////////////////////////////////////////////

	// repetição do_while
	/////////////////////////////////////////////////////////////////
	do {
		cout << "#";
		a--;
	} while (a>b);

	do {
		cout << "&";
		b--;
	} while (a<b);

	cout << endl;
	/////////////////////////////////////////////////////////////////
	
	return 0;
}