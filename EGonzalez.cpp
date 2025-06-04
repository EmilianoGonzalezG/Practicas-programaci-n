/// Emiliano Gonzalez Gallegos 24041003
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int l1, l2, l3;
    do
    {
        cout<<"Dame el valor del lado 1: ";
        cin>>l1;
        cout<<"Dame el valor del lado 2: ";
        cin>>l2;
        cout<<"Dame el valor del lado 3: ";
        cin>>l3;
        if(l1<=0 or l2<=0 or l3<=0)
        {
            cout<<"Los lados deben ser mayores que 0\n";
        }
        if (l1+l2>l3&&l1+l3>l2&&l2+l3>l1)
        {
            if (l1==l2 && l2==l3)
            {
                cout<<"El triángulo es equilátero\n";
            }
            else 
            if (l1==l2 or l1==l3 or l2==l3)
            {
                cout<<"El triángulo es isósceles\n";
            }
            else
            {
                cout<<"El triángulo es escaleno,\n";
            }
            break;
        }
        else
        {
            cout<<"Los lados puestos no forman un triángulo válido, intenta de nuevo\n";
        }
    } while (l1<=0 or l2<=0 or l3<=0);
    return 0;
}