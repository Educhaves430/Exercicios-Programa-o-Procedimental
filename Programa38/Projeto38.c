#include<stdio.h>
#include<stdlib.h>

int main()
{
	int soma=0, k=0;
	float n, media;
	
	printf("Digite nu'meros aleato'riamente...\n\n");
	
	do
	{
		do
		{
			scanf("%f", &n);
		}
		while(n<-2);
		
		soma=soma +n;
		k++;
		
	}while( n != -1);
	
	media=soma/k;
	
	printf("\nForam digitados %d numeros, e a me'dia e' %f.2f", k, media);
	
	return 0;
}
