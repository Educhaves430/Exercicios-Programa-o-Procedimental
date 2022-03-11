#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float nota;
	
	printf("\nDigite a nota do seu teste: ");
	scanf("%f", &nota);
	
	if(nota >= 9.5 && nota <= 20)
	{
		printf("\nEstas aprovado, parabens!!!\n\n");
	}
	else
	{
		printf("\nEstas reprovado, estuda mais para a proxima!!!\n\n");
		
		if(nota >= 8.5)
		{
			printf("..mas pode ir a ORAL!\n\n");	
		}
		else
		{
			printf("Ate ao proximo ano!\n\n");
		}
	}
	
	system("pause");
	exit(0);
}
