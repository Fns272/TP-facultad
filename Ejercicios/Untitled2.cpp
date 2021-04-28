#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main()
{
	int valor, contador=0,suma=0,controlador;
	float  promedio;
	for(controlador=0;controlador<5;controlador++)
		{
		printf("ingrese el valor");
		scanf ("%d",& valor);
		if(valor>100)
			{
				contador=contador+1;
			}
		suma=suma+valor;	
		}
	promedio=suma/controlador;
	printf(" la cantidad de nros > a 100 es %d \n",contador);
	printf("el promedio de los valores es %0.2f \n",promedio);
}
