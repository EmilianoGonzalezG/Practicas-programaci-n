#include <iostream>
using namespace std;
//funcion que modifica el arreglo tipo char
void modificarArregloChar(char (&arregloChar)[5]);
//funcion que modifica el arreglo tipo int
void modificarArregloInt(int (&arregloInt)[5]);
int main()
{
    char arregloChar[]="Hola";
    int arregloInt[]={1,2,3,4,5};
    cout<<"Arreglo char original: "<<arregloChar<<'\n';
    cout<<"Arreglo int original: ";
    for(int i=0;i<5;i++)
        cout<<arregloInt[i]<<" ";
    cout<<'\n';
    modificarArregloChar(arregloChar);
    modificarArregloInt(arregloInt);
    cout<<"Arreglo char modificado: "<<arregloChar<<'\n';
    cout<<"Arreglo int modificado: ";
    for(int i=0;i<5;i++)
        cout<<arregloInt[i]<<" ";
    cout<<'\n';
    return 0;
}
void modificarArregloChar(char (&arregloChar)[5])
{
    for(int i=0;i<5;i++)
        arregloChar[i]='X'; // Modifica cada elemento a 'A', 'B', 'C', etc.
}
void modificarArregloInt(int (&arregloInt)[5])
{
    for(int i=0;i<5;i++)
        arregloInt[i]*=2; // Modifica cada elemento a 1, 2, 3, etc.
}