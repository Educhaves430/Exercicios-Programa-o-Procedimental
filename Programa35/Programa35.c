#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=0;
	float nota=0, soma=0, media=0;
	
	printf("\nInsira as notas (-1 termina)\n\n");
	do
	{
		if(i+1<61)
		{
			printf("Insira a %d.a nota: ", i+1);
			scanf("%f", &nota);
		
			if(nota != -1 && (nota >=0 && nota <=20));
			{
				i++;
				soma += nota;
			}
		}
		else
			nota=-1;
	}
	while(nota != -1);
	
	media = soma/i;
	
	printf("\nA media %.2f ", media);
	
	printf("\n");
	
	return 0;
}
