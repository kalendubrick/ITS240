/*
ITS240-01
Lab 03
Ch4p186PE2c
09/11/2012
Kalen Dubrick
*/

#include <stdio.h>

int main()
{
	float time, interestRate;

	//get the time on deposit
	printf("\nPlease enter the time left on deposit in years: ");
	scanf("%f", &time);

	//decide what the interest rate is
	if (time >= 5)
	{
		interestRate = 0.045;
	}
	else if (time >= 4)
	{
		interestRate = 0.04;
	}
	else if (time >= 3)
	{
		interestRate = 0.035;
	}
	else if (time >= 2)
	{
		interestRate = 0.03;
	}
	else if (time >= 1)
	{
		interestRate = 0.025;
	}
	else
	{
		interestRate = 0.02;
	}

	//display the interest rate
	printf("\nThe interest rate is %4.3f, or %2.1f percent\n", interestRate, interestRate * 100);

}