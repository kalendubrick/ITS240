/*
ITS240-01
Lab 07
Ch8p385PE4
10/17/2012
Kalen Dubrick
*/

#include <stdio.h>
#define NUM_ELS 10

int main()
{
	float price[NUM_ELS], amount[NUM_ELS];
	int quantity[NUM_ELS];

	float prices = 0;
	int i, quantities = 0;

	for (i = 0; i < NUM_ELS; i++)
	{
		price[i] = prices;
		quantity[i] = quantities;
		amount[i] = price[i] * quantity[i];

		prices += 10.0;
		quantities++;
	}

	printf("\nQuantity Price Amount\n");
	printf("-------- ----- ------\n");
	for (i = 0; i < NUM_ELS; i++)
	{
		printf("%8d %5.2f %6.2f\n", quantity[i], price[i], amount[i]);
	}

	return 0;
}