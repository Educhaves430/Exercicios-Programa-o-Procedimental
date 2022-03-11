#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a, b, c;
	
	printf("\nInsira tres valores referentes aos lados do triangulo: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a+b<=c || a+c<=b || b+c<=a)
	{
		printf("\nOs tres valores nao formam um triangulo.\n\n");
	}
	else
	{
		printf("\nOs tres valores formam um triangulo\n\n");
	}
	system("pause");
	exit(0);
}
