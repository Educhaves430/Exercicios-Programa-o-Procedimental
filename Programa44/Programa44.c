#include<stdio.h>
#include<stdlib.h>

float maior(float x, float y)
{
	if(x>y)
	return x;
	
	else
	return y;
}

int main()
{
	float num1, num2, num3, num4, num5;
	
	printf("\nDigite o 1.o numero: ");
	scanf("%f", &num1);
	
	printf("\nDigite o 2.o numero: ");
	scanf("%f", &num2);
	
	num4=maior(num1, num2);
	
	printf("\nDigite o 3.o numero: ");
	scanf("%f", &num3);
	
	num5=maior(num3, num4);
	
	printf("\nO maior valor e' %.2f", num5);
}
