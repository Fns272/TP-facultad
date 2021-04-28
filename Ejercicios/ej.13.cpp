#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
//13. Ingresar las horas trabajadas por un empleado y su categoría, calcular su sueldo sabiendo que los empleados de la categoría 1 cobran $50, la 2 cobra $ 70 y la 3 cobra $ 80.

int main()
 {
	int hs,cat,sueldo,hc2=70,hc1=50,hc3=80;
	system("cls");
	
	printf("Ingrese horas trabajadas \n");
	scanf("%d",&hs);
	printf("Ingrese categoria \n");
	scanf("%d",&cat);
	
	if(cat==1)
		{
			sueldo=hc1*hs;
			printf("el sueldo es %d \n",sueldo);
			}
		else
			{
				if(cat==2)
				{
					sueldo=hc2*hs;
					printf("el sueldo es %d \n",sueldo);
				}
				else
					{
						if(cat==3)
				{
					sueldo=hc3*hs;
					printf("el sueldo es %d \n",sueldo);
				}
					}
				}	
	
	
	
			system("pause");
}
