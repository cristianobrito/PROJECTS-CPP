#pragma once
#include <string>
using std::string;

class Humano
{
public:
	Humano(string);
	void setNome(string);
	string getNome();
	void MostraNome();
	void CalculaNota();
private:
	string Nome;
};