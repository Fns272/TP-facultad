#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
//11. Ingresar el sueldo, categoría y antigüedad de un empleado, calcular el sueldo final de cada uno de ellos, si  empleado es de la categoria 1 se le adicionara $50 por cada año de antiguedad.

int main()
 {
	int sueldo,cat,ant,paga;
	
	printf("Ingrese sueldo \n");
	scanf("%d",&sueldo);
	printf("Ingrese categoria \n");
	scanf("%d",&cat);
	printf("Ingrese antiguedad \n");
	scanf("%d",&ant);
	
	if(cat==1)
		{
			paga=sueldo+(ant*50);
			printf("el sueldo es %d \n",paga);
		}
	else
		{
			paga=sueldo;
			printf("el sueldo es %d \n",paga);
		}
	system("pause ");
	
	
	
	}
