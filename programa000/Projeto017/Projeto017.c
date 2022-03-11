#include<stdio.h>
#include<stdlib.h>

int maximo(int x, int y)
{
	if(x>y)
		return x;
	else
		return y;	
}

int maior3(int* num1, int* num2, int* num3)
{
	int max;
	
	printf("Insira 3 numeros: ");
	scanf(" %d %d %d", &(*num1), &(*num2), &(*num3));
	
	max = maior2((*num1), (*num2));
	max = maior2(max, (*num3));
	
	return max;
}

int main()
{
	int a, b, c;
	int maior=0;
	maior = maior3(&a, &b, &c);
	printf("\nO maior entre (%d, %d, %d) e' : %d", a, b, c, maior);
}

