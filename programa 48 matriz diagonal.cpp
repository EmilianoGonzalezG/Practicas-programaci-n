#include<windows.h>
#include<iostream>
#include<time.h>
using namespace std;
int main( )
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int matriz[10][10];//declara una matriz de 10x10
    int i,j,n;
    srand(time(0));//inicializa la semilla para el generador de números aleatorios
    do{
        cout<<"Dime cuantos elementos por lado tiene la matriz? <2-10> ";
        cin>>n;
    }while(n>10 or n<2);//valida el tamaño de la matriz
    for(i=0;i<n;i++)//ciclo para renglones
        for(j=0;j<n;j++)//ciclo para columnas
            matriz[i][j]=rand()%100;//asigna un valor aleatorio entre 0 y 99 a cada elemento de la matriz
    cout<<"Impresion de la matriz\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%3d",matriz[i][j]);//imprime la matriz
        cout<<"\n";
    }
    cout<<"Impresion de la diagonal\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)//verifica si el elemento es parte de la diagonal
                printf("%3d",matriz[i][j]);//imprime el elemento de la diagonal
            else
                printf("   ");//imprime espacios en blanco para los elementos que no son parte de la diagonal
        }
        cout<<"\n";
    }
    return 0;
}