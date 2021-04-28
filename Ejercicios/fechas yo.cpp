#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int dd,mm,aa;
printf("Ingrese fecha dd/mm/yyyy: ");
scanf("%d/%d/%d",&dd,&mm,&aa);

if(((dd>=1 && dd<=31) || (mm>=1 && mm<=12) || (aa>=1 && aa<=31)))
{
	printf("La fecha es valida \n");
}
else
{
	printf("la fecha no es valida \n");
}





































}
