#include <iostream>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float lado1, lado2, area, perimetro;
    cout<<"Dame la medida del lado 1: ";
    cin>>lado1;
    cout<<"Dame la medida del lado 2: ";
    cin>>lado2;
    area=lado1*lado2;
    perimetro=(lado1*2)+(lado2*2);//lado1+lado1+lado2+lado2;
    //impresion con cout
    cout<<"El area mide: "<<area<<"\n";
    cout<<"El perimetro mide: "<<perimetro<<"\n";
    //impresion con printf
    printf("El area mide: %5.0f\n",area);
    printf("El perimetro mide: %5.2f\n",perimetro);
    return 0;
}