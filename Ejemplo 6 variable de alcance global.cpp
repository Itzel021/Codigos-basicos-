//ejemplo de varaiables locales y Globales en C++
#include <iostream>
using namespace std;
int resultado; //variable de alcance global



int suma(int,int);//prototipo de funci�n en C++
void imprimenumeros();//protipo de funci�n en C++
int main() 
{
int numero1,numero2;//variables de alcance local a la funci�n main
cout<<"Escribe el numero1: ";
cin>>numero1;
cout<<"Escribe el numero2: ";
cin>>numero2;
resultado=suma(numero1,numero2);
cout<<"La suma es:"<<resultado<<endl;
imprimenumeros();
return 0;
}



int suma(int num1, int num2) //declaradamos el cuerpo de la funci�n suma
{
int resultado2=0;//variable local de la funci�n suma
resultado2=num1+num2;
return resultado2;
}



void imprimenumeros()//declaramos el cuerpo de la funci�n imprimenumeros
{
//cout <<"El valor de numero1 es:"<<numero1<<endl;
//cout <<"El valor de numero2 es:"<<numero1<<endl;
cout <<"El valor de resultado es:"<<resultado<< endl;
//cout <<"El valor de resultado2 es:"<<resultado2<< endl;
}
