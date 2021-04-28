#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
//9. Ingresar el valor de la hora y el tiempo trabajado por un empleado, calcular su sueldo conociendo que recibe un premio de $ 100 si trabajo más de 50 hs y  si trabajo más de 150 hs le dan otros $ 100  adicionales.imprimir el sueldo

int main()
 {
	int sueldo,vh,tt;
	
	printf("Ingrese valor hora \n");
	scanf("%d",&vh);	
	printf("Ingrese Tiempo trabajado \n");
	scanf("%d",&tt);
	
	if((tt>=50 && tt<150))
		{
			sueldo=(vh*tt)+100;
			printf("El sueldo es %d",sueldo);
		}
	else
		{
			if(tt>=150)
				{
				sueldo=(vh*tt)+150;
				printf("El sueldo es %d \n",sueldo);	
							}	
		else
		{
			if(tt<50)
				{
				sueldo=(vh*tt);
				printf("El sueldo es %d \n",sueldo);					
				}							
			}	
	
	
	system("Pause \n");
	
	}
}
