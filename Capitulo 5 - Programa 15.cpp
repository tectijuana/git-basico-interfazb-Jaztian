// 1-Librerias
#include <iostream>
using namespace std;
// 2- Capitulo 5 - Programa 15
//Programa que calcula el factorial de un numero 
//3- Autor y fecha 
//Jztian  25/03/2022
//4- Funciones y Procedimiento
class Factorial
{
public:
    void Operacion()

    {
        int n, i;
        long double factorial; 
        cout << "Escriba un numero: ";
        cin >> n;
        factorial = 1;
        for (i = 1; i <= n; i++)
            factorial = factorial * i;
        cout << endl << "Factorial de " << n << " -> " << factorial << endl;
        system("pause");
    }
};
//5-Main
int main()
{
    Factorial obj;
    obj.Operacion();

    return 0;
}