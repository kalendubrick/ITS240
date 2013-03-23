/*
ITS240-01
Lab 06
Ch7p364PE4
10/09/2012
Kalen Dubrick
*/

#include <stdio.h>

void swap(float *, float *, char); //function prototype

int main()
{
	float firstnum, secnum;
	char sortOrder, capture;

	printf("Enter two numbers: ");
	scanf("%f %f", &firstnum, &secnum);

	printf("Enter the sort order: ");
	scanf("%c", &capture);
	scanf("%c", &sortOrder);

	printf("\nBefore the call to swap():\n");
	printf("  The value in firstnum is %5.2f\n", firstnum);
	printf("  The value in secnum is %5.2f\n", secnum);

	swap(&firstnum, &secnum, sortOrder); //call swap

	printf("\nAfter the call to swap():\n");
	printf("  The value in firstnum is %5.2f\n", firstnum);
	printf("  The value in secnum is %5.2f\n", secnum);

	return 0;
}

void swap(float *num1Addr, float *num2Addr, char sortOrder)
{
	float temp;

	if (sortOrder == 'a')
	{
		if (*num1Addr > *num2Addr)
		{
			temp = *num1Addr; //save firstnum's value
			*num1Addr = *num2Addr; //move secnum's value into firstnum
			*num2Addr = temp; //change secnum's value
		}
	}
	else 
	{
		if (*num1Addr < *num2Addr)
		{
			temp = *num1Addr; //save firstnum's value
			*num1Addr = *num2Addr; //move secnum's value into firstnum
			*num2Addr = temp; //change secnum's value
		}
	}
}