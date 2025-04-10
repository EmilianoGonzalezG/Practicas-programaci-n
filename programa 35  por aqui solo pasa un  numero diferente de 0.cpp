#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x,y=1;
    cout<<"Lectura de 5 numeros usando do while\n";
    do{
        cout<<"Dame un numero que no sea 0 (intento #"<<y<<")\n";
        cin>>x;
        if(x==0)
            continue;
        cout<<"Por aqui solo pasa el numero cuando es diferente de 0\n";
        y++;
    }while(y<6);
    system("PAUSE");
    /*en ciclos do while o while con un contador continue afecta
    el numero de vueltas originales, si estan definidas 5 vueltas,
    se ejecutaran 5 vueltas validas, aunque se hayan ejecutado 10
    vueltas no validas, dando un total de 15 repeticiones, en un ciclo
    for estandar esto no ocurre, si son 5 vueltas validas solo se daran 5
    vueltas, sean validas o no*/
    system("cls");
    cout<<"Lectura de 5 numeros usando un for estandar\n";
    for(y=1;y<6;y++)
    {
        cout<<"Dame un numero que no sea 0 (intento #"<<y<<")\n";
        cin>>x;
        if(x==0)
            continue;
        cout<<"Por aqui solo pasa el numero cuando es diferente de 0\n";
        //y++;, para que se comporte como el do o el while
    }
    return 0;
}
