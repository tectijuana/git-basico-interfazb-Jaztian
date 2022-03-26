//1-Libreria
#include <iostream>
#include <time.h>
//2-Capitulo 5 - Programa 55
//3- Autor y Fecha
//Jztian  25/03/2022
//4- Funciones y Procedimiento
using namespace std;

int randomNumber(int min, int max)
{
    return rand() % (max - min + 1) + min;
}
//5- Main
int main()
{
    srand(time(0));
    int edades[] = {
        18, 18, 18, 18, 18, 18,
        19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
        20, 20, 20, 20};

    cout << "El estudiante elegido es de " << edades[randomNumber(0, 19)] << " anios." << endl;

    return 0;
}