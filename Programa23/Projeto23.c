#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a;
	int i=0;
	
	printf("Insira um numero: ");
	scanf("%f", &a);
	
	while(a<0)
	{
		printf("\nO numero digitado e negativo. Insira um novo numero: ");
		scanf("%f", &a);
	}
	
	if(a>0)
	{
		printf("\nO numero %.2f e positivo!\n", a);
	}
	else
	{
		printf("\nO numero e 0.\n");
	}
	
	return 0;
}
