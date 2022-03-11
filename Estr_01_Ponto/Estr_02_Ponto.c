#include<stdio.h>

struct _Ponto
{
	float x, y;
};

typedef struct _Ponto Ponto;

int pointcmp(Ponto * pontos)
{
	if((pontos[0].x == pontos[1].x) && (pontos[0].y == pontos[0].y))
		return 0;
	else
		return -1;
}

int main()
{
	Ponto p[2];
	
	printf("Ponto a coordenadas (x e y): ");
	scanf("%f %f", &p[0].x, &p[0].y);
	
	printf("Ponto b coordenadas (x e y): ");
	scanf("%f %f", &p[1].x, &p[1].y);
	
	if(pointcmp(p)==0)
		printf("Ponto [%f,f%] e' igual ao ponto [%f,f%].\n", p[0].x, p[1].y, p[0].x, p[1].y);
	else
		printf("Ponto [%f,f%] e' diferente do ponto [%f,f%].\n", p[0].x, p[1].y, p[0].x, p[1].y);
	return 0;
}
