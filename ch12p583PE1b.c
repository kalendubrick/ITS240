/*
ITS240-01
Lab Chp12-Chp15
Ch12p583PE1b
11/27/2012
Kalen Dubrick
*/

#include <stdio.h>

struct Time
{
	int hours;
	int minutes;
	int seconds;
};

typedef struct Time TIME;

int main()
{
	TIME curTime;

	printf("\nPlease enter the hour: ");
	scanf("%d", &curTime.hours);
	printf("\nPlease enter the minutes: ");
	scanf("%d", &curTime.minutes);
	printf("\nPlease enter the seconds: ");
	scanf("%d", &curTime.seconds);

	printf("\nThe current time is %d:%d:%d\n", curTime.hours, curTime.minutes, curTime.seconds);

	return 0;
}