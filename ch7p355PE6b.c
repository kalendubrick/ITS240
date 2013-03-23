/*
ITS240-01
Lab 06
Ch7p355PE6b
10/09/2012
Kalen Dubrick
*/

#include <stdio.h>

int main()
{
	//function prototype
	void date(int , int * , int *, int * );

	int fullDate, month, day, year;

	fullDate = 20120411;

	date(fullDate, &month, &day, &year);

	printf("\nThe full date is %d\n", fullDate);
	printf("The month is %d\n", month);
	printf("The day is %d\n", day);
	printf("The year is %d\n", year);

	fullDate = 19991225;

	date(fullDate, &month, &day, &year);

	printf("\nThe full date is %d\n", fullDate);
	printf("The month is %d\n", month);
	printf("The day is %d\n", day);
	printf("The year is %d\n", year);
	
	return 0;
}

//takes an integer of the form yyyymmdd and returns the month, day, and year
void date(int fullDate, int *monthAddr, int *dayAddr, int *yearAddr)
{
	*monthAddr = (fullDate / 100) % 100;
	*dayAddr = fullDate % 100;
	*yearAddr = (fullDate % 100000000) / 10000;
}