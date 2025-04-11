#include <stdio.h>//gets, puts, fflush
//#include <stdlib.h>//system
//#include <iostream>//cout, cin
#include <conio.h>//getch
//using namespace std;//cout, cin
int main()
{
    char cad[80];//declara un arreglo de 80 posiciones de tipo char llamado cad
    char c;//declara una variable de tipo char (solo para un caracter)
    puts("Dame una cadena");//imprime en pantalla la cadena argumento
    gets(cad);//lee una cadena de caracteres y la almacena en cad
    puts("Ejemplo de impresion con puts");
    puts(cad);//imprime en pantalla la cadena almacenada en cad
    return 0;
    //Emiliano Gonzalez Gallegos 24041003
}