#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i=2, soma=0;
	
	for(i=2; i<=40; i=i+2)
	{
		soma = soma + i;
	}
	
	printf("\nA soma dos primeiros 20 numeros pares positivos e': %d ", soma);
	
	return soma;
}
