/*
ITS240-01
Lab 04
Ch5p223PE4c
09/18/2012
Kalen Dubrick
*/

#include <stdio.h>

int main()
{
	int feet = 3;

	//display the heading
	printf("\n FEET     METERS\n");
	printf(" ----     ------\n");

	//calculate and display values
	while (feet <= 30)
	{
		printf(" %4d     %6.2f\n", feet, (float) feet / 3.28);
		feet += 3;
	}

	return 0;
}