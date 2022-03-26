
// 1-Librerias

#include <iostream>
#include <cstdlib>
// 2- Capitulo 3 - Programa 37
//Programa que calcule el area de un cuadrado 
//3- Autor y fecha 
//Jztian  25/03/2022



using namespace std;

//4- Funciones y operaciones
class Area
{
public:
    void Operacion()

    {

int lado;
int area;
cout << "Escriba la medida de un lado del cadrado" << endl;

cin >> lado;

area = lado * lado; 

cout << "El area del cuadrado es: " << area << endl;

system("pause");

    }
};
//5-Main
int main() {

    
    Area obj;
    obj.Operacion();
    return 0;
