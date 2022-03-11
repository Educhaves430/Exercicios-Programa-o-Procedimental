#include<stdio.h>
#include<string.h>

struct dicionario{
	char palavra[20];
	char defenicao[50];
};

int procurarstring(const struct dicionario lingua[], const char procurar[], const int numdepalavras);

int main()
{
	char palavra[20] = {'0'};
	int resultadopesquisa;
	const struct dicionario portugues[7] =
		{{"alface", "legume"},
		{"atum", "peixe"},
		{"banana", "fruto"},
		{"pinheiro", "arvore"},
		{"diamante", "mineral"},
		{"pessoa", "ser humano"},
		{"computador", "objeto tecnologico"}};
	
	printf("\nDigite uma palavra: ");
	scanf("%s", &palavra);
	
	resultadopesquisa = procurarstring(portugues, palavra, 7);
	
	if(resultadopesquisa != -1)
		printf("%s\n", portugues[resultadopesquisa].defenicao);
	else
		printf("Esta palavra nao existe no dicionario.\n");
		
	system("pause");
	
	return 0;
}

int procurarstring(const struct dicionario lingua[], const char procurar[], const int numdepalavras)
{
	int i=0;
	int flag = 1;
	
	while(i<numdepalavras && flag){
		if(strcmp(procurar, lingua[i].palavra) == 0)
			flag = 0;
		if(flag)
			i++;
	}
	return (i==numdepalavras) ? -1 : i;
	
}
