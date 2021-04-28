#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include<iostream>

//10. Ingresar la patente y monto de la multa de 50 autos, indicar e imprimir cuántos montos superan los $ 40 y del total cobrado que porcentaje representa la suma de los que superan los $40

int main()
{

int patente,contador,multa,controlador,suma=0;
float porcentaje;

for(controlador=0;controlador<4;controlador++)
			{

			printf("Ingrese multa\n");
			scanf("%d",& multa);
			
			if(multa>40)
				{
					contador=contador+1;
					suma=suma+multa;
				}
		
		}
		porcentaje=float((suma*100)/multa);
		printf("La cantidad de montos que superan $40 son %d \n",contador);
		printf("El porcentaje de multas mayor a 40 $40 son %0.2f \n",porcentaje);
		
		


}
