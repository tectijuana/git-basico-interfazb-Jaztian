//1-Librerias
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <string>
// 2- Capitulo 5 - Programa 79
//Encontrar el promedio de 1,000 números tomados al azar
//3- Autor y fecha 
//Jztian  25/03/2022
using namespace std;
//4- Funciones y Procedimiento
int azar(void) {

    int alt;
    alt = 1 + rand();

    return alt;
}

class Prom
{
public:
    void Operacion()

    {
        int suma{}, zar, prom;

        for (int i = 1; i <= 1000; i++) {

            zar = azar();

            suma = suma + zar;
        }
        prom = suma / 1000;

        cout << "Suma : " << suma << " Promedio  : " << prom << endl;
    }
};
//5-Main
int main()
{
    Prom obj;
    obj.Operacion();

    return 0;
}
