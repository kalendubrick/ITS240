/*
ITS240-01
Lab 04
Ch5p247PE6c
09/18/2012
Kalen Dubrick
*/

#include <stdio.h>

int main()
{
	int i;
	float money = 1000.00;

	//print a blank line
	printf("\n");

	//calculate the money year by year
	for (i = 0; i < 10; i++)
	{
		money *= 1.08;
		printf("The amount of money at the end of the year %d is %8.2f\n", i +1, money);
	}

	return 0;
}