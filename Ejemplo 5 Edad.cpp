//CALCULAR LA EDAD
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int anionacimiento=0,anioactual=0,resta=0;
	cout<<"Ingresa tu año de nacimiento: ";
	cin>>anionacimiento;
	cout<<"Ingresa el año actual: ";
	cin>>anioactual;
	
	resta=anioactual-anionacimiento;
	cout<<"Tu edad es: "<<resta<< endl;
	
	return 0;
}
