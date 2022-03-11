#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int i;
	float arr[20], media=0;
	
	for(i=0; i<20; i++)
	{
		do
		{
			printf("\nIntroduza o %d.o valor: ", i+1);
			scanf("%f", &arr[i]);
		}
		while(arr[i] < 0);
		
		media = media + arr[i];
	}
	
	media = media/20;
	
	if(media > 20)
	{
		media = 20;
	}
	
	printf("\n A media e' %.2f.\n\n", media);
}
