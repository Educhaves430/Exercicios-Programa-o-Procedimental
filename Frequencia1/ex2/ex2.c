#include<stdio.h>
#include<stdlib.h>
#define N 20
void main(void)
{
	int n, v[N], i=0;
	
	printf("Insira um numero (%d): ", i);
	scanf("%d", &v[0]);
	
	for(i=1; i<N; i++)
	{
		do
		{
			printf("Insira um numero maior (%d): ", i);
			scanf("%d", &n);
		}
		while(n <= v[i-1]);
		v[i] = n;
	}
}
