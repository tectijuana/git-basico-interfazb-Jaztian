//1-Libreria
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
//2- Capitulo 4 - Programa 8
//3- Autor y Fecha
//Jztian  25/03/2022
//4- Funciones y Procedimiento
//5- Main
int main()
{

	double x = 30, x2 = 45, x3 = 60, x4 = 90, seno, coseno, Pi = 3.1416;
	seno = sin(x * Pi / 180);
	coseno = cos(x * Pi / 180);
    cout << "" << endl;
	cout << "Seno de 30 grado: " << seno << endl;
	cout << "Coseno de 30 grados : " << coseno << endl;
	cout << "" << endl;
	seno = sin(x2 * Pi / 180);
	coseno = cos(x2 * Pi / 180);
    cout << "" << endl;
	cout << "Seno de 45 grados: " << seno << endl;
	cout << "Coseno de 45 grados: " << coseno << endl;
    cout << "" << endl;
	seno = sin(x3 * Pi / 180);
	coseno = cos(x3 * Pi / 180);
    cout << "" << endl;
	cout << "Seno de 60 grados: " << seno << endl;
	cout << "Coseno de 60 grados : " << coseno << endl;
	cout << "" << endl;
	seno = sin(x4 * Pi / 180);
	coseno = cos(x4 * Pi / 180);
	cout << "Seno de 90 grados : " << seno << endl;
	cout << "Coseno de 90 grados : " << coseno << endl;
    cout << "" << endl;