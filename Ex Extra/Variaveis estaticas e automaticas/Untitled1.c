#include<stdio.h>

void teste (void);

int main()
{
	
	teste();
	teste();
	teste();
	
	return 0;
}

void teste (void)
{
	int VariavelLocalAutomatica = 2;
	VariavelLocalAutomatica *= 2;
	
	static int VariavelLocalEstatica = 2;
	VariavelLocalEstatica *= 2;
	
	printf("\nVariavel Automatica: %d", VariavelLocalAutomatica);
	printf("\nVariavel Estatica: %d\n", VariavelLocalEstatica);
}
