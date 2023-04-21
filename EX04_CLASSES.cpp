///////////////////////////////////////////////////////////
/* 
*  Author: cristiano data: 31/03/2023
*  criando classes e funçoes menbros de classes
*  criando(instanciando) objetos e função menbro de objetos
*  limite de linhas 60 e comentarios apartir coluna 30
*  identação 2 espaços 
*/
///////////////////////////////////////////////////////////
#include <iostream>

using namespace std;         // - usando nome padrão
using std::cout;             // - usa nome especifico

class Book                   // - cria a classe
{      
  public:                    // - tipo de acesso a classe                    
      void lerBook()         // - cria função menbro
      {
          cout << "sou uma funcao menbro" << endl;
      }
};

int main()
{
    Book meuBook;            // - cria(instancia) um objeto 
    meuBook.lerBook();       // - cria função menbro do obj

    system("Pause");         // - pausa o sistema 
    return 0;                // - retorna pra main
}