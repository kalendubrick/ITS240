/*
ITS240-01
Lab 05
Ch6p320PE7
09/04/2012
Kalen Dubrick
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXCOUNT 500

int main()
{
	int onescount = 0, twoscount = 0, threescount = 0, fourscount = 0, fivescount = 0, sixescount = 0, sevenscount = 0, eightscount = 0, ninescount = 0, tenscount = 0;
	int i, randNum;

	//generate the seed for the random numbers
	srand(time(NULL));

	for (i = 0; i < MAXCOUNT; i++)
	{
		randNum = 1 + (int)(rand() % 11);
		switch(randNum)
		{
			case 1:
				onescount++;
				break;
			case 2:
				twoscount++;
				break;
			case 3:
				threescount++;
				break;
			case 4:
				fourscount++;
				break;
			case 5:
				fivescount++;
				break;
			case 6:
				sixescount++;
				break;
			case 7:
				sevenscount++;
				break;
			case 8:
				eightscount++;
				break;
			case 9:
				ninescount++;
				break;
			case 10:
				tenscount++;
				break;
			default:
				;
		}
	}

	//display the values gathered
	printf("NUMBER   TIMES GENERATED    PERCENTAGE\n");
	printf("------   ---------------    ----------\n");
	printf("%6d   %15d   %11.2f\n", 1, onescount, (((float)onescount / MAXCOUNT) * 100));
	printf("%6d   %15d   %11.2f\n", 2, twoscount, (((float)twoscount / MAXCOUNT) * 100));
	printf("%6d   %15d   %11.2f\n", 3, threescount, (((float)threescount / MAXCOUNT) * 100));
	printf("%6d   %15d   %11.2f\n", 4, fourscount, (((float)fourscount / MAXCOUNT) * 100));
	printf("%6d   %15d   %11.2f\n", 5, fivescount, (((float)fivescount / MAXCOUNT) * 100));
	printf("%6d   %15d   %11.2f\n", 6, sixescount, (((float)sixescount / MAXCOUNT) * 100));
	printf("%6d   %15d   %11.2f\n", 7, sevenscount, (((float)sevenscount / MAXCOUNT) * 100));
	printf("%6d   %15d   %11.2f\n", 8, eightscount, (((float)eightscount / MAXCOUNT) * 100));
	printf("%6d   %15d   %11.2f\n", 9, ninescount, (((float)ninescount / MAXCOUNT) * 100));
	printf("%6d   %15d   %11.2f\n", 10, tenscount, (((float)tenscount / MAXCOUNT) * 100));
	
	return 0;
}