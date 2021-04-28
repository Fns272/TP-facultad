//2. Ingresar 20 notas y nombres de alumnos, indicar e imprimir los aplazados ( menos de 4) y el  nombre a quien pertenece esa nota

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	
	int notas,aplazados,i=0,contador;
	char nombre[30],alt[30];
	char desaprobados[1000];
	for(i=0;i<3;i++)
	{
		printf("Ingrese la nota del alumno \n");
		scanf("%d",& notas);
		printf("ingrese el nombre del alumno \n");
		fflush(stdin);
		gets(nombre);
		
		if(notas<4)
			{
				contador=contador+1;
				strcat(desaprobados,nombre);
				strcat(desaprobados,"\n");
				
			}
		
		
		}	
	printf("Los alumnos aplazados son: %s",desaprobados);
	
	
}
