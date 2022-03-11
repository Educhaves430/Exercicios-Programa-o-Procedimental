#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char nome[20];
	float pfabrica, pfinal;
	
	printf("\nDigite o nome do automovel: ");
	scanf("%[^\n]s", nome);
	
	printf("\nInsira o preco de fabrica do automovel: ");
	scanf("%f", &pfabrica);
	
	pfinal = pfabrica + 0.45*pfabrica + 0.28*pfabrica;
	
	printf("\nO nome do automovel e %s, e o seu preco final e %2.f euros.\n\n", nome, pfinal);
	
	system("pause");
	exit(0);
}
