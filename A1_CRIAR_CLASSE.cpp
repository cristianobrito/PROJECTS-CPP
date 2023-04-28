/////////////////////////////////////
/*
   NANUS 28 de abril de 2023
   programa cria uma classe som sua funçaõ menbro
   limite de linhas 50 edentação 1 tab ou 2 espaços
   comentarios apartir da coluna 30
*/
////////////////////////////////////
#include <iostream>
using namespace std;

class Governo                // definição da classe
{
public:                      // tipo de acesso
	void MostraDepartamento()// função menbro
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