#include<stdio.h>

int main()
{
	char c;
	
	printf("Selecione um caractere: ");
	scanf("%c", &c);
	
	printf("ASCII valor of %c = %d", c, c);
	
	return 0;
}
