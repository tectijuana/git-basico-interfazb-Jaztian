// 1-Librerias
#include<iostream>
#include<math.h>
// 2- Capitulo 3 - Programa 59
//Programa que calcule el volumen de un cilindro ingresando radio y altura con la formula V = Πr²h
//3- Autor y fecha 
//Jztian  24/03/2022
using namespace std;
//4- Funciones y operaciones
class Dado
{
public:
    void Operacion()

    {
        float radius = 0, height = 0, volume = 0;
        cout << "Volumen de un cilindro: ";
        cout << "radio: ";
        cin >> radius;
        cout << "altura: ";
        cin >> height;
        volume = 3.1416 * (pow(radius, 2)) * height;
        cout << "\nEl volumen del cilindro es: " << volume << endl;
        cin.get();
    }
};
//5-Main
int main() {
    Dado obj;
    obj.Operacion();
    return 0;
}