/////////////////////////////////////////////////
/*
  NANUS 26 de abril de 2023
  espa�os 1 tab ou 2 espa�os limite de linhas 50
  comentarios a partir da coluna 30
  PILARES DA PROGRAMA�AO ESTRUTURADA 
  N�O USAR BREAK E CONTINUE NEM GOTO
  A PROGRAMA�AO ESTRUTURADA SO TEM TRES FORMAS DE CONTROLE
  SEQUENCIA SELE�AO E REPETICAO
*/
/////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
	// sequencia � um comando apos o outro em ordem que devem ser executados
	// sele��o os if if-else switch
	// repeti�ao for while e do-while

	// SELE�AO
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

	// sele�ao
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

	// repeti�ao
	int i = 1;
	for (i = 1; i <= 10; i++)
	{
		cout << i;
	}

	cout << endl;

	// repeti�ao
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