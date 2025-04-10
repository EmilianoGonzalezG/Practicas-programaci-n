#include <stdio.h>//gets, puts, fflush
//#include<stdlib.h> //system
#include <iostream> //cin, cout
#include <conio.h> //getch
using namespace std;
main( )
{
	char cad[80];
	string cad2;
	char c;
	puts("Dame una cadena (en realidad es un arreglo)");
	gets(cad);
	puts("Ejemplo de impresion con puts");
	puts(cad);
	printf("ejemplo de impresion con printf: ");
	printf(cad);
	printf("\npresiona una tecla y continua automaticamente: ");
	//imprime un salto de linea y la cadena argumento
	getche();
	//putchar(c); //imprime la variable de tipo char c
	puts("\n");
	printf("presiona una tecla y luego enter: ");
	getchar();
	//putchar(c);
	printf("\nPresiona una tecla y continua automaticamente: ");
	fflush(stdin);
	getch();
	putchar(c);
	std::cout << "Dame una cadena ahora con cin: ";
	std::cin>> cad;
	cout<<"\n La segunda cadena no tiene espacios: <<cad";
	cout << "\nDame una cadena con esapcios: ";
	fflush(stdin);
	getline(cin, cad2);
	cout <<"La cadena es " << cad2 << " ya con espacios" << "\n";
	cout<<"Captura de un arreglo char con getline\n";
	//getline(cin, cad); //esto no funciona para un arreglo
	//cout << "El arreglo es " << cad << "\n";
}