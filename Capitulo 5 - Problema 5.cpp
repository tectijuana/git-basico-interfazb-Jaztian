//1- Librerias
#include <iostream>
#include <stdlib.h>
#include <time.h>
//2- Capitulo 5 - Problema 5
//3- Autor y Fecha
//Jztian     25/03/2022
//4- Funciones y Procedimiento
using namespace std;
int resultado();
//5- Main
int main()
{

	int i, caida, suma1 = 0, suma2 = 0, suma3 = 0, suma4 = 0, suma5 = 0, suma6 = 0;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 60; i++)
	{
		caida = resultado();
		printf("%d\n", caida);
		if (caida == 1) {
			suma1++;
		}
		if (caida == 2) {
			suma2++;
		}
		if (caida == 3) {
			suma3++;
		}
		if (caida == 4) {
			suma4++;
		}
		if (caida == 5) {
			suma5++;
		}
		if (caida == 6) {
			suma6++;
		}
	}
	cout << "El total de veces que el dado cae con el numero 1 es :" << suma1 << endl;
	cout << "El total de veces que el dado cae con el numero 2 es :" << suma2 << endl;
	cout << "El total de veces que el dado cae con el numero 3 es :" << suma3 << endl;
	cout << "El total de veces que el dado cae con el numero 4 es :" << suma4 << endl;
	cout << "El total de veces que el dado cae con el numero 5 es :" << suma5 << endl;
	cout << "El total de veces que el dado cae con el numero 6 es :" << suma6 << endl;

}
int resultado() {
	return(1 + rand() % 6);
}