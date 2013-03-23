/*
ITS240-01
Lab 07
Ch8p390PE3b
10/17/2012
Kalen Dubrick
*/

#include <stdio.h>
#define MAX_ELS 8

float prices[] = {16.24, 18.98, 23.75, 16.29, 19.54, 14.22, 11.13, 15.39};

int main()
{
	int i;

	for (i = 0; i < MAX_ELS; i++)
	{
		printf("%5.2f\n", prices[i]);
	}

	return 0;
}