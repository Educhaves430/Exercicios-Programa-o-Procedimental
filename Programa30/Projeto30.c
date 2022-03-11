#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	
	printf("\n Introduza a letra 'a': ");
	scanf("%c", &c);
	
	do
	{
		printf("\n Letra errada. Introduza a letra 'a': ");
		scanf(" %c", &c);
	}
	while (c != 'a');
	
	return 0;
}
