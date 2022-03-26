//Librerias
#include <iostream>
#include <ctime>
#include <cstdlib>
// 2- Capitulo 5 - Programa 23
//Programa que simule el lanzamiento de 3 dados y determine la probabilidad de que uno muestre un 3
//3- Autor y fecha 
//Jztian  25/03/2022
//4-  Funciones y Procedimiento
using namespace std;

int main()
{
    
    int d1 = 0;
    int d2 = 0;
    int d3 = 0;
    float proba;
    

    srand(time(0));

  
    d1 = 1 + (rand() % 6);
    d2 = 1 + (rand() % 6);
    d3 = 1 + (rand() % 6);


    if (d1 != 3 && d2 != 3 && d3 != 3)
    {
        cout << "0% probable de salir un 3" << endl;
        cout << endl;
    }
    if (d1 == 3 || d2 == 3 || d3 == 3)
    {
        proba = (100 / 6);
        cout << proba << "% probabilidad de un 3 por cada dado" << endl;
        cout << endl;
    }

  
    cout << "Primer dado:  " << d1 << endl;
    cout << "Segundo dado: " << d2 << endl;
    cout << "Tercer dado:  " << d3 << endl;
    return 0;
}