#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	do
	{
		printf("Digite um numero inteiro: ");
		scanf("%d", &n);
		
		switch (n)
		{
			case 1 :
				printf("\nO mes 1 e Janeiro.\n\n");
				break;
				
			case 2 :
				printf("\nO mes 2 e Fevereiro.\n\n");
				break;
				
			case 3 :
				printf("\nO mes 3 e Março.\n\n");
				break;
				
			case 4 :
				printf("\nO mes 4 e Abril.\n\n");
				break;
				
			case 5 :
				printf("\nO mes 5 e Maio.\n\n");
				break;
				
			case 6 :
				printf("\nO mes 6 e Junho.\n\n");
				break;
				
			case 7 :
				printf("\nO mes 7 e Julho.\n\n");
				break;
				
			case 8 :
				printf("\nO mes 8 e Agosto.\n\n");
				break;
				
			case 9 :
				printf("\nO mes 1 e Setembro.\n\n");
				break;
				
			case 10 :
				printf("\nO mes 10 e Outubro.\n\n");
				break;
				
			case 11 :
				printf("\nO mes 11 e Novembro.\n\n");
				break;
				
			case 12 :
				printf("\nO mes 12 e Dezembro.\n\n");
				break;
		}
	}
	while(n<1 || n>12);
	
	return 0;
}
