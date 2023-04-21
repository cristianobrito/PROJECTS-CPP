#include <iostream>
using namespace std;
#include "FUTEBOL.h"

int main()
{
	Futebol Time1("FLAMENGO");
	Futebol Time2("FLUMINENSE");

	cout << "time 1 "    << Time1.getTimeName()
		 << "\nTime 2 "  << Time2.getTimeName()
		 << endl;

	system("Pause");
	return 0;
}