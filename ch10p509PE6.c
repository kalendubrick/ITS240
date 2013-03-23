/*
ITS240-01
Lab 09
Ch10p509PE6
10/30/2012
Kalen Dubrick
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//function prototype
	void printLine(FILE *, int );

	FILE *testFile;

	//open the file
	testFile = fopen("p509PE6.txt", "r");
	if (testFile == NULL)
	{
		printf("\nFailed to open the file.\n");
		exit(1);
	}

	printLine(testFile, 5);
	printLine(testFile, 1);
	printLine(testFile, 3);
	printLine(testFile, 2);
	printLine(testFile, 6);
	printLine(testFile, 10);

	fclose(testFile);

	return 0;
}

void printLine(FILE *inFile, int line)
{
	int lineNum = 0, ch;
	long int offset, last, start;

	fseek(inFile, 0L, SEEK_END);
	last = ftell(inFile);
	fseek(inFile, 0L, SEEK_SET);

	//find the start of the line
	if (line == 1) //no need to search if we want the first line
	{
		start = 0;
	}
	else
	{
		for (offset = 0; offset <= last; offset++)
		{
			ch = getc(inFile);
			if (ch == '\n')
			{
				lineNum++;
				if (lineNum == (line - 1)) //this means we're almost to the correct line
				{
					start = ftell(inFile);
					break;
				}
			}
		}
	}

	//print the line
	if (lineNum != (line - 1)) //this means we didn't find the line
	{
		printf("\nLine %d could not be found.\n", line);
	}
	else
	{
		fseek(inFile, start, SEEK_SET); //move to the start of the line
		printf("\n");
		for (offset = start; offset <= last; offset++)
		{
			ch = getc(inFile);
			if (ch == '\n' || ch == EOF) //if we hit a new line or end of file that means the line is finished
			{
				break;
			}
			printf("%c", ch);
		}
	}
}
