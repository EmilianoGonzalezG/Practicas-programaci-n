#include <iostream>
#include <windows.h>
using namespace std;
int main( )
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int nip=123;
    int intento=0;
    cout<<"Teclea tu NIP: ";
    cin>>intento;
    if(intento==nip);
    {
        cout<<"**Correcto**";
        cout<<"Es tu nip";
    }
    {
        cout<<"**Incorrecto**\n";
        if(intento>nip)

        {
            cout<<"Demasiado alto";
        }
        else
        {
            cout<<"Demasiado bajo";
        }
    }
    return 0;
}