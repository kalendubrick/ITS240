/*
ITS240-01
Lab 07
Ch8p412PE3
10/17/2012
Kalen Dubrick
*/

#include <stdio.h>
#define NUMROWS 2
#define NUMCOLS 3

int main()
{
	int first[NUMROWS][NUMCOLS] = {{16, 18, 23}, {54, 91, 11}}; 
	int second[NUMROWS][NUMCOLS] = {{24, 52, 77}, {16, 19, 59}};
	int sums[NUMROWS][NUMCOLS];

	int i, j;

	for (i = 0; i < NUMROWS; i++)
	{
		for (j = 0; j < NUMCOLS; j++)
		{
			sums[i][j] = first[i][j] + second[i][j];
		}
	}

	printf("\nFirst Second Sum\n");
	printf("----- ------ ---\n");
	for (i = 0; i < NUMROWS; i++)
	{
		for (j = 0; j < NUMCOLS; j++)
		{
			printf("%5d %6d %3d\n", first[i][j], second[i][j], sums[i][j]);
		}
	}

	return 0;
}