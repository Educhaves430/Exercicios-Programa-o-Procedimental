#include <stdio.h>
#include <stdlib.h>

int main()
{
	float n1=0, n2=0;
	
	printf("Insira o valor 1: ");
	scanf("%f", &n1);
	printf("\nInsira o valor 2: ");
	scanf("%f", &n2);
	
	if(n1 == n2)
	{
		printf("\nn1 (%f) e = a n2\n", n1);
	}
	else
	{
		if(n1>n2)
		{
			printf("\nn1 (%.2f) e maior\n", n1);
		}
		else
		{
			printf("\nn2 (%.2f) e maior\n", n2);
		}
	}
	return 0;
}
