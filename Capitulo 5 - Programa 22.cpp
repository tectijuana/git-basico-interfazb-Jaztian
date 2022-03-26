//1-Librerias
#include <iostream>
#include <math.h>

// 2- Capitulo 5  - Programa 22
// Sacar 2 numero al azar entre 1 y 20, ¿Cual es la probabilidad de que la suma sea 12?
//3- Autor y fecha 
//Jztian  25/03/2022

using namespace std;
//4- Funciones y Procedimiento

int getRandomNumber()
{
	return (rand() % 20);
}

//5-Main
int main()
{

	srand(time(NULL));
	int n1, n2, sum;
	double prob;

	n1 = getRandomNumber();
	n2 = getRandomNumber();

	cout << "Valor 1: " << n1 << endl;
	cout << "Valor 2: " << n2 << endl;
	
	sum = n1 + n2;

	
	cout << "Sum: " << sum << endl;
	prob = ((double)sum / 12) * 100;
	cout << "Prob: " << prob << "%" << endl;

	return 0;
}