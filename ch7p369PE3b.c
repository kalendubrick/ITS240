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
	int arithmeticSeq(int , int , int );

	int firstTerm = 2, comDiff = 3, nthTerm = 5, result;

	result = arithmeticSeq(firstTerm, comDiff, nthTerm);
	printf("\n%d\n", result);

	return 0;
}

int arithmeticSeq(int firstTerm, int comDiff, int nthTerm)
{
	if (nthTerm == 0)
	{
		return firstTerm;
	}
	else
	{
		return (firstTerm + (nthTerm * comDiff)) + arithmeticSeq(firstTerm, comDiff, nthTerm - 1);
	}
}