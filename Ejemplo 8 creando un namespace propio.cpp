//Creando un namespace propio en C++
#include <iostream>
using namespace std;
namespace operaciones 
{
int suma(int num1, int num2)
{
return num1 + num2;
}
}



int main()
{
cout << "\tEstamos probando un namespace propio\n";
cout << "\tLa suma de 5 + 4 = " << operaciones::suma(5, 4) << endl;
return 0;
}
