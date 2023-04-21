#pragma once

#include <string>
using std::string;

class Tenis
{
public:
	Tenis(string);
	void setTenisName(string);
	string getTenisName();
	void showMessage();
	void ValorTenis();
private:
	string TenisName;
};