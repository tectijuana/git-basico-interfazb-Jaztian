
//1-Librerias
#include <iostream>
using namespace std;
// 2- Capitulo 5 - Programa 28
//En una partida de poquer, encontrar la probabilidad de que la mano contenga almenos una pareja suponiendo que no tiene
// ases, dieces o carta de cara 
//3- Autor y fecha 
//Jztian  25/03/2022

//4- Funciones y Procedimiento
class Carta
{
public:
	void Operacion()

	{
		cout << "Eliminar ases, dieces o cartas de cara, quedan 32 cartas:" << endl;
		cout << endl;

		int w;
		int x;
		int y;
		int z;

		w = 100;
		x = 32;

		y = 100 / 32;
		z = y * 2;

		cout << "La probablidad de obtener una pareja es de " << z << "% aproximadamente" << endl;
	}
};
//5-Main
int main()
{
	
	Carta obj;
	obj.Operacion();
	return 0;
}