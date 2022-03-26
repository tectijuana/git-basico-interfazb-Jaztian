//1-Libreria
#include <iostream>
#include <cmath>
//2- Capitulo 4 - Programa 2
//3- Autor y Fecha
//Jztian  25/03/2022
//4- Funciones y Procedimiento
using namespace std;
//5- Main
int main()
{
    double grad=0,rad=0;
    float res;
    system("title Problema 2 cap 4" ) ;
    cout <<"Ingrese los grados: ";
    cin>>grad;
    
    res= (grad*M_PI)/180;

    cout <<"El valor de " << grad << " , en radianes son: " <<res <<endl;

}