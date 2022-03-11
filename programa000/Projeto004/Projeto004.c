#include <stdio.h>

int main()
{
	int valido = 1;
	float valor1, valor2, resultado;
	char operador;
	
	printf("Indique o operador logico que pretende usar: ");
	scanf("%c", &operador);
	fflush(stdin);
	printf("\nInsira o valor 1: ");
	scanf("%f", &valor1);
	
	printf("\nInsira o valor 2: ");
	scanf("%f", &valor2);
	
	switch (operador)
	{
		case '+' :
			resultado = valor1 + valor2;
			printf("\n%f %c %f = %f\n", valor1, operador, valor2, resultado);
			break;
			
		case '-' :
			resultado = valor1 - valor2;
			printf("\n%f %c %f = %f\n", valor1, operador, valor2, resultado);
			break;
			
		case '*' :
			resultado = valor1 * valor2;
			printf("\n%f %c %f = %f\n", valor1, operador, valor2, resultado);
			break;
			
		case ':' :	
		case '/' :
			resultado = valor1 / valor2;
			if (valor2!=0)
			{
				resultado = valor1 / valor2;
				printf("\n%f %c %f = %f\n", valor1, operador, valor2, resultado);
			}
			else
			{
				printf("\nA operacao que pretende realizar nao e possivel.\n");
			}
			break;
		default:
			valido = 0;
	}
	if ( valido == 1)
	{
		printf("\n%f %c %f = %f\n", valor1, operador, valor2, resultado);
	}
	else
	{
		printf("\n\"%c\" e um operador invalido\n", operador);
	}
	
	return 0;
}
