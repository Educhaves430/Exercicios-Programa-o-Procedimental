#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a;
	
	printf("\nDigite um numero inteiro: ");
	scanf("%f", &a);
	
	if (a == 0)
	{
		printf("\nO numero introduzido e zero.\n\n");
	}
	else
	{
		printf("\nO numero %.2f nao e zero.\n\n", a);
	}
	
	system("pause");
	exit(0);
}
