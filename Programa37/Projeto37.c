#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, *arr, i=0, npar=0, nimpar=0;
	
	do
	{
		printf("\nDigite a quatidade de numeros que pretende comparar: ");
		scanf("%d", &n);
	}while(n<=0);
	
	arr=(int*)malloc(n*sizeof(int));
	
	for(i=0; i<n; i++)
	{
		do
		{
			printf("Digite o %d numero inteiro: ", i+1);
			scanf("%d", &arr[i]);
		}while(arr[i]<=0);
		
		if(arr[i]%2==0)
			npar++;
		else
			nimpar++;
	}
	
	printf("\n Numeros pares = %d\n Numeros impares = %d\n", npar, nimpar);
	
	return 0;
}
