#pragma once

#include <string.h>
using std::string;

class Futebol
{
public:
	Futebol(string);
	void setTimeName(string);
	string getTimeName();
	void displayMessage();
private:
	string TimeName;
};