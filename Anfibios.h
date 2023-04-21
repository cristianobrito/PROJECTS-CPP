#pragma once
#include <string>
using std::string;

class Anfibios
{
public:
	Anfibios(string);
	void setAnfibioName(string);
	string getAnfibioName();
	void showMessage();
	void calculaMedia();
private:
	string AnfibioName;
};