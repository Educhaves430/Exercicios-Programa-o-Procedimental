#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//void gerarPIN (int *VP, int dim)
//{
//	int i,j, pin[4]={0,0,0,0};
//	
//	for(i=0; i<dim; i++)
//	{
//		for(j=0;j<4;i++)
//		pin[j]=rand()%10;
//		
//		VP[i] = pin[0] * 1000 + pin[1] * 100 + pin[2] * 10 + pin[3];
//	}
//}

void main()
{
	int *VP, dim;
	int i;
	
	printf("Quantos PIN quer gerar? ");
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
