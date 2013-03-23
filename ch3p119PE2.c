/*
ITS240-01
Lab 02
Ch3p119PE2
09/04/2012
Kalen Dubrick
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int xCoord1 = 7, xCoord2 = 3, yCoord1 = 12, yCoord2 = 9;
	float distance;

	//calculate the distance
	distance = sqrt(pow((xCoord1 - xCoord2), 2) + pow((yCoord1 - yCoord2), 2));

	//display the distance
	printf("The distance between (%d, %d) and (%d, %d) is %f\n", xCoord1, yCoord1, xCoord2, yCoord2, distance);

	return 0;
}