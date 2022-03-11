#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char nome[20];
	int nhoras, ndependentes;
	float sbruto, INSS, IRS, sliquido;
	
	printf("\nNome do funcionario: ");
	scanf("%[^\n]s", &nome);
	
	printf("\nNumero de horas trabalhadas: ");
	scanf("%d", &nhoras);
	
	printf("\nNumero de dependentes: ");
	scanf("%d", &ndependentes);
	
	sbruto = nhoras*12 + ndependentes*40;
	
	INSS = 0.085*sbruto;
	IRS = 0.05*sbruto;
	
	sliquido = sbruto - (INSS + IRS);
	
	printf("\n\nNome do funcionario: %s\n", nome);
	printf("\nSalario bruto: %.2f euros\n", sbruto);
	printf("\nDescontos:\n");
	printf("INSS: %.2f euros\n", INSS);
	printf("IRS: %.2f euros\n", IRS);
	printf("\nSalario liquido: %.2f\n\n", sliquido);
	
	system("pause");
	exit(0);
}
