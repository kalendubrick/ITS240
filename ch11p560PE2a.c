/*
ITS240-01
Lab 10
Ch11p560PE2a
11/08/2012
Kalen Dubrick
*/

#include <stdio.h>
#define NUM_ELS 9

int main()
{
	//function prototypes
	void show(float []);

	float rates[NUM_ELS] = {6.5, 7.2, 7.5, 9.3, 9.6, 9.4, 9.6, 9.8, 10.0};

	show(rates);

	return 0;
}

void show(float rates[])
{
	int i;

	printf("\n");
	for (i = 0; i < NUM_ELS; i++)
	{
		printf("%4.1f ", *(rates + i));
	}
	printf("\n");
}