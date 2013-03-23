/*
ITS240-01
Lab 08
Ch9p462PE7
10/23/2012
Kalen Dubrick
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
	//function prototypes
	int countLetters(char []);
	
	int count;
	char message[] = "5 plus 5 is 10, but 5 times 5 is 25!";

	count = countLetters(message);

	printf("\nThe string\n\n");
	puts(message);
	printf("\ncontains %d letters\n", count);

	return 0;
}

int countLetters(char message[])
{
	int i = 0, count = 0;

	while(message[i])
	{
		if (isalpha(message[i]))
		{
			count++;
		}

		i++;
	}

	return count;
}