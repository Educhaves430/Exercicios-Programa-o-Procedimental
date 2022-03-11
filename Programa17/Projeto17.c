#include<stdio.h>
#include<stdlib.h>

int main()
{
	float l1, l2, l3;
	
	printf("\nInsira tres valores referentes aos lados do triangulo: ");
	scanf("%f %f %f", &l1, &l2, &l3);
	
	if(l1+l2<=l3 || l1+l3<=l2 || l2+l3<=l1)
	{
		printf("\nOs tres valores nao formam um triangulo.\n\n");
	}
	else
	{
		printf("\nOs tres valores formam um triangulo\n\n");
	}
	
	return 0;
}
