//CALCULAR LA EDAD
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int anionacimiento=0,anioactual=0,resta=0;
	cout<<"Ingresa tu a�o de nacimiento: ";
	cin>>anionacimiento;
	cout<<"Ingresa el a�o actual: ";
	cin>>anioactual;
	
	resta=anioactual-anionacimiento;
	cout<<"Tu edad es: "<<resta<< endl;
	
	return 0;
}
