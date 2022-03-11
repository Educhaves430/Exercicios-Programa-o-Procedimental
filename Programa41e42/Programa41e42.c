#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1=0, num2=0;
	
	printf("\nDigite um numero inteiro: ");
	scanf("%d", &num1);
	
	printf("\nDigite outro numero inteiro: ");
	scanf("%d", &num2);
	
	printf("\n mdc(%d,%d) = %d\n", num1, num2, mdc(num1, num2));
	printf("\n mmc(%d,%d) = %d\n", num1, num2, mmc(num1, num2));
	
	return 0;
}

int mdc(int x, int y)
{
	int i, k=1;
	if(y<x)
		trocar(&x, &y);
	
	for(i=2; i<=x; i++)
	{
		if(x%i==0 && y%i==0)
			k=i;
	}
	return k;
}

int trocar(int *x, int *y)
{
	int aux;
	aux=*x;
	*x=*y;
	*y=aux;
}

int mmc(int x, int y)
{
	return (x*y)/mdc(x, y);
}
