#include <windows.h>
#include <iostream>
#include <string>
using namespace std;
int main( )
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x;
    string micadena = "Hola mundo";
    cout<<"La cadena original es: "<< micadena<<endl;
    char letral = micadena[0];// acceder al prime caracter de la cadena
    cout << "La primera letra es: " <<letral << endl;
    micadena[1] = 'e';// modificar el segundo caracter de la cadena
    cout << "La cadena modificada es: " << micadena << endl;
    for (x=0;x<micadena.length();x++)
        cout<<micadena[x]<<"\n";
    return 0;
}