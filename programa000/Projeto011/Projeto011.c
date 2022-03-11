#include<stdio.h>

int main()
{
	char str[1001], ch;
	int i, frequencia = 0;
	
	printf("Texto (ate 1000 letras): ");
	gets(str);
	
	printf("Insira um caractere para determinar a frequencia: ");
	scanf("%c", &ch);
	
	for(i = 0; str[i] != '\0'; ++i)
	{
		if(ch == str[i])
		{
			++frequencia;
		}
	}
	
	printf("Frequencia de %c = %d", ch, frequencia);
	
	return 0;
}
