//1- Libreria
#include <iostream>
#include <time.h>

//2-Capitulo 4 - Programa 11
//Se lanzan cinco dados. Cualquiera que muestre un 4 se retira y se vuelven a lanzar los otros. Los cuatro que salgan ahora se retiran y los restantes vuelven a lanzarse. Este proceso se continúa hasta que todos los dados muestren cuatros. En promedio ¿cuántas veces hay que lanzar los dados?
//3-Autor y Fecha 
//Jztian  25/03/2022l
//4- Funciones y Procedimientos

using namespace std;

int tirarDado() { return rand() % 6 + 1; }

int dadosRecursivos(int nDados, int iteracion)
{
    int valores[nDados], newDados = nDados;
    for (int i = 0; i < nDados; i++)
        newDados = tirarDado() == 4 ? newDados - 1 : newDados;
    return newDados > 0 ? dadosRecursivos(newDados, iteracion + 1) : iteracion;
}

float avg(int arr[], int length)
{
    float sum = 0;
    for (int i = 0; i < length; i++)
        sum += arr[i];
    return sum / length;
}
//5- Main
int main()
{
    int tiros = 100000, iteraciones[tiros];
    srand(time(0));
    for (int i = 0; i < tiros; i++)
        iteraciones[i] = dadosRecursivos(5, 0);
    cout << "El promedio de iteraciones (despues de " << tiros << " intentos) es: " << avg(iteraciones, tiros) << endl;
    return 0;
}