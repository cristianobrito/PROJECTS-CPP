/////////////////////////////////////
/*
   NANUS 28 de abril de 2023
   programa cria uma classe som sua fun�a� menbro
   limite de linhas 50 edenta��o 1 tab ou 2 espa�os
   comentarios apartir da coluna 30
*/
////////////////////////////////////
#include <iostream>
using namespace std;

class Governo                // defini��o da classe
{
public:                      // tipo de acesso
	void MostraDepartamento()// fun��o menbro
	{
		cout << "Bem vindo ao estado: ";
	}
};

int main()
{
	Governo Politico;        // cria(instancia) o obj Politico
	Politico.MostraDepartamento();
	return 0;
}