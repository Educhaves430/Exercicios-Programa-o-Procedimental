#include<stdio.h>

int main()
{
	int a=0, b=0;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	
	printf("\nDigite o sugundo numero: ");
	scanf("%d", &b);
	
	a < b ? printf("\nsim") : printf("\nnao");
	
	return 0;
}
