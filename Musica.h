#pragma once
#include <string>
using std::string;

class Musica
{
public:
	Musica(string);
	void setNomeDaMusica(string);
	string getNomeDaMusica();
	void MostraMusica();
	void CalculaMusica();
private:
	string NomeDaMusica;
};