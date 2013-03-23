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

	printf("\nThis computer uses %u byte(s) for characters\n", sizeof(char));
	printf("This computer uses %u byte(s) for integers\n", sizeof(int));
	printf("This computer uses %u byte(s) for long integers\n", sizeof(long));
	printf("This computer uses %u byte(s) for single-precision floating point numbers\n", sizeof(float));
	printf("This computer uses %u byte(s) for double-precision floating point numbers\n", sizeof(double));

	printf("\nThe address of key is %u\n", &key);
	printf("The address of choice is %u\n", &choice);
	printf("The address of num is %u\n", &num);
	printf("The address of count is %u\n", &count);
	printf("The address of date is %u\n", &date);
	printf("The address of yield is %u\n", &yield);
	printf("The address of price is %u\n", &price);

	return 0;
}