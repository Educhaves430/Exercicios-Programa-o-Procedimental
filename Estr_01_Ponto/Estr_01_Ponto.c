#include<stdio.h>

struct Ponto
{
	float x, y;
};

int pointcmp(struct Ponto pa, struct Ponto pb)
{
	if((pa.x == pb.x) && (pa.y == pb.y))
		return 0;
	else
		return -1;
}

int main()
{
	struct Ponto pa, pb;
	
	printf("Ponto a coordenadas (x e y): ");
	scanf("%f %f", &pa.x, &pa.y);
	
	printf("Ponto b coordenadas (x e y): ");
	scanf("%f %f", &pb.x, &pb.y);
	
	if(pointcmp(pa, pb)==0)
		printf("Ponto [%f,f%] e' igual ao ponto [%f,f%].\n", pa.x, pa.y, pb.x, pb.y);
	else
		printf("Ponto [%f,f%] e' diferente do ponto [%f,f%].\n", pa.x, pa.y, pb.x, pb.y);
	return 0;
}
