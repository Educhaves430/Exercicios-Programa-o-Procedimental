#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=0;
	float p[12], max=0, min, soma=0, media;
	
	for(i=0; i<12; i++)
	{
		printf("\nIntroduza o valor anual de precipitaçao da %d.a localidade: ", i+1);
		scanf("%f", &p[i]);
	}
	
	min = p[0];
	
	for	(i=0; i<12; i++)
	{
		if(p[i]>max)
		{
			max=p[i];
		}
		if(p[i]<min)
		{
			min=p[i];
		}
		
		soma = soma + p[i];	
	}
	
	media=soma/12;
	
	printf("\nO valor maximo de precipitacao foi %.2f.\nO valor minimo foi %.2f.\nA media e' %.2f.\n\n", max, min, media);
	
	return 0;
}
