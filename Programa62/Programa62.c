#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=0;
	char sigla[20];
	
	printf("String:");
	scanf("%[A-Za-z ]s", sigla);
	
	strupr(sigla);
	
	printf("sigla: %c", sigla[0]);
	
	for(i=0; i<20; i++)
	{
		if (sigla[i]= ' ')
			printf("%c", sigla[i+1]);
	}
	
	return 0;
}
