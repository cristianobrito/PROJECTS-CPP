///////////////////////////////////////////////////////////
/*
* - Author: cristiano data: 31/03/2023
* - criando classes, objetos e funções menbros  
* - usando cast, variaveis e if condicional
* - limite de linhas 60, comentarios apartir da linha 30
* - identação 2 espaços ou um tab
* - cast é trocar de um tipo para outro (char)int;
* - transforma int em char.
*/
///////////////////////////////////////////////////////////
#include <iostream>          // import da lib

using namespace std;         // - usa tudo de std
using std::cout;             // - usa só o cout

class makeCast               // - cria a classe
{
 public:                     // - tipo de acesso
	 int a;                  // - cria var tipo int
	 char troca;             // - cria var tipo char
	 void trocaTipo()        // - função menbro da classe
	 {
		 cout << "Digite um numero: " << endl;
		 cin >> a;           // - le a var int
		 troca = (char)a;    // - realiza o cast
		 cout << "cast feito = " << troca << endl;
		 cout << "\n";
	 }
};

int main()
{
	makeCast mudaTipo;       // - cria(instancia) um objeto
	mudaTipo.trocaTipo();    // - acessa funçao menbro do obj

	if (mudaTipo.troca == 100)// - if true
	{
		cout << "converteu int em char ascii \n" << endl;
	};

	system("Pause");         // - pausa o sistema
	return 0;                // - retorno pra main
}