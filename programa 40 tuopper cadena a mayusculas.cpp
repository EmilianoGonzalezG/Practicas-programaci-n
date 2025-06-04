#include <windows.h>
#include <iostream>
using namespace std;
int main( )
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char cadena[10];
    int len, i;
    cout<<"Dame una palabra en minúsculas: ";
    gets(cadena);
    len=strlen(cadena);//*strlen obtiene la longitud de la cadena
    for(i=0;i<len;i++)
        cadena[i]=toupper(cadena[i]);//toupper convierte a mayúscula
    cout<<"Impresion de la cadena en mayúsculas: "<<cadena<<"\n";
    cout<<"Impresion elemento por elemento:\n";
    for(int i=0;i<len;i++)
        cout<<"cadena["<<i<<"]="<<cadena[i]<<"\n";
    return 0;
}