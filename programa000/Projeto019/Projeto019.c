#include<stdio.h>
#include<stdlib.h>

void sort(float dados[], int n);

int main()//pares impares ler show vetor manipular vetor for so pares so impares
{
	int i=0;
	float a[5]={4.5,1.8,-4,5.7,8};
	
	sort(a,5);
	for(i=0; i<5; i++)
	{
		printf("\n v[%d] = %.1f", i, a[i]);
	}
	
	return 0;
}

void sort(float dados[], int n)
{
	int i=0, j=0;
	float tmp=0;
	
	for(j=0; j<n; j++)
	{
		for(i=j+1; i<n; i++)
		{
			if (dados[i] < dados[j])
			{
				tmp=dados[j];
				dados[j]=dados[i];
				dados[i]=tmp;
			}
		}
	}
}
