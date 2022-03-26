//1- Libreria
#include <iostream>
#ifndef MPI
#define MPI 3.1416
#endif
//2- Capitulo 4 - Programa 1
//3- Autor y Fecha
//Jztian  25/03/2022
//4-Funciones y Procedimiento

using namespace std;
//5- Main
int main()
{
    int grados = 0;

    for (grados; grados <= 360; grados++) {
      
        if (grados % 10 == 0) {

            cout << "Grados: " << grados << " a decimales " << (grados * MPI) / 180 << endl;
        }

    }
}