//Librerias
#include <iostream>
using namespace std;
// 2- Capitulo 3 - Programa 8
//Programa que calcule el area de un rectangulo 
//3- Autor y fecha 
//Jaztian 25/03/2022

//4 Funciones y operaciones
class Rectangulo
{
public:
    void Operacion()

    {
        int base, altura, area;
        cout << "Escriba el valor de la base " << endl;
        cin >> base;
        cout << "Escriba el valor de la altura" << endl;
        cin >> altura;
        area = base * altura;
        cout << "El area es:" << area << endl;
       
    }
};
//5-Main
int main() 
{
    Rectangulo obj;
    obj.Operacion();

    return 0;
}