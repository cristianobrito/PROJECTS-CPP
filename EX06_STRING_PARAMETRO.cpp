///////////////////////////////////////////////////////////
/*

	AUTHOR: NANUS DATA: 03/04/2023
	identação 2 espaços ou um tab limite de linhas 60
	comentarios apartir da coluna 30
	programa que recebe um parametro 

*/
///////////////////////////////////////////////////////////
#include <iostream>          // - importa a biblioteca
using namespace std;         // - usa o std satandart

#include <string>            // - importa a biblioteca
using std::string;           // - usa nome especifico
using std::getline;          // - usa nome especifico

class Book                   // - cria a class Book
{
public:                      // - tipo de acesso a classe

	void lerBook(string meuBook)// - func recebe parametro
	{
		cout << "Lendo meu livro " << meuBook << endl;
	}
};

int main()
{
	string meuBookNum1;      // - cria a string 
	Book meuBook;            // - cria o obj

	cout << "Digite o nome do seu livro: " << endl;
	getline(cin, meuBookNum1); // - le a entrada da string

	// - func menbro do objs passando a string de parametro
	meuBook.lerBook(meuBookNum1); 


	system("Pause");
	return 0;
}