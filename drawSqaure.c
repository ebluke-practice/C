#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int size, i, j;
	printf("How big do you want the sqaure to be?\n");
	scanf("%d", &size);
	
	for(i =0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
