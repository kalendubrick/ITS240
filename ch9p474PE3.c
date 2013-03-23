/*
ITS240-01
Lab 08
Ch9p474PE3
10/23/2012
Kalen Dubrick
*/

#include <stdio.h>

#define MAXCHARS 81

int main()
{
	//function prototypes
	void concatString(char [], int , int , char []);

	char message[MAXCHARS];
	char newMessage[MAXCHARS];
	int num1, num2;

	printf("Please enter a string: ");
	gets(message);
	printf("Please enter 2 integers, separated by a space: ");
	scanf("%d %d", &num1, &num2);

	concatString(message, num1, num2, newMessage);

	puts(newMessage);

	return 0;
}

void concatString(char strng[], int num1, int num2, char newStrng[])
{
	sprintf(newStrng, "%s %d %d", strng, num1, num2);
}