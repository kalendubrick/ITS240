/*
ITS240-01
Lab 05
Ch6p285PE6b
09/04/2012
Kalen Dubrick
*/

#include <stdio.h>
#include <math.h>

//function prototypes
void printNumSqCb();

int main()
{
	printNumSqCb();

	return 0;
}

void printNumSqCb()
{
	int i;

	printf("NUMBER SQUARE CUBE\n");
	printf("------ ------ ----\n");

	for (i = 1; i <= 10; i++)
	{
		printf("%3d %7d %6d\n", i, (int) pow(i, 2), (int) pow (i, 3));
	}
}