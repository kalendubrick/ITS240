/*
ITS240-01
Lab 08
Ch9p453PE3
10/23/2012
Kalen Dubrick
*/

#include <stdio.h>

int main()
{
	//function prototypes
	int countChars(char []);
	
	int count;
	char message[] = "This is a test message.";

	count = countChars(message);

	printf("\nThe string\n\n");
	puts(message);
	printf("\nis %d characters long\n", count);

	return 0;
}

int countChars(char message[])
{
	int i = 0;

	while(message[i])
	{
		i++;
	}

	return i;
}