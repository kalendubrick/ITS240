/*
ITS240-01
Lab 04
Ch5p256PE6c
09/18/2012
Kalen Dubrick
*/

#include <stdio.h>
#define MAXNUMS 5

int main()
{
	float num, maxNum = 0;
	int i, maxPos = 1;

	//find the maximum number
	for (i = 0; i < MAXNUMS; i++)
	{
		printf("Please enter a number: ");
		scanf("%f", &num);

		//if this is the first iteration, the first number will
		//automatically be the highest number
		if (i == 0)
		{
			maxNum = num;
		}
		else if (num > maxNum)
		{
				maxNum = num;
				maxPos = i + 1;
		}
	}

	printf("The highest value was %f\n and it's position was %d", maxNum, maxPos);

	return 0;
}