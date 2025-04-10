#include <iostream>
#include <windows.h>
#include <time.h>//random
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int precio, x;
    srand(time(0));//inicializa la semilla para el random (numeros aleatorios)
    precio=rand()%1001;//genera un numero aleatorio entre 1 y 100
    do{
        cout<<"Dime el precio (entre 1 y 1000): ";
        cin>>x;
        if(x>precio)
            cout<<"Muy arriba\n";
        else
            if(x<precio)
                cout<<"Muy abajo\n";
            else
                cout<<"Acerstaste, el precio es: "<<precio;
    }while(x!=precio);
    return 0;
}