/*
ITS240-01
Lab Chp12-Chp15
Ch12p583PE1a
11/27/2012
Kalen Dubrick
*/

#include <stdio.h>

struct Date
{
	int month;
	int day;
	int year;
};

typedef struct Date DATE;

int main()
{
	DATE curDate;

	printf("\nPlease enter the month (number):");
	scanf("%d", &curDate.month);
	printf("\nPlease enter the day (number):");
	scanf("%d", &curDate.day);
	printf("\nPlease enter the year:");
	scanf("%d", &curDate.year);

	printf("\nThe current date is %d/%d/%d\n", curDate.month, curDate.day, curDate.year);

	return 0;
}