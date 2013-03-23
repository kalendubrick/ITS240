/*
ITS240-01
Lab 06
Ch7p364PE5
10/09/2012
Kalen Dubrick
*/

#include <stdio.h>

int main()
{
	//function prototypes
	void yrCalc(long , int * , int * , int * );

	long totalDays;
	int year, month, day;

	totalDays = 36365;

	yrCalc(totalDays, &year, &month, &day);

	printf("\nThe total number of days since 1/1/1900 is %d\n", totalDays);
	printf("The year is %d\n", year);
	printf("The month is %d\n", month);
	printf("The day is %d\n", day);

	return 0;
}

void yrCalc(long days, int *yearAddr, int *monthAddr, int *dayAddr)
{
	*yearAddr = 1900 + ((days / 30) / 12);
	*monthAddr = 1 + ((days % ((days / 30) / 12)) / 30);
	*dayAddr = (days % ((days / 30) / 12)) % 30;
}