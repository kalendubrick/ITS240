/*
ITS240-01
Lab 02
Ch3p114PE1
09/04/2012
Kalen Dubrick
*/

#include <stdio.h>

int main()
{
	float num1 = 32.6, num2 = 55.2, num3 = 67.9, num4 = 48.6, average;

	//calculate the average
	average = (num1 + num2 + num3 + num4) / 4;

	//display the average
	printf("The average of %4.1f, %4.1f, %4.1f, and %4.1f is %f\n", num1, num2, num3, num4, average);

	return 0;
}