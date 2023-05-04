/////////////////////////////////////////////////////////////////////
/*
  - author: NANUS  data: 28 de abril de 2023
  - limite de linhas 50 identa��o 1 tab ou 2 spaces
  - comentarios coluna 30
  - todo programa deve sempre come�ar com um comentario sobre o que
    ele faz isso � uma boa pratica de programa��o
    esse programama mostra as tres formas de comandos basicas para um 
    programa estruturado 
    sequencia sele��o e repeti��o
*/
/////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int maior;                   // variavel global

int main()
{
	cout << "TRES FORMAS BASICAS \n"
		 << "sequencia sele��o e repeti��o"
		 << endl;

	// sequencia � como o programa executa de cima pra baixao os comandos
	// sele��o if if else switch

	/////////////////////////////////////////////////////////////////
	int a, b;
	cout << "DIGITE OS NUMEROS PARA A e B: \n";
	cin >> a >> b;

	// sele��o if else
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
    // sele��o switch
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

	// repeti��o for
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

	// repeti��o while
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

	// repeti��o do_while
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