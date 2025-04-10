#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x, c=0;
    float sueldo, total;
    char opcion, nombre[10];
    while(c!=0)//La condicion nunca se cumple ¡Cuidado!
    {
        cout<<"Esto nunca se imprime";
        //c=0
    }
    /*while se puede utilizar en situaciones en las que se sabe
    de antemano el numero de vueltas que se habra de ejectuar,
    y debe de constar de inicializacion , condicion y modificacion*/
    x=1;//inicializacion
    while(x<15)//condicion
    {
        cout<<x<<"\n";//imprime una numeracion 1-10
        x++;//variacion
    }
    system("PAUSE");
    //o bien cuando no se sabe cuantas vueltas debe dar
    opcion='s';//inicializacion
    while(opcion=='s' or opcion=='S')
    {
        system("CLS");
        cout<<"Dame tu nombre: "; fflush(stdin); gets(nombre);
        cout<<"Dame tu sueldo: "; cin>>sueldo;
        total+=sueldo;//es lo mismo que total=total+sueldo;
        printf("Deseas captutar otro empleado <<s/n>>? ");
        cin>>opcion;//variacion
    }
    printf("El total de salarios= $%5.2f\n", total);
    cout<<"Despues de la pausa el programa se cicla\n";
    system("PAUSE");
     //cuidado con poner ; despues de while
    x=0;
    while(x<10);// se cicla
    {
        cout<<x<<"\n";
        x++;
    }
    return 0;
	return 0;
}