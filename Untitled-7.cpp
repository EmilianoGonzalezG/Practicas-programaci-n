#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero;
    cout<<"Ingresa el número: ";
    cin>>numero;
    if(numero<=1){
        cout<<"El numero " << numero << " no es primo." << endl;
    }else 
    {
        int esPrimo=1;
        for (int i=2;i<=numero/2;i++) {
            if (numero%i==0) {
                esPrimo=0;
                break;
            }
        }
        if (esPrimo==1) {
            cout << "El número " << numero << " es primo." << endl;
        } else {
            cout << "El número " << numero << " no es primo." << endl;
        }
    }
    return 0;
} 