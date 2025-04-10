/*programa que obtiene el mayor o igual de 3 numeros*/
#include <iostream>
#include <stdio.h>
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
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int uno,dos,tres,mayor;
    char nombre[20];
    gotoxy(25,2);
    cout<<"INSTITUTO TECNOLOGICO DE DURANGO";
    gotoxy(28,3);
    cout<<"Fundamentos de programación";
    gotoxy(14,4);
    cout<<"Programa que obtiene el mayor de 3 numeros";
    gotoxy(10,5); cout<<"Dime tu nombre: "; gets(nombre);
    gotoxy(10,6); cout<<"Dime el primer numero: "; cin>>uno;
    gotoxy(10,7); cout<<"Dime el segundo numero: "; cin>>dos;
    gotoxy(10,8); cout<<"Dime el tercer numero: "; cin>>tres;
    if (uno>dos && uno>tres)
    {
        mayor=uno;
    }
    else 
    {
        if(dos>uno && dos>tres)
        {
            mayor=dos;
        }
        else
        {
        	if(tres>uno && tres>dos)
        	{
        		mayor=tres;
            }
            else
			    mayor=-1;//numero arbitriario
        }
    }
    gotoxy(10,10);
    if (mayor==-1)
        cout<<"Los numeros son iguales";
    else
        cout<<nombre<<" el mayor de los tres numeros es: "<<mayor;
    return 0;
}