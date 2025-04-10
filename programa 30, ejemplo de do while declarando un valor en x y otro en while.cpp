#include <iostream>
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
    int x, edad; char nom[10];
    //se puede usar p/una cantidad preestablecida de vueltas
    x=5;/*si no se inicializa al menos que se ejecuta una vez*/
    do
    {
        cout<<x<<"\n";
        x++;/*variacion*/
    }while(x<15);/*condicion*/
    system("PAUSE");
    return 0;
}
