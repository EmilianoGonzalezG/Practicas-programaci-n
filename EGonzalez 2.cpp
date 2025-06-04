//24041003 Emiliano Gonzalez Gallegos
//24040981 Carlos Ivan Chairez Valenzuela
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char c1[100],c2[100];
    cout<<"Ingresa la primera palabra (max 100 caracteres): ";
    cin.getline(c1,100);
    cout<<"Ingresa la segunda palabra (max 100 caracteres): ";
    cin.getline(c2,100);
    int ig=1;
    for(int i=0;i<100;i++)
    {
        if(c1[i]!=c2[i])
        ig=0;
        if(c1[i]=='\0' or c2[i]=='\0')
        i=100;
    }
    if(ig)
        cout<<"Las palabras son iguales\n";
    else
        cout<<"Las palabras son diferentes\n";
    return 0;
}