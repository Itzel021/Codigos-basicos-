//Ejemplo de una suma en C++
#include <iostream>
#include <string>
using namespace std;
int sumaenteros(int n1,int n2);
int main()
{
	int numero1,numero2,sumaenteros;
	cout<<"Escribe el primer numero:";
	cin>>numero1;
	cout<<"Escribe el segundo numero:";
	cin>>numero2;
	sumaenteros=numero1+numero2;
	cout<<"La suma de "<<numero1<<"+"<<numero2<<"="<<sumaenteros;

return 0;	
}
