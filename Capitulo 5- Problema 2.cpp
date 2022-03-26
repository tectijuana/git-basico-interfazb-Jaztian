//1- Librerias
#include <iostream>
#include <stdlib.h>
#include <time.h>
//2- Capitulo 5- Problema 2
//3- Autor y Fecha
//Jztian   25/03/2022
//4- Funciones y Procedimientos
using namespace std;
int resultado();
//5- Main
int main()
{

	int i, caida;
	srand((unsigned)time(NULL));

	for (i = 0; i < 100; i++)
	{
		caida = resultado();
		if (caida == 1) {
			printf("%d", i);
			printf("- Sol\n");
		}
		else {
			printf("%d", i);
			printf("- Aguila\n");
		}
	}

}
int resultado() {
	return(rand() % 2);
}