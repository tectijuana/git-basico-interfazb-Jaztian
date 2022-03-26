//1- Libreria
#include <iostream>
#include <cmath>
//2- Capitulo 4 - Programa 3
//3- Autor y Fecha
//Jztian  25/03/2022
//4- Funciones y Procedimiento
using namespace std;
//5- Main
int main()
{
    double grad=0,rad=0;
    float res;
    system("title Problema 3 cap 4" ) ;

    cout <<"Ingrese los radianes: ";
    cin>>rad;
    
    res= (rad*180)/M_PI;

    cout <<"El valor de " << rad << " , en grados son: " <<res <<endl;

}