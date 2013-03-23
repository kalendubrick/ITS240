/*
ITS240-01
Lab Chp12-Chp15
Ch12p588PE3
11/27/2012
Kalen Dubrick
*/

#include <stdio.h>
#define NUM_EMPS 6

struct Employee
{
	int idNum;
	char lastName[20];
	float payRate;
	float hoursWorked;
};

typedef struct Employee EMP;

int main()
{
	EMP employees[NUM_EMPS];
	int i;
	float grossPay, totalPay = 0.0;

	for (i = 0; i < NUM_EMPS; i++)
	{
		printf("\nPlease enter the ID number, last name, pay rate, and hours worked: ");
		scanf("%d %s %f %f", &employees[i].idNum, &employees[i].lastName, &employees[i].payRate, &employees[i].hoursWorked);	
	}

	printf("\nLAST NAME ID NUMBER GROSS PAY\n");
	printf("========= ========= =========\n");
	for (i = 0; i < NUM_EMPS; i++)
	{
		grossPay = employees[i].payRate * employees[i].hoursWorked;
		printf("%9s %9d %9.2f\n", employees[i].lastName, employees[i].idNum, grossPay);
		totalPay += grossPay;
	}
	printf("\nTotal Pay: %5.2f\n", totalPay);

	return 0;
}