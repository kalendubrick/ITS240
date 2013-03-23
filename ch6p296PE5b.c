/*
ITS240-01
Lab 05
Ch6p296PE5b
09/04/2012
Kalen Dubrick
*/

#include <stdio.h>

int main()
{
	//function prototypes
	void conversions(int , int , int );

	printf("\n");
	conversions(6, 5, 2);
	printf("\n");
	conversions(5, 4, 3);
	printf("\n");
	conversions(2, 4, 7);
	printf("\n");
	conversions(10, 3, 1);
	
	return 0;
}

void conversions(int startMiles, int numValues, int incNum)
{
	//function prototypes
	float milesToKm(int );

	int i;

	printf("MILES KILOMETERS\n");
	printf("----- ----------\n");

	for (i = startMiles; i < startMiles + (numValues * incNum); i += incNum)
	{
		printf("%4d %10.4f\n", i, milesToKm(i));
	}
}

float milesToKm(int miles)
{
	float km;

	km = miles * 1.6093;

	return km;
}