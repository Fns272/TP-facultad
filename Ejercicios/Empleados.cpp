#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
//9. Ingresar el valor de la hora y el tiempo trabajado por un empleado, calcular su sueldo conociendo que recibe un premio de $ 100 si trabajo más de 50 hs y  si trabajo más de 150 hs le dan otros $ 100  adicionales.imprimir el sueldo

int main()
 {
	int emp,cat,c1,c2,c3,c4;
	c1=c2=c3=c4=0;
 	system("cls");
 	//Arriba variables
 	printf("Ingrese numero de emp \n");
 	scanf("%d",&emp);
 	
 	while (emp !=0)
 	{
 		printf("Ingrese la categoria \n");
 		scanf("%d",&cat);
 		switch(cat)
 		
 		{
 			case 1: c1=c1+1;
 			break;
 			case 2: c2=c2+1;
 			break;
 			case 3: c3=c3+1;
 			break;
 			case 4: c4=c4+1;
 			break;
 			default: printf("Ingreso un dato incorecto \n");
 			
 			
 		 }
 			printf("Ingrese numero de emp \n");
 			scanf("%d",&emp);
 		
 		
 		
	 }
 	
 
 		printf("El numero de empleados de cat 1 es %d \n",c1);
 		printf("El numero de empleados de cat 2 es %d \n",c2);
 		printf("El numero de empleados de cat 3 es %d \n",c3);
 		printf("El numero de empleados de cat 4 es %d \n",c4);
 		
 		system("Pause");
 
 
 
 
 
 
 
 
 
 
 
 }
