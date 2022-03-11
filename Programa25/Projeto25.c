#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	float arr[30];
	
	for (i=0; i<30; i++)
	{
		do
		{
			printf("Insira o %d.o numero inteiro positivo: ", i+1);
			scanf("%f", &arr[i]);
		}
		while (arr[i]<= 0);
	}
	
	for (i=0; i<30; i++)
	{
		if(arr[0] > arr[i])
		{
			arr[0] = arr[i];
		}
	}
	
	printf("\nO menor numero e': %.2f\n", arr[0]);
	
	return 0;
}
