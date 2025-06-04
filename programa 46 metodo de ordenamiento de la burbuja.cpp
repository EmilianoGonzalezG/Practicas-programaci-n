#include<windows.h>
#include<iostream>
#include<time.h>
using namespace std;
int main( )
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int vector[10];//declara un vector de 10 posiciones
    int i,j,n,tempo;
    srand(time(0));//inicializa la semilla para el generador de números aleatorios
    do{
        cout<<"Dime cuantos elementos quieres ordenar? <2-10> ";
        cin>>n;
    }while(n>10 or n<2);
    for(i=0;i<n;i++)//ciclo para llenar el vector
    {
        vector[i]=rand()%10;//asigna un número aleatorio entre 0 y 9
        cout<<"Vector["<<i<<"]="<<vector[i]<<"\n";//imprime el vector
    }
    for(i=0;i<n;i++)//ciclo para ordenar el vector
    {
        for(j=i+1;j<n;j++)
        {
            if(vector[i]>vector[j])//compara los elementos del vector
            {
                tempo=vector[i];//intercambia los elementos si están en el orden incorrecto
                vector[i]=vector[j];
                vector[j]=tempo;
            }
        }
    }
    "\n";
    cout<<"Vector ordenado:\n";
    for(i=0;i<n;i++)//ciclo para imprimir el vector ordenado
        cout<<"Vector["<<i<<"]="<<vector[i]<<"\n";//imprime el vector ordenado
    return 0;
}