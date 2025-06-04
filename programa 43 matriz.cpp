//matriz
#include <iostream>//#incclude <stdio.h>
#include <windows.h>
#include<time.h>//random
using namespace std;
int main( )
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	int matriz[5][5];//declara una matriz de 5x5
    int i,j;//variables de control
    srand(time(0));//inicializa el generador de numeros aleatorios
    for(i=0;i<5;i++){//ciclo para renglones
        for(j=0;j<5;j++){//ciclo para columnas
        cout<<"Dame el valor del renglón "<<i<<", columna " <<j<<endl;
        cin>>matriz[i][j];//captura el valor de la matriz
        //matriz[i][j]=rand()%100;//genera un valor aleatorio entre 0 y 99
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            
			//printf("%3d",matriz[i][j]);//imprime la matriz
            cout<<matriz[i][j]<<" ";//imprime la matriz
        cout<<"\n";//salto de renglon
    }
    return 0;
}