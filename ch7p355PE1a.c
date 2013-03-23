/*
ITS240-01
Lab 06
Ch7p355PE1a
10/09/2012
Kalen Dubrick
*/

#include <stdio.h>

int main()
{
	char key, choice;
	int num, count;
	long date;
	float yield;
	double price;

	printf("\nThe address of key is %u\n", &key);
	printf("The address of choice is %u\n", &choice);
	printf("The address of num is %u\n", &num);
	printf("The address of count is %u\n", &count);
	printf("The address of date is %u\n", &date);
	printf("The address of yield is %u\n", &yield);
	printf("The address of price is %u\n", &price);

	return 0;
}