#include<stdio.h>
#include<stdlib.h>

int fat(int);

int main()
{
	int n;
	
	do
	{
		printf("\nIntroduza um numero inteiro positivo ou 0: ");
		scanf("%d", &n);
	}
	while(n<0);
	
	printf("\nO fatorial de %d e' %d.", n, fat(n));
	
	return 0;
}

int fat(int n)
{
	if (n>1)
		return (n*fat(n-1));
	else
		return 1;
}
