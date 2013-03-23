/*
ITS240-01
Lab 05
Ch6p306PE7b
09/04/2012
Kalen Dubrick
*/

#include <stdio.h>

int main()
{
	//function prototypes
	int whole(float );

	int i;

	//convert and print values
	printf(" NUMBER  WHOLE NUM\n");
	printf("-------- ---------\n");

	printf("%8.3f %8d\n", 20.345, whole(20.345));
	printf("%8.3f %8d\n", 10.678, whole(10.678));
	printf("%8.3f %8d\n", 7.953, whole(7.953));
	printf("%8.3f %8d\n", 99.874, whole(99.874));
	

	return 0;
}

int whole(float num)
{
	int intValue;

	intValue = (int) num;

	return intValue;
}