/*
ITS240-01
Lab 10
Ch11p546PE4
11/08/2012
Kalen Dubrick
*/

#include <stdio.h>
#define NUM_ELS 15

int main()
{
	char strtest[NUM_ELS] = "This is a test";
	int i;

	//2a
	printf("\n");
	for (i = 0; i < NUM_ELS - 1; i++)
	{
		printf("%c", *(strtest + i));
	}
	printf("\n");

	//2b
	printf("\n");
	for (i = 10; i < NUM_ELS - 1; i++)
	{
		printf("%c", *(strtest + i));
	}
	printf("\n");

	//2d
	printf("\n");
	i = 0;
	while (*(strtest + i) != '\0')
	{
		printf("%c", *(strtest + i));
		i++;
	}
	printf("\n");

	return 0;
}