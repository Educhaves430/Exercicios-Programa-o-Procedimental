#include<stdio.h>
#include<stdlib.h>

void exe66(void)
{
	FILE* fp = NULL;
	char aux[999999];
	
	fp = fopen("mensagem2.txt", "r");
	
	if(fp==NULL)
	{
		printf("\nErro de abertura de ficheiro.");
		return;
	}
	
	fscanf(fp,"%[^\n]s", aux);
	fgets(aux, sizeof(aux, fp), fp);
	
	fclose(fp);
	
	printf("\n %s", aux);
}

int main()
{
	exe66();
	
	return 0;
}
