#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c; // "c" corresponde à conversao pedida
	float e, d; // "e" para euros e "d" para dolares
	
	printf("\nSe pretender converter euros em dolares insira (1). Caso contrario, insira (2): ");
	scanf("%c", &c);
	
	switch (c)
	{
		case '1' :
			printf("\nInsira o valor em euros que pretende converter: ");
			scanf("%f", &e);
			
			d=e*1.05;
			
			printf("\n%.2f euros = %.2f$\n\n", e, d);
			break;
		
		case '2' :
			printf("\nInsira o valor em dolares que pretende converter: ");
			scanf("%f", &d);
			
			e=d/1.05;
			
			printf("\n%.2f$ = %.2f euros\n\n", d, e);
			break;
		
		default:
			printf("\nVoce nao selecionou nenhuma das conversoes apresentadas.\n\n");
	}
	
	system("pause");
	exit(0);
}
	
