/////////////////////////////////////////////////
/* - author: cristiano
*  - data: 30/03/2023
*  - programa realiza o cast
*  - cast � mudar o tipo
*  - identa��o 2 espa�os
*  - limite de linhas 60
*  - comentarios a partir da linha 30
*/
/////////////////////////////////////////////////
#include <iostream>

using namespace std;
using std::cout;             // tipo especifico

int main()
{
	int a, i;                // variavel inteira
	char b;                  // variavel char 

	cout << "digite um numero para ser convertido: " << endl;
	cin >> a;                // leitura da variavel

	b = (char)a;             // casting mudan�a de tipo
	if (b == 97)
	{
		for (i=0;i<10;i++)
		{
			cout << b << endl;
		}
	}
	cout << "cast feito = " << b << endl;  // exibe casting
    
	system("Pause");
	return 0;
}