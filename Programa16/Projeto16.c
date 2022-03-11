#include <stdio.h>
#include <stdlib.h>

int main()
{
	float num1, num2, num3;
	
	printf("Insira tres numeros: ");
	scanf("%f %f %f", &num1, &num2, &num3);
	
	if (num1>=num2 && num1>=num3)
	{
		printf("\nO maior numero e: %.2f\n", num1);
	}
	else if (num2>=num1 && num2>=num3)
	{
		printf("\nO maior numero e: %.2f\n", num2);
	}
	else
	{
		printf("\nO maior numero e: %.2f\n", num3);
	}
	return 0;
}
