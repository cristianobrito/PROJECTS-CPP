/* Esse programa exibe 
*  ola mundo e mostra maior e a soma
*  identação 2 espaços
*  limite de linhas 50
*  comentarios apartir da linha 30
*  author: cristiano
*  data: 30/03/2023
* 
*/
#include <iostream>

using namespace std;         // para usar os nomes de std padrão
using std::cout;             // em caso de uso especifico 

int main()
{
	int a, b, soma;          // declara as variaveis

	cout << "digite o primeiro numeros" << endl;
	cin >> a;                // faz a leitura das variaveis
	cout << "digite o segundo numero" << endl;
	cin >> b;

	if (a>b)                 // testa a condição
	{
		cout << "a maior " << a << endl;
	}
	if (a<b)
	{
		cout << "b maior " << b << endl;
	}
	if (a==b)
	{
		cout << "numeros iguais " << a << " " << b << endl;
	}
	soma = a + b;            // faz a soma de a e b
	cout << "a soma e: " << soma << endl;

	system("Pause");         // pausa o systema 
	return 0;
}