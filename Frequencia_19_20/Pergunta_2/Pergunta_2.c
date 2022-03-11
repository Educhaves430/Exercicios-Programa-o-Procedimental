#include<stdio.h>

void par(void)
{
	int a, ant;
	do
	{
		ant=a;
		printf("\nDigite um numero inteiro: ");
		scanf("%d", &a);
		if(a != ant)
		{
			if(a%2==0)
				printf("O numero e' par.\n");
			else
				printf("O numero e' impar.\n");
		}
	}while(a != ant);
	
	printf("\nEnd.");		
}

int main()
{
	par();
	
	return 0;
}
