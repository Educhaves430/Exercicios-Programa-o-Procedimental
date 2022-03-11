#include<stdio.h>

int main()
{
	float notas[5] = {0};
	float total = 0, media = 0;
	
	printf("\nDigite 5 notas: ");
	
	int i=0;
	
	for(i=0; i<5; i++)
		scanf("%f", &notas[i]);
		
	for(i=0; i<5; i++)
		total+= notas[i];
	
	media=total/5;
	
	printf("A media e: %.2f", media);
	
	return 0;
}
