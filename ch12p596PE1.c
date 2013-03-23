/*
ITS240-01
Lab Chp12-Chp15
Ch12p596PE1
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

/* function prototypes */
int days(DATE );

int main()
{
	int days1, days2, days3;
	DATE testDate1 = {11, 20, 2012};
	DATE testDate2 = {12, 25, 3032};
	DATE testDate3 = {5, 14, 1900};

	days1 = days(testDate1);
	days2 = days(testDate2);
	days3 = days(testDate3);

	printf("\nThe number of days between 1/1/1900 and %d/%d/%d is %d\n", testDate1.month, testDate1.day, testDate1.year, days1);
	printf("The number of days between 1/1/1900 and %d/%d/%d is %d\n", testDate2.month, testDate2.day, testDate2.year, days2);
	printf("The number of days between 1/1/1900 and %d/%d/%d is %d\n", testDate3.month, testDate3.day, testDate3.year, days3);

	return 0;
}

int days(DATE date)
{
	int totalDays;

	if (date.year == 1900)
	{
		totalDays = ((date.month - 1) * 30) + date.day;
	}
	else
	{
		totalDays = (((date.year - 1) - 1900) * 360) + ((date.month - 1) * 30) + date.day;
	}

	return totalDays;
}