#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
 {
			int v1,v2,c;
			
			printf("Ingrese valor 1 \n");
			scanf("%d",&v1);
			printf("Ingrese valor 2 \n");
			scanf("%d",&v2);
			
			if(v1>v2)
				{
					c=v1-v2;
					printf("El valor mayor es restado al valor menor y el resultado es %d\n",c);
				}
		else
			{
				if(v1<v2)
				{
					c=v2-v1;
					printf("El valor mayor es restado al valor menor y el resultado es %d\n",c);
				}
			}
		
		
		
		
			
}
