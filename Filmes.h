#pragma once
#include <string>
using std::string;

class Filmes
{
public:
	Filmes(string);
	void setNomeFilme(string);
	string getNomeFilme();
	void MostraFilme();
	void ContaFilme();
private:
	string NomeFilme;
};