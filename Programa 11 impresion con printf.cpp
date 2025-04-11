#include <stdio.h>//gets, puts, fflsush
//#innclude <stdlib.h>//system
//#include <iostream>//cin, cout
#include <conio.h>
//using namespace std;
int main( )
{
    char cad[80];
    char c;
    puts("Dame una cadena");
    gets(cad);
    puts("Ejemplo de impresion con puts");
    puts(cad);
    printf("ejemplo de impresion con printf: ");
    printf(cad);
    printf("\npresiona una tecla y continua automaticamente: ");
    //imprime un salto de linea y la cadena argumento
    c=getche();
    puts("\n");
    putchar(c);
    puts("\n");
    printf("presiona una tecla y luego enter: ");
    c=getchar();
    putchar(c);
    printf("\nPresiona una tecla y continua automaticamente: ");
    fflush(stdin);//limpia el buffer de entrada
    c=getch();//lee un caracter sin esperar el enter
    printf("\n");
    putchar(c);
    return 0;
    //Emiliano Gonzalez Gallegos 24041003
}