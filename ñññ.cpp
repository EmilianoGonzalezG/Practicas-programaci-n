#include <iostream>
#include <windows.h>
using namespace std;
int main( )
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero=0, suma=1;
    cout<<"El primer numero es: "<<numero<<endl;
    cout<<"El segundo numero es: "<<suma<<endl;
    for(int i=0; i<10; i++){
        suma=numero+suma;
        numero=suma-numero;
        cout<<"La siguiente suma es: "<<suma<<endl;
    }
  	cout<<"Desea continuar?";
  	cin>>si;
  	
    return 0;
}
	
