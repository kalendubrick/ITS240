/*
ITS240-01
Lab 02
Ch3p144PE1
09/04/2012
Kalen Dubrick
*/

#include <stdio.h>
#define RADIUSMULTIPLIER 2.0
#define PI 3.1416

int main()
{
	float radius, circum;

	printf("\nEnter a radius: ");
	scanf("%f", &radius);
	circum = RADIUSMULTIPLIER * PI * radius;
	printf("\nThe circumference of the circle is %f", circum);

	return 0;
}