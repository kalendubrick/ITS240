/*
ITS240-01
Lab 08
Ch9p480PE2
10/23/2012
Kalen Dubrick
*/

#include <stdio.h>

int main()
{
	//function prototypes
	int vowelCount(char []);

	char message[] = "This is a test sentence.";
	int count;

	count = vowelCount(message);

	printf("\nThere are %d vowels in the string.\n", count);

	return 0;
}

int vowelCount(char strng[])
{
	int i, count = 0;

	for (i = 0; strng[i] != '\0'; i++)
	{
		switch (strng[i])
		{
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':
				count++;
		}
	}

	return count;
}