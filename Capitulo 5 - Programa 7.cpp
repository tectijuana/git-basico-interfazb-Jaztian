//1- Libreria
#include <iostream>
#include <stdlib.h>
#include <time.h>
//2- Capitulo 5 - Programa 7
//3- Autor y Fecha
//Jztian  25/03/2022
//4- Funciones y Procedimiento
using namespace std;
int resultado();
//5- Main
int main()
{

	int i, caida, suma = 0;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 1000; i++)
	{
		caida = resultado();
		printf("%d\n", caida);
		if (caida == 3) {
			suma++;
		}
	}
	printf("El total de veces que el dado cae con el numero 3 es:");
	printf("%d", suma);
}
int resultado() {
	return(1 + rand() % 6);
}