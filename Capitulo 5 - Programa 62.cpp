//1-Libreria
#include <iostream>
#include <string>
//2- Capitulo 5 - Programa 62
//3- Autor y Fecha
//Jztian  25/03/2022
//4-Funciones y Procedimiento
using namespace std;

long long permutaciones(int n, int r)
{
    long long permutaciones = 1;
    for (int i = 1; i <= r; i++)
        permutaciones *= i;
    return permutaciones;
}
//5- Main
int main()
{
    int personas = 15;

    cout << "El numero de permutaciones de " << personas << " personas es: " << permutaciones(personas, personas) << endl;

    return 0;
}