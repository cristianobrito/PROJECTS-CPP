///////////////////////////////////////////////////////////
/*

	AUTHOR: NANUS DATA: 03/04/2023
	identação 2 espaços ou um tab limite de linhas 60
	comentarios apartir da coluna 30
	programa que recebe um parametro do tipo string

*/
///////////////////////////////////////////////////////////
#include <iostream>          // - importa a biblioteca
using namespace std;         // - usa o std satandart

#include <string>            // - importa a biblioteca
using std::string;           // - usa nome especifico
using std::getline;          // - usa nome especifico

class Pessoa                 // - cria a class Pessoa
{
public:                      // - tipo de acesso a classe

	void apresentaPessoa(string nome)// - func menbro com parametro
	{
		cout << "bem vindo: " << nome << endl;
	}
};

int main()
{
	string seuNome;          // - cria string
	Pessoa nomePessoa;       // - cria o obj

	cout << "digite o nome da pessoa: " << endl;
	getline(cin, seuNome);   // - le os dados
	cout << endl;

	nomePessoa.apresentaPessoa(seuNome);// - argumento

	system("Pause");
	return 0;
}