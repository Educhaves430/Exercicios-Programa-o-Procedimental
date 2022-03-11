#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, idade=0, sexo=0, k1=0, k2=0, k3=0, k4=0, k5=0, k6=0;
	
	for(i=0; i<100; i++)
	{
		printf("\nDigite a idade com que comecou a trabalhar: \nPara menos de 18 anos digite '1', para mais de 18 anos digite '2'...");
		scanf("%d", &idade);
		
		printf("\nDigite o seu sexo: \nPara masculino digite '1', para feminino digite '2'...");
		scanf("%d", &sexo);
		
		if(idade == 1)
		{
			k1++;
			
			if(sexo==1)
			k2++;
			else
			k3++;
		}
		else
		{
			k4++;
			
			if(sexo==1)
			k5++;
			else
			k6++;
		}
	}
	
	printf("\n Pessoas que comecaram a trabalhar com: \n");
	printf("\n Menos de 18 anos: %d\n - Do sexo masculino: %d\n - Do sexo feminino: %d", k1, k2, k3);
	printf("\n Mais de 18 anos: %d\n - Do sexo masculino: %d\n - Do sexo feminino: %d", k4, k5, k6);
	
	return 0;
}
