#include <stdio.h>

int main(void)
{
	double b, e;
	scanf("Input a base number: %d", &b);
	printf("\n");
	scanf("Input an exponent: %d", &e);
    printf("%d\n", exponentCalc(b,e));

	
}
double exponentCalc(double b, double e)
{
    double temp;
    for(int i=0;i<e;i++)
    {
        temp = b*b;
    }
    return temp;
}