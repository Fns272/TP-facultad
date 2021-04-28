//1. Ingresar 25 números, calcular su promedio e imprimirlo

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{

	int i=0,contador=0,numeros;
	float promedio;
	for(i=0;i<3;i++)
		{
			printf("Ingrese un numero \n");
			scanf("%d",& numeros);
			if(i==0)
			{
				contador=contador+1;
				numeros=0+numeros;
			}
			
			
	
			}	
	
	promedio=float (numeros/contador);
	printf("El promedio es %0.2f",promedio);
	
	
	
	
	
}
