#include<stdio.h>

#define NOME (120 + 1)
#define ALUNOS 4

struct _Aluno
{
	int numero;
	char nome[NOME];
};

typedef struct _Aluno Aluno;

void ReadAlunos(Aluno * alunos, int n)
{
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("\nAluno %d numero: ", i);
		scanf("%f", &aluno[i].num);
		
		printf("\n Aluno %d nome: ", i);
		
	}
}
















int main()
{
	Aluno alunos[ALUNOS];
	
	ReadAlunos(alunos, Alunos);
	
	ShowPauta(alunos, ALUNOS);
	
	return 0;
}
