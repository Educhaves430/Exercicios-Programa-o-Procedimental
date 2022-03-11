#include<stdio.h>

int main()
{
	int i;
	
	for( i = 1 ; i <= 10 ; i++ )
	{
		printf("%2d^2 = %3d \n", i, i*i);
	}
	return 0;
}
