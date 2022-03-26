//1- Libreria
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
//2- Capitulo 4 - Programa 16
//3- Autor y Fecha
//Jztian  25/03/2022
//4- Funciones y Procedimiento
//5-Main
int main()
{
	double x = 0, resultado, Pi = 3.1416;
	resultado = pow(sin(x * Pi / 180), 2) + pow(cos(x * Pi / 180), 2);
	for (int i = 1; i <= 17; i++) {

		x = x + 5;
		cout << "sen^2(" << x << ") + cos^2(" << x << ") = " << resultado << endl;
	}
	cout << "Todos son resultados son 1."<<endl;
	cout<<"Existe una propiedad trigonometrica que nos dice: "<<endl;
	cout << "sen^2 + cos^2 = 1, el valor que le demos a nuestro parametro el resultado siempre sera 1." << endl;
	system("pause");

}