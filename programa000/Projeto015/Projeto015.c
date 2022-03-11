#include<stdio.h>
#include<stdlib.h>

int maximo(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;	
}

int minimo(int a, int b)
{
	if(a<b)
		return a;
	else
		return b;	
}

int main()
{
	int a, b;
	
	printf("a = ");
	scanf("%d", &a);
	printf("\nb = ");
	scanf("%d", &b);
	
	printf("\nO maiximo de %d e %d e' %d\n", a, b, maximo(a,b));
	printf("\nO minimo de %d e %d e' %d\n", a, b, minimo(a,b));
	
	return 0;
}
