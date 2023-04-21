#pragma once
#include <string>
using std::string;

class Familia
{
public:
	Familia(string);
	void setFamiliaName(string);
	string getFamiliaName();
	void showMessage();
private:
	string FamiliaName;
};
