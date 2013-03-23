/*
ITS240-01
Lab 10
Ch11p552PE6
11/08/2012
Kalen Dubrick
*/

#include <stdio.h>
#define NUM_ELS 10

int main()
{
	float miles[NUM_ELS] = {240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3};
	float gallons[NUM_ELS] = {10.3, 15.6, 9.7, 14, 16.3, 15.7, 14.9, 10.7, 9.3, 9.4};
	float mpg[NUM_ELS];
	float *milesPtr = miles;
	float *gallonsPtr = gallons;
	float *mpgPtr = mpg;
	int i;

	for (i = 0; i < NUM_ELS; i++)
	{
		*mpgPtr++ = *milesPtr++ / *gallonsPtr++;
	}

	printf("\nMPG:\n");
	for (i = 0; i < NUM_ELS; i++)
	{
		printf("%5.2f ", *(mpg + i));
	}
	printf("\n");

	return 0;
}