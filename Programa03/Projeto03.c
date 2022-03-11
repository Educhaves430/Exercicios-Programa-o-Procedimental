#include <stdio.h> //incluir defenições standard de entrada e saída
#include <stdlib.h> //incluir defenições da biblioteca standard

int main(void)
{
	int a, b, c;	//defenir variáveis "a" e "b" (e "c") do tipo inteiro
	
	/* Solicitar números ao utilizador */
	printf("\nInsira um nmero: ");
	scanf("%d", &a);	// %d indica o formato
	printf("\nInsira outro numero: ");
	scanf("%d", &b);	// %d indica o formato
	
	printf("\n A soma: %d + %d = %d", a, b, a + b);		//escrever a, b e a+b
	
	c= a + b;
	printf("\n\n%d + %d = %d; dobro: %d", a, b, c, 2*c);
	
	return 0; //devolver o valor 0 ao sistema
}
