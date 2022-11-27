//Ejemplo del ASCII
#include <iostream>
using namespace std;
char dato;
int main()
{
for(int i=0; i<130; i++)
{
dato=i;
cout <<i<<"="<< (int) dato <<" "<<dato<<" "<<endl;;
}
return 0;
}
