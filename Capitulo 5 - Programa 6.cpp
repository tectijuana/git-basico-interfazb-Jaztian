//1-Librerias
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// 2- Capitulo 5 - Programa 6
//Programa que simule 1000 tiradas de un dado e imprimir la cantidad de cuatros que salieron 
//3- Autor y fecha 
//Jztian  25/03/2022

//4- Funciones y Procedimiento


void mostrar(int b[], int tamano)
{
	for (int i = 0; i < tamano; i++)
	{

		cout << b[i] << endl;
	}
}
//5-Main
int main()
{
	
	const int tamano = 1000;
	int a[tamano];
	int s4 = 0;

	
	srand(time(0));

	for (int s = 0; s < tamano; s++)
	{
		a[s] = 1 + rand() % 6;

		if (a[s] == 4)
		{
			s4 += 1;
		}
	}

	cout << endl;
	cout << "El 4 se repite: " << s4 << " veces." << endl;
	return 0;
}