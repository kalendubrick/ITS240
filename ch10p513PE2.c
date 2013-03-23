/*
ITS240-01
Lab 09
Ch10p513PE2
10/30/2012
Kalen Dubrick
*/

#include <stdio.h>
#include <stdlib.h>

//function protoypes
FILE *getOpen();

int main()
{
	FILE *outFile;

	outFile = getOpen();

	fclose(outFile);

	return 0;
}

FILE *getOpen()
{
	FILE *fname;
	char name[13], intercept;
	int choice;

	do
	{
		printf("\nEnter a file name: ");
		gets(name);
		fname = fopen(name, "r"); //open in read-only first
		if (fname == NULL) // the file doesn't already exist, so we're safe
		{
			fname = fopen(name, "w");
			choice = 0;
		}
		else // the file already exists
		{
			printf("\nThe file already exists.\n");
			printf("  Enter [1] to use a new file name\n");
			printf("  Enter [2] to overwrite the existing file\n");
			printf("  Enter [3] to append the existing file\n");
			printf("Please enter a number [1,2,3]: "); 
			scanf("%d", &choice);
			switch(choice)
			{
				case 1:
					fclose(fname);
					scanf("%c", &intercept); // grab the last Enter key, or we'll get an error
					break;
				case 2:
					fclose(fname);
					fname = fopen(name, "w");
					break;
				case 3:
					fclose(fname);
					fname = fopen(name, "a");
			}
		}
	} 
	while (choice == 1);

	return (fname);
}