//1-Libreria
#include <iostream>
#include <stdlib.h>
#include <time.h>
//2- Capitulo 5 - Programa 17
//3- Autor y Fecha
//Jztian  25/03/2022
//4- Funciones y Procedimiento
using namespace std;

//5- Main
int main()
{

	int  a = 1;
	double division, probabilidad, primos = 0, numerostotales = 99;

	for (int i = 2; i <= 100; i++)
	{
		a = a + 1;
		printf("%d\n", a);
		if (a % 2 == 0) {

		}
		else {

			primos++;
		}

	}
	cout << "Total de numeros: " << numerostotales << endl;
	cout << "Total de numeros primos: " << primos << endl;
	probabilidad = primos / numerostotales;
	cout << "La Probabilidad de que un numero entre 2 y 100 sea primo es = " << probabilidad << endl;
}