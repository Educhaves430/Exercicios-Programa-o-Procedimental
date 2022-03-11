#include<stdio.h>
#include<stdlib.h>

int exe28(int max)
{
	int i = 0, soma = 0;
	
	for(i=0; i<max; i++)
	{
		soma += i;
	}
	return soma;
}

void main(void)
{
	int soma=0, max=200;
	
	printf("Numero de elementos 'inteiros positivos' a somar: ");
	scanf("%d", &max);
	soma = exe28(max);
	
	printf("\nSoma de %d numeros = %d\n\n", max, soma);
	
	system("pause");
}
