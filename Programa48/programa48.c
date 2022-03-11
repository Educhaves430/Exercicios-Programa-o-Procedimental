#include<stdio.h>
#include<stdlib.h>
#define N 10

int main()
{
	int vec[N];
	int i;
	
	printf("\nDigite %d elementos do vetor:\n",N);
	for(i=0; i<N; i++)
	{
		printf("elemento - %d", i);
		scanf("%d",&vec[i]);
	}
	
	printf("\n  Os elementos sao: ");
	for(i=0; i<N; i++)
	{
		printf("%d ", vec[i]);
	}
	printf("\n");
}
