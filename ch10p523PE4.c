/*
ITS240-01
Lab 09
Ch10p523PE4
10/30/2012
Kalen Dubrick
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_ITEMS 10

int main()
{
	FILE *dataFile;
	char name[13];
	int data[MAX_ITEMS];
	int pollenCount, totalPCount = 0, i;

	//open the data file and get a new reading
	printf("\nPlease enter the data file name: ");
	gets(name);
	printf("\nPlease enter the new reading: ");
	scanf("%d", &pollenCount);
	dataFile = fopen(name, "r");

	//read the old values into the array
	for (i = 0; i < MAX_ITEMS; i++)
	{
		fscanf(dataFile, "%d", &data[i]);
		totalPCount += data[i];
	}

	//close the file
	fclose(dataFile);

	//reopen the file for writing
	dataFile = fopen(name, "w");

	//calculate and display the averages
	printf("\nThe old average pollen count was %6.2f\n", (float)totalPCount / MAX_ITEMS);
	printf("The new average pollen count is %6.2f\n", (float)(totalPCount - data[0] + pollenCount) / MAX_ITEMS);

	//write the old values to the file, minus the oldest, and then the new pollen count
	for (i = 1; i < MAX_ITEMS; i++)
	{
		fprintf(dataFile, "%d\n", data[i]);
	}
	fprintf(dataFile, "%d", pollenCount);

	//close the file again
	fclose(dataFile);
	
	return 0;
}