#include<stdio.h>

void subprogramaB(int N)
{
	int i, j;
	
	for (i=0; i<=N; i+=2)
	{
		for(j=0; j<i; j++)
			printf(" ");
		for(j=i; j<=N; j++)
			printf("*");
		printf("\n");
	}
}

int main()
{
	int N=10;
	
	subprogramaB (N);
	
	return 0;
}
