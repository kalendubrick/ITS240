/*
ITS240-01
Lab Chp12-Chp15
Ch12p583PE2
11/27/2012
Kalen Dubrick
*/

#include <stdio.h>
#define NUM_STOCKS 5

struct Stock
{
	char name[4];
	float estEarnPerShare;
	float estPriceEarnRatio;
};

typedef struct Stock STOCK;

int main()
{
	STOCK stock;
	int i;

	for (i = 0; i < NUM_STOCKS; i++)
	{
		printf("\nPlease enter the stock name, estimated earnings per share, and estimated price-to-earnings ratio: ");
		scanf("%s %f %f", &stock.name, &stock.estEarnPerShare, &stock.estPriceEarnRatio);
		
		printf("\nThe anticipated price for a share of %s stock is $%5.2f\n", stock.name, stock.estEarnPerShare * stock.estPriceEarnRatio);
	}

	return 0;
}