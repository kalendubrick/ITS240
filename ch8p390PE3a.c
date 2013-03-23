/*
ITS240-01
Lab 07
Ch8p390PE3a
10/17/2012
Kalen Dubrick
*/

#include <stdio.h>
#define MAX_ELS 8

int main()
{
	float prices[] = {16.24, 18.98, 23.75, 16.29, 19.54, 14.22, 11.13, 15.39};
	int i;

	for (i = 0; i < MAX_ELS; i++)
	{
		printf("%5.2f\n", prices[i]);
	}

	return 0;
}