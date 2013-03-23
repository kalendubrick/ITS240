/*
ITS240-01
Lab 10
Ch11p546PE2
11/08/2012
Kalen Dubrick
*/

#include <stdio.h>
#define NUM_ELS 7

int main()
{
	float rates[NUM_ELS] = {12.9,19.6,11.4,13.7,9.5,15.2,17.6};
	int i;

	printf("\n");
	for (i = 0; i < NUM_ELS; i++)
	{
		printf("%4.1f ", *(rates + i));
	}
	printf("\n");

	return 0;
}