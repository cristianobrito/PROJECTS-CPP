#include <iostream>
using namespace std;

#include "Tenis.h"

int main()
{
	Tenis Tenis1("NIKE");
	Tenis Tenis2("ADIDAS o ultimo futebol");

	cout << "primeira marca "  << Tenis1.getTenisName()
		 << "\nsegunda marca " << Tenis2.getTenisName()
		 << endl;

	Tenis2.setTenisName("ADIDA PUMA");

	cout << "Validando os dados da segunda marca"
   		 << "\nlimite de 10 \n" << Tenis2.getTenisName()
		 << endl;

	Tenis1.ValorTenis();
	system("Pause");
	return 0;
}