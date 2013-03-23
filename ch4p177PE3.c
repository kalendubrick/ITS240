/*
ITS240-01
Lab 03
Ch4p177PE3c
09/11/2012
Kalen Dubrick
*/

#include <stdio.h>

int main()
{
	int hoursWorked;
	float salary;

	//get the hours worked
	printf("\nPlease enter the hours worked: ");
	scanf("%d", &hoursWorked);

	//calculate the salary
	if (hoursWorked <= 40)
	{
		salary = 8.0 * hoursWorked;
	}
	else
	{
		salary = 320.0 + (12.0 * (hoursWorked - 40));
	}

	//display the salary
	printf("\nThe weekly salary is $%6.2f\n", salary);
}