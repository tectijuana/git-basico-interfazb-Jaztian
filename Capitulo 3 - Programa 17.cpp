//1-Librerias

#include<stdio.h>

//2.- Capitulo 3 - Programa 17
//Introducir las longitudes de los lados de untriángulo. 
//Determinar si el triángulo es isósceles, equilatero 
//escaleno.

//3- Autor y fecha
//Jztian      25/03/2022
 

// 4.- Funciones y procedimientos

int main(void){
int a, b, c;
printf("\n Ingrese primer valor ");
scanf("%d",&a);
setbuf ( stdin, NULL );
printf("\n Ingrese segundo valor ");
scanf("%d",&b);
setbuf ( stdin, NULL );
printf("\n Ingrese tercer valor ");
scanf("%d",&c);
setbuf ( stdin, NULL );
if(a==b&&a==c)
{
printf("\n El triangulo es equilatero");
}
else if(a==b||a==c||b==c)
{
printf("\n El triangulo es isosceles");
}
else if(a!=b&&a!=b&&b!=c)
{
printf("\n El triangulo es escaleno");
}
setbuf ( stdin, NULL );
getchar();

}
