/*
ITS240-01
Lab Chp12-Chp15
Ch12p596PE4
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
DATE larger(DATE , DATE );

int main()
{
	DATE largerDate;
	DATE date1 = {11, 20, 2012};
	DATE date2 = {12, 25, 2012};

	largerDate = larger(date1, date2);

	printf("\nThe larger date is %d/%d/%d\n", largerDate.month, largerDate.day, largerDate.year);

	return 0;
}

DATE larger(DATE date1, DATE date2)
{
	DATE returnDate;

	if (date1.year > date2.year) /* date1 is larger */
	{
		returnDate.day = date1.day;
		returnDate.month = date1.month;
		returnDate.year = date1.year;
	}
	else if (date1.year < date2.year) /* date2 is larger */
	{
		returnDate.day = date2.day;
		returnDate.month = date2.month;
		returnDate.year = date2.year;
	}
	else /* the years are the same */
	{
		if (date1.month > date2.month) /* date1 is larger */
		{
			returnDate.day = date1.day;
			returnDate.month = date1.month;
			returnDate.year = date1.year;
		}
		else if (date1.month < date2.month) /* date2 is larger */
		{
			returnDate.day = date2.day;
			returnDate.month = date2.month;
			returnDate.year = date2.year;
		}
		else /* the months are the same */
		{
			if (date1.day > date2.day || date1.day == date2.day) /* date1 is larger or equal*/
			{
				returnDate.day = date1.day;
				returnDate.month = date1.month;
				returnDate.year = date1.year;
			}
			else /* date2 is larger */
			{
				returnDate.day = date2.day;
				returnDate.month = date2.month;
				returnDate.year = date2.year;
			}
		}
	}

	return (returnDate);
}