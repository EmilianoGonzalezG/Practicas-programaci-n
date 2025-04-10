#include<stdio.h>
#include <iostream>
#include<Windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x=10,y=3;
    int z = 10; // Declara variable int con valor 10
    int *driz =&z; //Declara puntero (int *) y le asigna el contenido de la direccion z
    cout<<x<<"+"<<y<<"="<<x+y<<"\n";//13
    cout<<x<<"-"<<y<<"="<<x-y<<"\n";//7
    cout<<x<<"*"<<y<<"="<<x*y<<"\n";//30
    cout<<x<<"/"<<y<<"="<<x/y<<"\n";//3
    cout<<x<<" residuo% "<<y<<"="<<x%y<<"\n";//1
    cout<<x<<" incrementado="<<++x<<" o bien "<<x+1<<"\n";
    cout<<x--<<" decrementado\n";//x=x-1

    printf("Dame un numero entero para saber si es + o - : ");
    cin>>x;
    x>0?cout<<"positivo ":cout<<" negativo ";
    cout<<"\nDame un numro entero para saber si es +,- o 0: ";
    cin>>x;
    x>0?cout<<" positivo ":x<0?cout<<" negativo ":cout<<"cero ";//doble pregunta para considerar el cero

    x=0;
    cout<<"\nx="<<x<<"\n";
    cout<<"x++ = "<<x++<<"\n";
    cout<<"x="<<x<<"\n";
    cout<<"++x = "<<++x;
    cout<<"\nx="<<x<<"\n";
    cout<<"y="<<y<<". La direccion de y es "<<&y<<"\n";


    //imprimir el valor de y y la direccion almacenada en x
    cout<< "El valor de z: " << z << endl;               // Imprime el valor de y
    cout << "La dirección de z (&z) es: " << &z << endl;         // Imprime la dirección de y
    cout << "La dirección de z almacenada en dirz: " << dirz << endl;
    cout<<"El contenido en *dirz: "<<*dirz<<endl;
    return 0;
}