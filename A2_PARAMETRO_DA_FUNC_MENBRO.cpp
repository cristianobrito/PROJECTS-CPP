/////////////////////////////////////
/*
   NANUS 28 de abril de 2023
   programa cria um parametro para a func menbro
   limite de linhas 50 edenta��o 1 tab ou 2 espa�os
   comentarios apartir da coluna 30
*/
////////////////////////////////////
#include <iostream>
using namespace std;

class Governo                // defini��o da classe
{
public:                      
	void MostraDepartamento(string nome)
	{
		cout << "Bem vindo ao estado: " << nome;
	}
};

int main()
{
	string NomeDeputado;
	Governo Politico;        // cria(instancia) o obj Politico

	cout << "digite o nome do deputado ";
	cin >> NomeDeputado;
	Politico.MostraDepartamento(NomeDeputado);
	cout << endl;
	return 0;
}