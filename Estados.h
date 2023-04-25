#pragma once
// DEFINIÇÃO DA CLASSE QUE CONTA AS NOTAS A B C D e F
// AS FUNÇÕES MENBROS SÃO DEFINIDAS NO Estados.cpp
#include <string>                 // ultiliza class string padrao c++
using std::string;                

class Estados                     // class Estados
{
public:
	Estados(string);              // construtor inicializa o nome do estado
	void setNomeDoEstado(string); // configura o nome do estado
	string getNomeDoEstado();     // recupera o nome do estado
	void ShowEstado();            // mostr uma mensagem
	void NotaEstado();            // insere as notas
	void mostraEstadoNota();      // mostra um relatorio de notas
private:
	string NomeDoEstado;          // nome do estado
	int aCount;                   // contagem de notas A
	int bCount;                   // contagem de notas B 
	int cCount;                   // contagem de notas C
	int dCount;                   // contagem de notas D
	int fCount;                   // contagem de notas F

}; // FIM DA CLASSE
