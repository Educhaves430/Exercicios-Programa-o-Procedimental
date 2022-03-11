#include <stdio.h> //incluir defenições standard de entrada e saída
#include <stdlib.h> //incluir defenições da biblioteca standard
#include <math.h>

#define _pi 3.141592654

int main(void)
{
	float V, altura, raio;
	//float pi = 3.141592654;
	
	/* solicitar valores ao utilizador */
	printf("\nInsira o valor do raio do cilindro (cm): ");
	scanf("%f", &raio);
	printf("\nInsira o valor da altura do cilindro (cm): ");
	scanf("%f", &altura);
	
	/* Calcular do volume */
	V = altura * pow(raio, 2) * _pi;
	
	/* devolver o resultado ao utilizador no terminal */
	printf("\nVolume = %.2f cm^3\n\n", V);
	
	system("pause"); //ask the system to pause before exiting
	exit(0);
}
