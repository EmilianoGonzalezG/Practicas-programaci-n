#include <iostream>
#include <windows.h>
using namespace std;
int main( )
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x=1;
    string clave; //parecido a char clave[100]
    for(x=1;x<4;x++)
    {
        printf("Dame tu password sin espacios en blanco (intento #%d): ",x);
        //getline(cin, clave); //getline lee la cadena de texto y la guarda en clave
        cin>>clave; //cin lee la cadena de texto y la guarda en clave
        if(clave=="soloyolose")
            break; //si la clave es correcta, salimos del bucle
    }
    if(x==4)
        puts("\ausuario no autorizado");
    else
        printf("bienvenido al intento #%d", x);
    return 0;
} 