////////////////////////////////////////////
/*
   NANUS 24 DE ABRIL DE 2023
   CONTANDO COM O LAÇO WHILE
   programa conta ate 10
*/
///////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
	int contador=1;
	while (contador <= 10)
	{
		cout << contador << endl;
		contador++;
	}
	cout << endl;

	// USANDO O FOR PRA CONTAR
	int a;
	for (a=1; a<=10; a++)
	{
		cout << a << endl;
	}
	cout << endl;
	return 0;
}

// livro como programar em c++ deitel pg 180