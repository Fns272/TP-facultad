#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int valor;
	
	printf("Ingrese el valor a controlar \n ");
	
	scanf("%d",&valor);
	
	if(valor>0)
	{
		printf("El valor es positivo \n");
	}
	
	if(valor<0)
	{
		printf("El valor es negativo \n");
	}
	if(valor==0)
	{
		printf("El valor es cero \n");
	}
	system("Pause");
}
