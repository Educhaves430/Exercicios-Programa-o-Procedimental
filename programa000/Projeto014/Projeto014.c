#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void main(void)
{
	int num=0, max = INT_MIN;
	int i=0;
	int N=100;
	
	for(i=0; i<N; i++)
	{
		printf("\nInsira um numero (i=%d): ", i);
		scanf("%d", &num);
		
		if(num>max)
		{
			max=num;
		}
	}
	printf("\n\nO maximo absoluto e' %d ao fim de %d interacoes.\n\n", max, i);
	
	system("pause");
}

