#pragma once

#include <string>
using std::string;

class Escola
{
public:
	Escola(string);
	void setEscolaName(string);
	string getEscolaName();
	void showMessage();
	void notaEscola();
private:
	string EscolaName;
};