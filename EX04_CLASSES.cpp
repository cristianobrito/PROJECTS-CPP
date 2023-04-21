///////////////////////////////////////////////////////////
/* 
*  Author: cristiano data: 31/03/2023
*  criando classes e fun�oes menbros de classes
*  criando(instanciando) objetos e fun��o menbro de objetos
*  limite de linhas 60 e comentarios apartir coluna 30
*  identa��o 2 espa�os 
*/
///////////////////////////////////////////////////////////
#include <iostream>

using namespace std;         // - usando nome padr�o
using std::cout;             // - usa nome especifico

class Book                   // - cria a classe
{      
  public:                    // - tipo de acesso a classe                    
      void lerBook()         // - cria fun��o menbro
      {
          cout << "sou uma funcao menbro" << endl;
      }
};

int main()
{
    Book meuBook;            // - cria(instancia) um objeto 
    meuBook.lerBook();       // - cria fun��o menbro do obj

    system("Pause");         // - pausa o sistema 
    return 0;                // - retorna pra main
}