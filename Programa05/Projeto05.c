#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float A, base, altura;
	
	printf("\nInsira o valor do comprimento da base do triangulo(cm):  ");
	scanf("%f", &base);
	printf("\nInsira o valor da altura do triangulo (cm): ");
	scanf("%f", &altura);
	A = (base * altura)/2;
	printf("\nArea = %.2f cm^2\n", A);
	
	system("pause");
	exit(0);
}
