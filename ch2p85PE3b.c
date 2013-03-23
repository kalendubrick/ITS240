/*
ITS240-01
Lab 01
Ch2p85PE3b
08/28/2012
Kalen Dubrick
*/

#include <stdio.h>

int main()
{
	// declare (and initialize some) variables
	float length = 5.48, width = 3.5, perimeter;

	// calculate perimeter
	perimeter = 2 * (length + width);

	// display perimeter
	printf("The perimeter of the rectangle is %f inches\n", perimeter);

	return 0;
}