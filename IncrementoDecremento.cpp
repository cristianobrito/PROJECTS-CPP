///////////////////////////////////////////////
/*
  NANUS 24 DE ABRIL DE 2023
  INCEMENTO E DECEMENTO
*/
///////////////////////////////////////////////
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int c;
	c = 5;
	cout << c   << endl;  // 5
	cout << c++ << endl;  // 5 primeiro imprime depois incrementa
	cout << c   << endl;  // 6

	cout << endl;

	c = 5;
	cout << c   << endl;  // 5
	cout << ++c << endl;  // 6 incrementa e depois imprime
	cout << c   << endl;  // 6

	return 0;
}