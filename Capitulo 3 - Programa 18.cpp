//Librerias
#include <iostream>

using namespace std;
  
 //2.- Capitulo 3 - Programa 18
 //Introducir las longitudes de los catetos de un
 //triángulo rectángulo y calcular el perimetro.
 
 //3.- Autor y fecha
 //Jztian  25 Marzo 2022
//4- Funciones y procedimiento

int main(){
    float B,A,H,Res;

    cout << "ingresa la base: ";
    cin >> B;

    cout << "ingresa la altura: ";
    cin >> A;

    cout << "ingresa la hipotenusa: ";
    cin >> H;

    Res = (B + A + H);

    cout << "el perimero del triangulo es: " <<Res <<endl;

    return 0;
}