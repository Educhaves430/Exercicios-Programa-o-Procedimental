#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float f1, f2, media;
	
	printf("\nDigite a nota da primeira frequencia: ");
	scanf("%f", &f1);
	
	if (f1 >= 8.5)
	{
		printf("\nDigite a nota da segunda frequencia: ");
		scanf("%f", &f2);
		
		media = (f1*0.4) + (f2*0.6);
		
		if (f2 >= 8.5)
		{
			if (media >= 9.5)
			{
				printf("\nEstas aprovado com uma media de: %.2f valores.\n\n", media);
			}
			else
			{
				printf("\nEstas reprovado pois a tua media e inferior a 9.5 valores.\n");
				printf("\nA tua media foi apenas: %.2f valores.\n\n", media);
			}
		}
		else
		{
			printf("\nEstas reprovado, pois a nota na tua segunda frequencia foi abaixo de 8.5 valores.\n\n");
		}
	}
	else
	{
		printf("\nEstas reprovado, pois a nota na tua primeira frequencia foi abaixo de 8.5 valores.\n\n");
	}
	
	system("pause");
	exit(0);
}
