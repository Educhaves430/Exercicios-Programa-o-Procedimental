#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 80

int main()
{
	char in_string[MAX_SIZE];
	char out_string[MAX_SIZE];
	
	int i=0, j=2;
	
	printf("\nString:");
	scanf("%[^\n]s", in_string);
	
	printf("\nString: %s", in_string);
	
	out_string[0]=in_string[0];
	out_string[1]='.';
	
	for(i=0; in_string[i] != '\0'; i++)
	{
		if(in_string[i]==' ' && in_string[i+1] !=' ')
		{
			out_string[j] = in_string[i+1];
			j++;
			out_string[j]='.';
			j++;
		}
	}
	
	printf("\nSigla: %s \n\n", out_string);
	
	return 0;
}
