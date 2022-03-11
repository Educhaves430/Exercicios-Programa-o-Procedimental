#include<stdio.h>

struct horario
	{
		int horas;
		int minutos;
		int segundos;
		float teste;
		char letra;
	};

struct horario teste(struct horario x);

int main()
{	
	struct horario agora;
	
	agora.horas = 14;
	agora.minutos = 43;
	agora.segundos = 44;
	
	printf("%d : %d : %d\n", agora.horas, agora.minutos, agora.segundos);
	
	struct horario depois;
	
	depois = teste(agora);
	
	printf("%d : %d : %d\n", depois.horas, depois.minutos, depois.segundos);
	
	return 0;
}

struct horario teste(struct horario x)
{
	
	x.horas = 10;
	x.minutos = 10;
	x.segundos = 10;
	
	return x;
}
