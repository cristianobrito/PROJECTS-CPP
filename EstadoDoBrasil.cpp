///////////////////////////////////////////////////
/*
  NANUS 25 DE ABRIL DE 2023
  programa fas a contagem de notas por estado
  obs: para finalizar o programa digite
  ctrl + z (isso pe o fim de arquivo no windows)
*/
///////////////////////////////////////////////////
#include "Estados.h"

int main()
{
	Estados Rj("RJ RIO DE JANEIRO");

	Rj.ShowEstado();
	Rj.NotaEstado();
	Rj.mostraEstadoNota();
    
	return 0;
}