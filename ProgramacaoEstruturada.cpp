/////////////////////////////////////////////////
/*
  NANUS 26 de abril de 2023
  espaços 1 tab ou 2 espaços limite de linhas 50
  comentarios a partir da coluna 30
  PILARES DA PROGRAMAÇAO ESTRUTURADA 
  NÃO USAR BREAK E CONTINUE NEM GOTO
  A PROGRAMAÇAO ESTRUTURADA SO TEM TRES FORMAS DE CONTROLE
  SEQUENCIA SELEÇAO E REPETICAO
*/
/////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
	// sequencia é um comando apos o outro em ordem que devem ser executados
	// seleção os if if-else switch
	// repetiçao for while e do-while

	// SELEÇAO
	int a, b;
	cout << "Digite o valor de A e B: ";
	cin >> a >> b;
	if (a>b)
	{
		cout << "maior a " << a << endl;

	}
	else
	{
		cout << "maior b " << b << endl;
	}

	cout << endl;

	// seleçao
	int code;
	cout << "Digite 1 ou 2 para saber os valores de A e B: ";
	cin >> code;
	switch (code)
	{
	case 1:
		cout << a << endl;
		break;
	case 2:
		cout << b << endl;

	default:
		cout << "digite um numero " << endl;
		break;
	}

	cout << endl;

	// repetiçao
	int i = 1;
	for (i = 1; i <= 10; i++)
	{
		cout << i;
	}

	cout << endl;

	// repetiçao
	int x = 0;
	while (x<=10)
	{
		cout << x << endl;
		x+=1;
	}

	cout << endl;

	// repeticao
	int y = 10;
	do {
		cout << y;
		y -= 1;
	} while (y>0);

	cout << endl;
}
// TODAS ESSAS ESTRUTURAS BASICAS PODEM SER ANINHADAS OU ENCADEADAS
// PODENDO SEREM MISTURADAS UMAS DENTRO DAS OUTRAS