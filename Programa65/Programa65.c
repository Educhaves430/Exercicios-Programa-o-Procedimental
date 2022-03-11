#include<stdio.h>
#include<stdlib.h>

void File001(void)
{
	FILE* filePtr = NULL;
	char fileName[30]="dadosde.txt";
	int i=0;
	
	filePtr=fopen(fileName, "w");
	
	if(filePtr == NULL)
	{
		exit(0);
	}
	
	for(i=0; i<10; i++)
	fprintf(filePtr,"Ola Mundo!\n");
	
	fclose(filePtr);
}

int main()
{
	File001();
}
