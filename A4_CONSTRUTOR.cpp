/////////////////////////////////////////////////
/*
   NANUS 28 de abril de 2023
   programa cria os set e get
   limite de lines 50 identação 1 tab ou 2 espaços
   comentarios coluna 30
*/
/////////////////////////////////////////////////
#include <iostream>
using namespace std;

#include <string>
using std::getline;

class Governo         
{
public:                      
	// construtor
	Governo(string nome)
	{
		setNomeDeputado(nome);
	}

	void setNomeDeputado(string nome)
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
	string NomeDeputado;
};

int main()
{
	string NomeDoPolitico;                
	Governo Politico("ADERBAL GABEIRA");  // cria(instancia) o obj Politico

	cout << "NOME DO DEPUTADO: " << Politico.getNomeDeputado()
		<< endl;
	return 0;
}

// DEPOIS DESSE PASSOS A1 ATÉ A4 
// DIVIDIMOS O ARQUIVO DE DUAS MANEIRAS