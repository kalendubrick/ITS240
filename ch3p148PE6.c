/*
ITS240-01
Lab 02
Ch3p144PE1
09/04/2012
Kalen Dubrick
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int years;
	float initialDeposit, money, interestRate;

	//get the initial deposit
	printf("Enter the amount of the inital deposit: ");
	scanf("%f", &initialDeposit);

	//get the number of years
	printf("\nEnter the amount of years invested: ");
	scanf("%d", &years);

	//get the interest rate
	printf("\nEnter the interest rate without percent sign: ");
	scanf("%f", &interestRate);

	//calculate the amount of money
	money = initialDeposit * pow((1.0 + (interestRate / 100)), years);

	//display the amount of money
	printf("\nWith an initial deposit of $%5.2f invested over %d years at a rate of %f percent, the amount of money is $%5.2f\n", initialDeposit, years, interestRate, money);

	return 0;
}