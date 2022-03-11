#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, b, h;
	float area;
	
	for(i=0; i<50; i++)
	{
		printf("\nDigite a base do %d.o triangulo ", i+1);
		scanf("%d", &b);
		
		printf("\nDigite a altura do %d.o triangulo ", i+1);
		scanf("%d", &h);
		
		area = (b*h)/2;
		
		printf("\nO %d.o triangulo que tem de base %d cm e %d cm de altura, tem %d.2f cm2 de area.", i+1, b, h, area);
		
		printf("\n\n");
	}
	
	return 0;
}
