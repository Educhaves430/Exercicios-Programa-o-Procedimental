#include<stdio.h>
#include<stdlib.h>

void capsON(char* m)
{
	int i=0;
	while(m[i] != '\0')
	{
		if(m[i]>='a' && m[i]<='z')
		{
			m[i]-=32;
		}
		i++;
	}
	printf("\n %s", m);
}

void main(void)
{
	char ss[50] = "aNo letIVo 18/19";
	
	capsON(ss);
	
	printf("\n\n");
	system("pause");
}
