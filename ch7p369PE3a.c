/*
ITS240-01
Lab 06
Ch7p369PE3b
10/09/2012
Kalen Dubrick
*/

#include <stdio.h>

int main()
{
	//function prototype
	void arithmeticSeq(int , int , int );

	int firstTerm = 2, comDiff = 3, nthTerm = 5, result;

	printf("\n");
	arithmeticSeq(firstTerm, comDiff, nthTerm);
	printf("\n");

	return 0;
}

void arithmeticSeq(int firstTerm, int comDiff, int nthTerm)
{
	if (nthTerm == 0)
	{
		printf(" %d", firstTerm);
	}
	else
	{
		printf(" %d", firstTerm + (comDiff * nthTerm));
		arithmeticSeq(firstTerm, comDiff, nthTerm - 1);
	}
}