#include<stdio.h>
#include<stdlib.h>

void q3(int* v, int* n)
{
	int i=0, j=0;
	
	for(i=0; i<(*n); i++)
	{
		if(v[i]<10 || v[i]>20)
		{
			for(j=i; j<(*n); j++)
			{
				v[j]=v[j+1];
			}
			(*n)--;
			i--;
		}
	}
}
void showVetor(int* v, int n)
{
	int i=0;
	for(i=0; i<n; i++)
	{
		printf("\n vetor[%d] = %d", i, v[i]);
	}
}
void main()
{
	int i=0, n=14, v[14] = {2,13,79,5,4,10,4,20,17,6,5,12,10,3};
	
	showVetor(v, n);
	printf("\n");
	q3(v, &n);
	showVetor(v, n);
}
