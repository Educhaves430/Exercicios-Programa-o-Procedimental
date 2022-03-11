#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1, i;
	int div = 0;
	
	do
	{
		printf("Digite um numero inteiro: ");
		scanf("%d", &num1);
	}
	while (num1 <= 0);
	
	for(i = 1; i <= num1; i++)
	{
		if(num1 % i == 0)
		{
			div++;
		}
	}
	
	if(div == 2)
	{
		printf("\nO numero %d e primo.\n", num1);
	}
	else
	{
		printf("\nO numero %d nao e primo.\n", num1);
	}
	
	return 0;
}

