/*
ITS240-01
Lab 10
Ch11p563PE5
11/08/2012
Kalen Dubrick
*/

#include <stdio.h>
#include <string.h>
#define MAX_ELS 81

int main()
{
	//function prototypes
	void newRemove(char *, char );

	char str[] = "HappyHolidays";
	char rmChar = 'H';

	printf("\nThe original string: ");
	puts(str);

	newRemove(str, rmChar);

	printf("\nThe new string: ");
	puts(str);

	return 0;
}

void newRemove(char str[], char charToRemove)
{
	char newStr[MAX_ELS];
	int i;
	int newOffset = 0;

	//copy the original string, minus the char we don't want
	for (i = 0; i < strlen(str) + 1; i++)
	{
		if (*(str + i) != charToRemove)
		{
			*(newStr + newOffset++) = *(str + i); //use newOffset so there aren't spaces in the new string
		}
	}

	//copy the new string back into the old string
	for (i = 0; *(str + i) = *(newStr + i); i++) {}
}

	