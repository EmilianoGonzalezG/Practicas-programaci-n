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
    while(x<11)//condicion
    {
        cout<<x<<"\n";//imprime una numeracion 1-10
        x++;//variacion
    }
    system("PAUSE");
    return 0;
}