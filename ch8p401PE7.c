/*
ITS240-01
Lab 07
Ch8p401PE7
10/17/2012
Kalen Dubrick
*/

#include <stdio.h>
#define MAX_ELS 50

int main()
{
	//function prototypes
	void sortDesc(float [], int );

	float grades[MAX_ELS];
	float grade;
	int i, count = 0, highEl = 0;

	//get the grades
	printf("Please enter a grade [negative to exit]: ");
	scanf("%f", &grade);

	while (grade > 0)
	{
		grades[count] = grade;
		count++;

		//get the next grade if we're not at 50
		if (count < 50)
		{
			printf("Please enter a grade [negative to exit]: ");
			scanf("%f", &grade);

			//set highEl to count if grade is negative
			if (grade < 0)
			{
				highEl = count;
				break;
			}
		}
		else
		{
			//set highEl to MAX_ELS because we hit the limit
			highEl = MAX_ELS;
			break;
		}
	}

	if (highEl == 0)
	{
		printf("\nNo grades were entered.\n");
	}
	else
	{
		//sort the grades
		sortDesc(grades, highEl);

		printf("\n");

		for (i = 0; i < highEl; i++)
		{
			printf("%5.2f percent\n", grades[i]);
		}
	}

	return 0;
}

//sort the values in the passed array in descending order
//adapted from the selection sort in section 8.8
void sortDesc(float grades[], int numEls)
{
	int i, j, max, maxidx, temp;

	for (i = 0; i < (numEls - 1); i++)
	{
		max = grades[i];
		maxidx = i;
		for (j = i + 1; j < numEls; j++)
		{
			if (grades[j] > max)
			{
				max = grades[j];
				maxidx = j;
			}
		}
		if (max > grades[i])
		{
			temp = grades[i];
			grades[i] = max;
			grades[maxidx] = temp;
		}
	}
}