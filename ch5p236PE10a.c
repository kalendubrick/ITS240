/*
ITS240-01
Lab 04
Ch5p236PE10c
09/18/2012
Kalen Dubrick
*/

#include <stdio.h>
#define EXIT -1

int main()
{
	int mileage, prevMileage, mileageDiff = 0;
	float gallons;

	//get the inital value for mileage
	printf("\nPlease enter the current mileage (or -1 to exit): ");
	scanf("%d", &mileage);

	while (mileage != -1)
	{
		//check to see if this is the first iteration
		if (mileageDiff == 0)
		{
			prevMileage = mileage;
			printf("\nMileage: %d   Gallons: Full   MPG: N/A");
			printf("\nPlease enter the current mileage (or -1 to exit): ");
			scanf("%d", &mileage);
			mileageDiff = 1;
			continue;
		}

		//get the gallons
		printf("\nPlease enter the gallons used: ");
		scanf("%f", &gallons);

		//calculate the difference
		mileageDiff = mileage - prevMileage;

		//display the results
		printf("\nMileage: %d   Gallons: %4.1f   MPG: %5.2f", mileage, gallons, mileageDiff / gallons);

		//set to prevMileage to mileage for next iteration
		prevMileage = mileage;

		//get next mileage
		printf("\nPlease enter the current mileage (or -1 to exit): ");
		scanf("%d", &mileage);
	}

	return 0;
}