#pragma once
#include <string>
using std::string;

class Marines
{
public:
	Marines(string);
	void setPeixeNome(string);
	string getPeixeNome();
	void MostraMensagem();
	void mediaDePeixes();
private:
	string PeixeNome;
};