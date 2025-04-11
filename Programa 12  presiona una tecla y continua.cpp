#include <stdio.h>
//#include <stdlib.h>
#include <iostream>
#include <conio.h>
using namespace std;
main ( )
{
    char cad[80];
    string cad2;
    char c;
    puts("dame una cadena (en realidad es un arreglo)");
    gets(cad);
    puts("Ejemplo de impresion con puts");
    puts(cad); 
    printf("ejemplo de impresion con printf: ");
    printf(cad);
    printf("\npresiona una tecla y continua automaticamente: ");
    getche();
    puts("\n");
    printf("presiona una tecla y luego enter: ");
    getchar();
    printf("\nPrsiona una tecla y continua automaticamente: ");
    fflush(stdin);
    getch();
    putchar(c);
    std::cout << "Dame una cadena con cin: ";
    std::cin >> cad;
    cout<<"\n La segunda cadena no tiene espacios: "<<cad;
    cout << "\nDame una cadena con espacios: ";
    fflush(stdin);
    getline(cin, cad2);
    cout << "La cadena es " << cad2 << "ya con espacios" <<"\n";
    cout<<"Captura de un arreglo char con getline\n";
}