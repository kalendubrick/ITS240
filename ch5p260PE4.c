/*
ITS240-01
Lab 04
Ch5p260PE4c
09/18/2012
Kalen Dubrick
*/

#include <stdio.h>
#define MAXBOWLERS 5
#define MAXSCORES 3

int main()
{
	int i, score1, score2, score3;
	float avg;

	for (i = 0; i < MAXBOWLERS; i++)
	{
		//get the scores
		printf("Please enter bowler #%d's %d scores, separated by a space: ", i + 1, MAXSCORES);
		scanf("%d %d %d", &score1, &score2, &score3);

		avg = (score1 + score2 + score3) / MAXSCORES;

		printf("\nBowler #%d's average score is %3.0f\n", i + 1, avg);
	}
	
	return 0;
}