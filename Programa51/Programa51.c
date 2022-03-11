#include<stdio.h>
#include<stdlib.h>

int init(int n, int vec[])
{
	int i=0;
	for(i=0; i<n; i++)
	{											//rand()
		vec[i] = rand()%10;
	}
}

int printVec(int n, int vec[])
{
	int i=0;
	for(i=0; i<n; i++)
	{
		printf("\n v[%d] =%d", i, vec[i]);
	}
}
#define n  10
int main()
{
	int vec[n] = {0};
	
	init(n, vec);
	
	printVec(n, vec);
	
	printf("\n\n");
	system("pause");
	return 0;
}
