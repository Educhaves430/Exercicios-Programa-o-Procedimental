#include<stdio.h>
#include<stdlib.h>

int add(int);

int main(void)
{
	int soma=0;
	
	soma = add(soma);
	
	printf("\nA soma dos 180 primeiros numeros inteiros positivos e': %d", soma);
	
	printf("\n");
	
	return soma;
}

int add(int soma)
{
	int i;
	
	for(i=1; i<=180; i++)
	{
		soma = soma + i;
	}
	return soma;
}
