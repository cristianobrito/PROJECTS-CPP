// FUNÇÕES MENBROS DA CLASSE Estados.h
#include <iostream>
using namespace std;

#include "Estados.h"

Estados::Estados(string nome)    // inicio do construtor
{
	setNomeDoEstado(nome);       // valida e armazena o nome do estado
	aCount = 0;                  // inicializa a contagem de notas A como 0
	bCount = 0;                  // inicializa a contagem de notas B como 0
	cCount = 0;                  // inicializa a contagem de notas C como 0
	dCount = 0;                  // inicializa a contagem de notas D como 0
	fCount = 0;                  // inicializa a contagem de notas F como 0

} // fim do construtor

void Estados::setNomeDoEstado(string nome)
{
	if (nome.length() <= 10)
	{
		NomeDoEstado = nome;
	}
	else
	{
		NomeDoEstado = nome.substr(0, 10);
		cout << "mais de 10 caracteres " << nome << endl;
	}
}

string Estados::getNomeDoEstado()
{
	return NomeDoEstado;
}

void Estados::ShowEstado()
{
	cout << "Bem vindo ao estado do " << getNomeDoEstado() << endl;
}

void Estados::NotaEstado()
{
	int grade;
	cout << "Digite as letras das grades A B C D F " << endl;

	while ((grade = cin.get()) != EOF )    // ctrl + z (pra fim de arquivo)
	{
		switch (grade)
		{
		case 'A':
		case 'a':
			aCount++;
			break;

		case 'B':
		case 'b':
			bCount++;
			break;

		case 'C':
		case 'c':
			cCount++;
			break;

		case 'D':
		case 'd':
			dCount++;
			break;

		case 'F':
		case 'f':
			fCount++;
			break;

		case '\n':           // ignora nova linha
		case '\t':           // tabulaçoes
		case ' ':            // espaços
			break;

		default:             // captura todos os outros caracteres
			cout << "letra incorreta " << endl;
			break;
		} // FIM DO SWITCH
	} // FIM DO WHILE
} // FIM DA FUNÇAO

void Estados::mostraEstadoNota()
{
	cout << "\nNumero de notas por estado: "
		<< "\nA: " << aCount
		<< "\nB: " << bCount
		<< "\nC: " << cCount
		<< "\nD: " << dCount
		<< "\nF: " << fCount
		<< endl;
}
