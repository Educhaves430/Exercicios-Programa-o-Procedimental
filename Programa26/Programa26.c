#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n, *arr1, *arr2;
	
	printf("\nInsira o numero de elementos que pretende utilizar:");
	scanf("%d", &n);
	
	arr1=(int*)malloc(n*sizeof(int));
	arr2=(int*)malloc(n*sizeof(int));
	
	for(i=0; i<n; i++)
	{
		do
		{
			printf("\nInsira o %d.o numero inteiro positivo: ", i+1);
			scanf("%d", &arr1[i]);
		}
		while (arr1[i]<=0);
	}
	
	for (i=0; i<n; i++)
	{
		arr2[i] = arr1[i];
	}
	
	for (i=0; i<n; i++)
	{
		if(arr1[0] > arr1[i])
		{
			arr1[0] = arr1[i];
		}
	}
	
	for (i=1; i<n; i++)
	{
		if(arr2[0] < arr2[i])
		{
			arr2[0] = arr2[i];
		}
	}
	
	printf("\nO maior numero e': %d e o menor numero e': %d\n", arr2[0], arr1[0]);
	
	return 0;
}
