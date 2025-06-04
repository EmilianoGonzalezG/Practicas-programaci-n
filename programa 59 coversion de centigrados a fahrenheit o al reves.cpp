#include <iostream>
using namespace std;
double ctof(double centi);//convierte centigrados a fahrenheit
double ftoc(double fahr);//convierte fahrenheit a centigrados
int main()
{
    double temperatura;
    int opcion;
    cout<<"Ingrese una temperatura: ";
    cin>>temperatura;
    cout<<"Seleccione la opcion deseada:\n";
    cout<<"1. Convertir de Centigrados a Fahrenheit\n";
    cout<<"2. Convertir de Fahrenheit a Centigrados\n";
    cin>>opcion;
    switch(opcion)
    {
        case 1:
            cout<<temperatura<<" grados centigrados son "<<ctof(temperatura)<<" grados fahrenheit.\n";
            break;
        case 2:
            cout<<temperatura<<" grados fahrenheit son "<<ftoc(temperatura)<<" grados centigrados.\n";
            break;
        default:
            cout<<"Opcion invalida.\n";
            break;
    }
    return 0;
}
double ctof(double centi)
{
    return (centi*9/5)+32; // Formula para convertir centigrados a fahrenheit
}
double ftoc(double fahr)
{
    return (fahr-32)*5/9; // Formula para convertir fahrenheit a centigrados
}