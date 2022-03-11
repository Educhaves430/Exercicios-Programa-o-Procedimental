#include<stdio.h>

void mult_5PIN (int *VP, int dim)
{
	int i;
	
	for(i=0; i<dim; i++)
	{
		if(VP[i]>=200 && VP[i]<=8000)
		{
			if(VP[i]%5==0)
				printf("\n.. x5... VP[%d] = %d\n", i, VP[i]);
		}
	}
}

void main()
{
	int *VP, dim;
	int i;
	
	pritf("Quantos PIN quer gerar?");
	scanf("%d", &dim);
	
	if((VP = (int*)malloc(dim*sizeof(int))) != NULL)
	{
		srand(getpid());
		gerarPIN (VP, dim);
		
		for(i=0; i<dim; i++)
			printf("VP[%d] = %d\n", i, VP[i]);
			
			free(VP);
	}
}
