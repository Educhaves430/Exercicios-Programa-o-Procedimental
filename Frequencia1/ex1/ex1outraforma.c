#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	char arr[12][10] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
	do
	{
		printf("Digite um numero inteiro: ");
		scanf("%d", &n);
	}
	while(n<1 || n>12);
	
	printf("O mes %d e %s.\n\n", n, arr[n-1]);
	
	return 0;
}
