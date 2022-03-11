#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, max=0, k=0;
	
	printf("Digite numeros inteiros positivos aleatoriamente (-1 acaba)...\n\n");
	
	do
	{
		do
		{
			scanf("%d", &n);
		}
		while(n<=-2);
		
		if(n>max)
		max=n;
		
		k++;
	}while(n != -1);
	
	printf("\nForam digitados %d numeros e o maior e' %d.", k, max);
	
	return 0;
}
