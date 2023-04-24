/////////////////////////////////////////////////////////
/*
     NANU 24 de abril de 2023
     programa soma inteiros usando o for

*/
/////////////////////////////////////////////////////////
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int total = 0;
    for (int number =2; number <=20;number+=2)
    {
        total += number;
    }
    cout << "a soma e " << total << endl;
    return 0;
}

// como programar em c++ deitel pg 190