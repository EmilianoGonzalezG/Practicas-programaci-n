#include <windows.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(0));
    int filas,columnas;
    cout<<"Ingrese el número de filas: ";
    cin>>filas;
    cout<<"Ingrese el número de columnas: ";
    cin>>columnas;
    int matriz[10][10];
    int sf[10]={0};
    int sc[10]={0};
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
        {
            matriz[i][j]=rand()%10;
            sf[i]+=matriz[i][j];
            sc[j]+=matriz[i][j];
        }
    }
    cout << "\nMatriz impresa\n";
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
        {
            cout<<matriz[i][j] <<"\t";
        }
        cout<<" "<<sf[i];
        cout<<endl;
    }
    for(int j=0;j<columnas;j++)
    {
        cout<<"\t";
    }
    cout<<endl;
    for(int j=0;j<columnas;j++)
    {
        cout<<sc[j] <<"\t";
    }
    cout<<endl;
    return 0;
}