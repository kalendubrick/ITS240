/*
ITS240-01
Lab 03
Ch4p198PE4c
09/11/2012
Kalen Dubrick
*/

#include <stdio.h>

int main()
{
	int modelYear, weight, weightClass = 0;
	float fee;

	//get the model year and weight of the car
	printf("\nPlease enter the model year and weight of the car separated by a space: ");
	scanf("%d %d", &modelYear, &weight);

	//find and assign the correct weight class
	if (modelYear <= 1970)
	{
		if (weight < 2700)
		{
			weightClass = 1;
		}
		else if (weight <= 3800)
		{
			weightClass = 2;
		}
		else
		{
			weightClass = 3;
		}
	}
	else if (modelYear < 1979)
	{
		if (weight < 2700)
		{
			weightClass = 4;
		}
		else if (weight <= 3800)
		{
			weightClass = 5;
		}
		else
		{
			weightClass = 6;
		}
	}
	else
	{
		if (weight < 3500)
		{
			weightClass = 7;
		}
		else
		{
			weightClass = 8;
		}
	}

	//find and assign the correct fee for the weight class
	switch (weightClass)
	{
		case 1:
			fee = 16.50;
			break;
		case 2:
			fee = 25.50;
			break;
		case 3:
			fee = 46.50;
			break;
		case 4:
			fee = 27.00;
			break;
		case 5:
			fee = 30.50;
			break;
		case 6:
			fee = 52.50;
			break;
		case 7:
			fee = 35.50;
			break;
		case 8:
			fee = 65.50;
			break;
		default:
			printf("\nError: Weight class not found\n");
	}

	//display the weight class and fee
	printf("\nThe weight class is %d and the registration fee is $%5.2f\n", weightClass, fee);

}
