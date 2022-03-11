#include<stdio.h>
#include<stdlib.h>

void troca(int *x, int *y)
{
	int temp;
	
	temp=*x;
	*x=*y;
	*y=temp;
}

int main()
{
	int x=12, y=4;
	int *p, *q;
	
	p=&x;
	q=&y;
	
	printf("\n x e' %d: y e' %d", x, y);
	printf("\n\n p e' %d: q e' %d", *p, *q);
	
	troca(&x, &y);
	
	printf("\n\n Agora x e' %d: y e' %d", x, y);
	printf("\n\n Agora p e' %d: q e' %d", *p, *q);
	
	troca(&x, &y);
	
	printf("\n\n Agora x e' %d: y e' %d", x, y);
	printf("\n\n Agora p e' %d: q e' %d", *p, *q);
	
	return 0;
}
