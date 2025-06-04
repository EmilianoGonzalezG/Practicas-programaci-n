#include <iostream>//#include<stdio.h>
#include <time.h>//random
using namespace std;
int main( )
{
    int matriz[10][10],diags[2][10];//declara dos matrices
    int i,j,n;
    srand(time(0));//inicializa el generador de numeros aleatorios
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
    cout<<"Obtencion Diagonal Normal\n";
    for(i=0;i<n;i++)
    {
        diags[0][i]=matriz[i][i];//asigna a la diagonal normal
        printf("%3d",diags[0][i]);//imprime la diagonal normal
    }
    cout<<"\nObtencion Diagonal Inversa\n";
    j=0;
    for(i=n-1;i>=0;i--)
    {
        diags[1][j]=matriz[j][i];//asigna a la diagonal inversa
        printf("%3d",diags[1][j]);//imprime la diagonal inversa
        j++;
    }
    return 0;
}