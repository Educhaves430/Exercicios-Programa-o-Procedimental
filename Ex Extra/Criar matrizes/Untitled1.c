#include<stdio.h>

int main()
{
	int matriz[5] [5] = {0};
	int l=0, c=0;
	
	printf("Digite os numeros que pretende inserir na matriz comçando na posicao (1,1)\n");
	
	for(l=0; l<5; l++)
	{
		for(c=0; c<5; c++)
			scanf("%d", &matriz[l] [c]);
	}
	
	for(l=0; l<5; l++)
	{
		for(c=0; c<5; c++)
			printf("%d ", matriz[l] [c]);
		printf("\n");
	}
	
	return 0;
}
