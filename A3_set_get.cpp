/////////////////////////////////////
/*
   NANUS 28 de abril de 2023
   programa cria os set e get
   limite de linhas 50 edenta��o 1 tab ou 2 espa�os
   comentarios apartir da coluna 30
*/
////////////////////////////////////
#include <iostream>
using namespace std;

#include <string>
using std::getline;

class Governo                // defini��o da classe
{
public:
	void setNomeDeputado(string nome)// espera receber uma string qualquer
	{
		NomeDeputado = nome;
	}

	string getNomeDeputado()
	{
		return NomeDeputado;
	}
	void MostraDepartamento()
	{
		cout << "Bem vindo ao estado: " << getNomeDeputado()
			<< endl;
	}
private:
	string NomeDeputado;     // string n�o precisa ser igual ao nome do parametro
};

int main()
{
	string NomeDoPolitico;   // n�o precisa ser o mesmo nome
	Governo Politico;        // cria(instancia) o obj Politico

	cout << "digite o nome do deputado ";
	getline(cin, NomeDoPolitico);

	Politico.setNomeDeputado(NomeDoPolitico);
	Politico.MostraDepartamento();
	cout << endl;
	return 0;
}