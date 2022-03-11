#include<stdio.h>

int main()
{
	int valor = 0, quadrado = valor * valor;
	
	while (quadrado<100)
	{
		printf("%2d^2 = %3d \n", valor, quadrado);
		valor++;
		quadrado = valor * valor;
	}
	return 0;
}
