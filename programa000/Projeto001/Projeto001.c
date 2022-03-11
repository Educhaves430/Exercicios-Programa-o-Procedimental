#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a;
	
	printf("\nDigite um numero inteiro: ");
	scanf("%f", &a);
	
	if(a == 0)
	{
		printf("\nO numero introduzido e zero.\n\n");
	}
	else
	{
		if(a > 0)
		{
			printf("\nO numero %.2f e positivo\n", a);
		}
		else
		{
			printf("\nO numero %.2f e negativo\n", a);
		}
	}
	return 0;
}
