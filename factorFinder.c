#include <stdio.h>

int main(void)
{
	printf("Type a number to find the factors: ");
	int input;
	scanf("%d", &input);
	
	for(int i = input/2; i>1; i--) 
	{	
		
		if(input%i ==0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}