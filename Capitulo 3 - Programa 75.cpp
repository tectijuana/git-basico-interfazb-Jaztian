//1-Librerias
#ifdef __MSDOS__
#include <iostream.h>
#include <stdlib.h>
#else
#include <iostream>
#include <cstdlib>
using namespace std;
#endif
// 2- Capitulo 3 - Programa 75
//Programa que determine el area de un rombo ingresando sus diagonales (Mayor y menor)
//3- Autor y fecha 
//Jztian  25/03/2022

//4- Funciones y operaciones
class Rombo
{
public:
    void Operacion()

    {
        float area, diagonal_mayor, diagonal_menor;
        cout << "Calcula el area de un Rombo\n";
        cout << "\nEscriba el valor de diagonal mayor: ";
        cin >> diagonal_mayor;
        cin.get();
        cout << "Escriba el valor de diagonal menor: ";
        cin >> diagonal_menor;
        cin.get();
        area = diagonal_mayor * diagonal_menor / 2;
        cout << "Area: " << area << endl;
        cout << endl;
        system("pause");
    }
};
//5-Main
int main(void)
{
    Rombo obj;
    obj.Operacion();
    return EXIT_SUCCESS;
}