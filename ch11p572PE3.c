/*
ITS240-01
Lab 10
Ch11p572PE3
11/08/2012
Kalen Dubrick
*/

#include <stdio.h>
#define NUM_ELS 6

int main()
{
	char *lines[NUM_ELS] = {"                                      ",
							"                                      ",
							"                                      ",
							"                                      ",
							"                                      ",
							"                                      ",};
	int i;

	printf("\n");
	for (i = 0; i < NUM_ELS; i++)
	{
		printf("Please enter a string: ");
		gets(*(lines + i));
	}

	printf("\n");
	for (i = 0; i < NUM_ELS; i++)
	{
		puts(*(lines + i));
	}

	return 0;
}