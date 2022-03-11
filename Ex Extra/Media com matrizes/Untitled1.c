#include<stdio.h>

int main()
{
	float notas =0, total =0;
	float matriz [4] [4] = {0};
	float media [4];
	int l=0, c=0;
	
	printf("Digite as 4 notas do aluno 1:\n");
	
	for(l=0; l<4; l++)
	{
		for(c=0; c<4; c++)
		{
			scanf("%f", &matriz[l] [c]);
			total+=matriz[l] [c];
		}
		media[l]= total/4;
		if(l!=3)
			printf("\nDigite as notas do aluno %d:\n", l+2);
	}
	
	printf("\n");
	
	for(l=0; l<4; l++)
	{
		for(c=0; c<4; c++)
			printf("%.2f ", matriz[l] [c]);
		printf("\n");
	}
	
	for(l=0; l<4; l++)
	{
		printf("\nA media do aluno %d e: %.2f", l+1, media[l]);
	}
	
	return 0;
}
