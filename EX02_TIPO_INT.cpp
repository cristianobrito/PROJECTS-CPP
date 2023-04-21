/////////////////////////////////////////////////
/* DECLARA E INICIALIZA VARIAVEIS INT
*  author: cristiano
*  data: 30/03/2023
*  identação 2 espaços
*  limite de linhas 50
*  comentarios apartir da coluna 30
*/
/////////////////////////////////////////////////
#include <iostream>

using namespace std;
using std::cout;             // caso especifico

int main()
{
	int a, b, c = 10;        // C esta inicializada
	cout << "digite o valor de a " << endl;
	cin >> a;                // le o valor de a
	cout << "digite o valor de b " << endl;
	cin >> b;                // le o valor de b
	cout << "a = " << a << "\nb = " << b << endl;
	cout << "c = " << c << endl;

	system("Pause");
	return 0;
}