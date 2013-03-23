/*
ITS240-01
Lab 09
Ch10p504PE6
10/30/2012
Kalen Dubrick
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *payroll;
	char empName[81];
	char ssn[12];
	float hourlyRate;
	int hoursWorked;

	//open the file
	payroll = fopen("payroll.txt", "r");
	if (payroll == NULL)
	{
		printf("\nFailed to open the file.\n");
		exit(1);
	}

	//print the heading
	printf("\nNAME       SSN         GROSS PAY\n");
	printf("---------- ----------- ---------\n");
	//print from the file
	while (fscanf(payroll, "%s %s %f %d", empName, ssn, &hourlyRate, &hoursWorked) != EOF)
	{
		printf("%-10s %s $%5.2f\n", empName, ssn, hourlyRate * hoursWorked);
	}

	//close the file
	fclose(payroll);

	return 0;
}