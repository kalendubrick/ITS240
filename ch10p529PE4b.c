/*
ITS240-01
Lab 09
Ch10p529PE4b
10/30/2012
Kalen Dubrick
*/

#include <stdio.h>
#include <stdlib.h>
#define NUM_LOOPS 3

int main()
{
	//function prototypes
	void slope(float , float, float , float );
	void midpoint(float, float, float, float );
	FILE *inFile;
	char fileName[13] = "points.bin";
	float x1, x2, y1, y2;
	int i;

	//open the file for reading
	inFile = fopen(fileName, "rb");
	if (inFile == NULL)
	{
		printf("\nThe file %s was not successfully opened.", fileName);
		printf("\nPlease check that the file currently exists.\n");
		exit(1);
	}

	//read data from the file and calculate the slope and midpoint
	printf("\n");
	for (i = 0; i < NUM_LOOPS; i++)
	{
		fread(&x1, sizeof(x1), 1, inFile);
		fread(&y1, sizeof(y1), 1, inFile);
		fread(&x2, sizeof(x2), 1, inFile);
		fread(&y2, sizeof(y2), 1, inFile);
		slope(x1, y1, x2, y2);
		midpoint(x1, y1, x2, y2);
	}

	return 0;
}

//calculates and displays slope of a line
void slope(float x1, float y1, float x2, float y2)
{
	printf("The slope of the line with points at (%4.2f,%4.2f) and (%4.2f,%4.2f) is %4.2f\n", x1, y1, x2, y2, ((y1 - y2) / (x1 - x2)));
}

//calculates and displays midpoint of a line
void midpoint(float x1, float y1, float x2, float y2)
{
	printf("The midpoint of the line with points at (%4.2f,%4.2f) and (%4.2f,%4.2f) is (%4.2f,%4.2f)\n", x1, y1, x2, y2, (x1 + x2) / 2, (y1 + y2) / 2);
}