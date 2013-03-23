/*
ITS240-01
Lab 07
Ch8p395PE3a
10/17/2012
Kalen Dubrick
*/

#include <stdio.h>
#define MAX_ELS 17

int main()
{
	//function prototypes
	void display(char []);

	char message[] = "Vacation is near";

	display(message);

	return 0;
}

void display(char message[])
{
	int i;

	for (i = 0; i < MAX_ELS; i++)
	{
		printf("%c", message[i]);
	}

	printf("\n");
}