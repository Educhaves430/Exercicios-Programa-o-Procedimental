#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	float arr[50];
	
	printf("\n");
	
	for (i=0; i<50; i++)
	{
		printf("Insira o %d.o numero: ", i+1);
		scanf("%f", &arr[i]);
	}
	
	for (i=0; i<50; i++)
	{
		if(arr[0] < arr[i])
		{
			arr[0] = arr[i];
		}
	}
	
	printf("\nO maior numero e': %.2f\n", arr[0]);
	
	return 0;
}
