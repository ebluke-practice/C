/* Program made to count words, chars, and spaces, of a string of text*/
#include <stdio.h>

#define OUT 0 /* Outside a word */
#define IN 1 	/* Inside a word */
int main(void)
{
	printf("Enter a short story: ");

	char str1[23];
	scanf("%s", str1);
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	
	while((c = getchar()) != EOF)
	{
		++nc;
		if(c =='\n')
			++nl;
		if(c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
	return 0;
}