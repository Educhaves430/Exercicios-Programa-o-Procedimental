#include<stdio.h>

struct horario{
	int horas;
	int minutos;
	int segundos;
};

void receberhorario(struct horario list [5]);
void printhorario(struct horario list [5]);

int main()
{
	struct horario listahorario [5];
	
	receberhorario(listahorario);
	printf("\n");
	printhorario(listahorario);
	
	return 0;
}

void receberhorario(struct horario list [5])
{
	int i=0;
	
	for(i=0; i<5; i++)
	{
		printf("\nDigite o %d horario (hh:mm:ss)", i+1);
		scanf("%d:%d:%d", &list [i].horas, &list [i].minutos, &list [i].segundos);
	}
}

void printhorario(struct horario list [5])
{
	int i=0;
	
	for(i=0; i<5; i++)
	{
		printf("\nO %d.o hrario e'-> %d:%d:%d", i+1, list [i].horas, list [i].minutos, list [i].segundos);
	}
}
