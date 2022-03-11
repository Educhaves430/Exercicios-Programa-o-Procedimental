#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n;
	float *seq;
	
	do
	{
		printf("\nIntroduza o numero de elementos da sequencia de Fibonacci: ");
		scanf("%d", &n);
	}
	while(n<=0);
	
	seq=(float*)malloc(n*sizeof(float));
	
	seq[0] = 1;
	seq[1] = 1;
	
	if(n==1)
		printf("\n%.0f\n\n", seq[0]);
	
	else if(n==2)
		printf("\n%.0f %.0f\n\n", seq[0], seq[1]);
	
	else
	{
		printf("\n%.0f %.0f", seq[0], seq[1]);
		for (i=2; i<n; i++)
		{
			seq[i] = seq[i-1]+seq[i-2];
			printf(" %.0f", seq[i]);
		}
		printf("\n\n");
	}
	
	return 0;
}
