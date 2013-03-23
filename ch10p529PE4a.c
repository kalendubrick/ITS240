/*
ITS240-01
Lab 09
Ch10p529PE4a
10/30/2012
Kalen Dubrick
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *outFile;
	char fileName[13] = "points.bin";
	float num1 = 6.3, num2 = 8.2, num3 = 18.25, num4 = 24.32, num5 = 4.0, num6 = 4.0;
	float num7 = 10.0, num8 = -5.0, num9 = -2.0, num10 = 5.0, num11 = 4.0, num12 = 5.0;

	//open the file for writing
	outFile = fopen(fileName, "rb");
	if (outFile != NULL)
	{
		printf("\nThe file already exists.  Exiting.\n");
		exit(1);
	}
	outFile = fopen(fileName, "wb");
	
	//write data to the file
	fwrite(&num1, sizeof(num1), 1, outFile);
	fwrite(&num2, sizeof(num2), 1, outFile);
	fwrite(&num3, sizeof(num3), 1, outFile);
	fwrite(&num4, sizeof(num4), 1, outFile);
	fwrite(&num5, sizeof(num5), 1, outFile);
	fwrite(&num6, sizeof(num6), 1, outFile);
	fwrite(&num7, sizeof(num7), 1, outFile);
	fwrite(&num8, sizeof(num8), 1, outFile);
	fwrite(&num9, sizeof(num9), 1, outFile);
	fwrite(&num10, sizeof(num10), 1, outFile);
	fwrite(&num11, sizeof(num11), 1, outFile);
	fwrite(&num12, sizeof(num12), 1, outFile);

	//close the file and let the user know
	fclose(outFile);
	printf("\nThe file %s has successfully been written as a binary file.\n", fileName);

	return 0;
}