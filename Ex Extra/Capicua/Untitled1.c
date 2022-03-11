#include<stdio.h>

int main()
{
	int a=0, b=0;
	
	printf("digite um numero: ");
	scanf("%d", &a);
	
	printf("\n%d", a);
	
	printf("\n\n");
	
	if(a > 0)
	{
		do
		{
			b=a%10;
			printf("%d", b);
			a/=10;
		}while(a%10!=0);
		
		printf("\n");
	}
	else if(a<0)
	{
		a*=-1;
		
		printf("-");
		
		do
		{
			b=a%10;
			printf("%d", b);
			a/=10;
		}while(a%10!=0);
		
		printf("\n");
	}
	else
	{
		printf("%d", a);
		printf("\n");
	}
	
	return 0;
}
