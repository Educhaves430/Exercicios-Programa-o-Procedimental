#include <stdio.h>
#include <stdlib.h>

int main()
{
	float num1, num2;
	
	printf("Insira dois numeros:  ");
	scanf("%f %f", &num1, &num2);
	
	if (num1<num2)
	{
		printf("\nO menor numero e: %.2f\n", num1);
	}
	else
	{
		printf("\nO menor numero e: %.2f\n", num2);
	}
	
	return 0;
}
