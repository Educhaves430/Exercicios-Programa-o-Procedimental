#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char nome[20];
	
	printf("\nDigite o seu nome completo: ");
	scanf("%[^\n]s", nome);

	printf("\nNome Completo Digitado: %s\n\n", nome);
	
	system("pause");
	exit(0);
}
