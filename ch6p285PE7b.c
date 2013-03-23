/*
ITS240-01
Lab 05
Ch6p285PE7b
09/04/2012
Kalen Dubrick
*/

#include <stdio.h>
#include <math.h>

//function prototypes
void selectTable(int , int , int );

int main()
{
	printf("\n");
	selectTable(6, 5, 2);
	printf("\n");
	selectTable(5, 4, 3);
	printf("\n");
	selectTable(2, 4, 7);
	printf("\n");
	selectTable(10, 3, 1);

	return 0;
}

void selectTable(int startNum, int numValues, int incNum)
{
	int i;
	
	printf("NUMBER SQUARE CUBE\n");
	printf("------ ------ ----\n");

	for (i = startNum; i < startNum + (numValues * incNum); i += incNum)
	{
		printf("%3d %7d %6d\n", i, (int) pow(i, 2), (int) pow (i, 3));
	}
}