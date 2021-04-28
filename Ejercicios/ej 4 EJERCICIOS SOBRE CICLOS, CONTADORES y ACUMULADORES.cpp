//4. Ingresar facturas hasta nro de factura = 0, sumar sus importes y cúales y cuantas superan los $1000.imprimir los resultados
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i=1,suma, contador;
	float importe;
	char factura[30];
	char fac[1000];
	
	for(i=0;i<2;i++)
		{
			printf("Ingrese factura \n");
			fflush(stdin);
		    gets(factura);
			printf("Ingrese importe \n");
			scanf("%0.2f",& importe);
			suma=float (suma+importe);
			
			if(importe>1000)
				{
					contador=contador+1;
					strcat(fac,factura);
					strcat(fac,"\n");
				}
		}
	
	printf("El total de facturas es %d \n",suma);
	printf("El total de facturas que superan $1000 es %d \n",contador);
	printf("Las facturas que superan $1000 son %s \n",factura);
	
	
	
}
