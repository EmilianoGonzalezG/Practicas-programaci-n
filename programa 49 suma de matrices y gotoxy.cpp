#include <iostream>//programa que suma ectores y matrices
#include<time.h>//random
#include <windows.h>
using namespace std;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
    int m1[10][10],m2[10][10],m3[10][10];//declara 3 matrices de 10x10
    int i,j,n,r,c;//declara variables para ciclos, limite, renglon y columna
    srand(time(0));//inicializa el random
    do{
        cout<<"Cuantos elementos por lado tiene la matriz? <2-10> ";
        cin>>n;//pide el numero de elementos por lado
    } while(n<2 or n>10);//valida que sea entre 2 y 10
    //llenado aleatorio de la matriz 1
    r=2;
    for(i=0;i<n;i++){//ciclo para renglones
        c=1;
        for(j=0;j<n;j++){//ciclo para columnas
            m1[i][j]=rand()%10;
            gotoxy(c,r);//posiciona el cursor
            printf("%2d",m1[i][j]);//imprime el elemento
            m2[i][j]=rand()%10;//llena la segunda matriz con numeros aleatorios
            gotoxy(c+n*4,r);//posiciona el cursor para la segunda matriz
            printf("%2d",m2[i][j]);//imprime el elemento de la segunda matriz
            m3[i][j]=m1[i][j]+m2[i][j];//suma los elementos de las matrices
            gotoxy(c+n*8,r);//posiciona el cursor para la matriz resultante
            printf("%2d",m3[i][j]);//imprime el elemento de la matriz resultante
            c=c+3;
        }
        r++;//incrementa el renglon
    }
    return 0;
}