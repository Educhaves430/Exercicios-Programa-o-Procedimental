#include<stdio.h>
int main()
{
	int valor, c = 0, soma = 0;
	
	do
	{
		printf("Valor (0 para fim): ");
		scanf("%d", &valor);
		soma += valor;
		c++;
	}
	while (valor != 0);
	{
		printf("Foram introduzidos %d valores com uma soma total de %d.\n", c, soma);
	}
	return 0;
}
