//1-Librerias
#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.1416
#endif
using namespace std;
// 2- Capitulo 3 - Programa 2
//Dada una medida angular mayor que 0° pero menor que 180°,clasificar el angulo como obtuso, recto o agudo.
//3- Autor y fecha 
//Jaztian 24/03/2022

//4- Funciones y operaciones

void  desicion(double angulo)
{
    //Desicion cuando un angulo es agudo
    if (angulo < 90 && angulo >= 0) {

        cout << "El angulo es Agudo." << endl;
    }
    //Desicion cunando un angulo es recto
    else if (angulo == 90) {

        cout << "El angulo es Recto." << endl;
    }
    //Desicion cuando un angulo es obutso
    else if (angulo > 90 && angulo < 180) {

        cout << "El angulo es Obtuso." << endl;
    }
    //Desicion por default
    else {
        cout << "Datos ingresados incorrectamente." << endl;
    }
    return;
}
//5-Main
int main()
{
    double angulo;

    cout << "Ingrese un angulo de 0 a 180 grados para poder indentificarlo." << endl;
    cout << "Angulo: ";
    cin >> angulo;

    desicion(angulo);

}
