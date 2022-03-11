#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 15

int main()
{
	int *a, *b, V[N], c;
	
	for(a=V; a<V+N; a++)
		*a = rand() % 500;
		
	b = a-1;
	
	for(a=V; a<V+N; a++,b--)
		printf("%d\t%d\n", *a, *b);
		
	b = V+N-1;
	for(a=V; a<V+N/2; a++,b--)
	{
		c=*a;
		*a=*b;
		*b=c;
	}
	printf("\n\n#############################################\n\n");
	
	for(a=V; a<V+N; a++,b--)
		printf("%d\n", *a);
		
	return 0;
}
