#include<stdio.h>

void sort(int vetor[], int n);

int main()
{
	int vetor [10] = {0, 4, 7, 2, 5, 8, 3, 6, 9, 1};
	int i=0;
	
	sort(vetor, 10);
	
	for(i=0; i<10; i++)
		printf("%d ", vetor[i]);
	
	return 0;
}

void sort(int *vetor, int n)
{
	int i=0, j=0, tmp=0;
	
	for(j=0; j<n; j++)
	{
		for(i=j+1; i<n; i++)
		{
			if (vetor[i] < vetor[j])
			{
				tmp=vetor[j];
				vetor[j]=vetor[i];
				vetor[i]=tmp;
			}
		}
	}
}
