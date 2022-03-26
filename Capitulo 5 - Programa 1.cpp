
//1-Librerias
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
// 2- Capitulo 5 - Programa 1
//Programa que simule el lanzamiento de una moneda 
//3- Autor y fecha 
//Jztian     25/03/2022

//4- Funciones y Procedimiento
class Moneda
{
public:
    void Operacion()

    {
        int opt = 0, coin = 0;
        do {
            cout << "Lanzar la moneda?: ";
            cout << "\n1. SI" << endl;
            cout << "2. NO" << endl;
            cout << "Opcion: ";
            cin >> opt;
            switch (opt) {
            case 1:
                srand(time(NULL));
                coin = rand() % 2;
                if (coin == 0) {
                    cout << "Cara";
                }
                else {
                    cout << "Cruz";
                }
                break;
            case 2:
                cout << "Gracias";
                break;

                cout << "Escriba una opción válida";
                break;
            }
        } while (opt != 2);
        cin.get();
    }
};
//5-Main
int main() {
    Moneda obj;
    obj.Operacion();
    return 0;
}
