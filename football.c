/*
ITS240-01
Project
Kalen Dubrick
*/

#include <stdio.h>
#include <stdlib.h>

#define NUM_TEAMS 32
#define TOTAL_YARDS 100

/* structure for teams */
struct FootballTeam
{
	char name[30];
	int offRating;
	int defRating;
	int specRating;
};

typedef struct FootballTeam TEAM;

/* function prototypes */
void getTeams(TEAM *);
int getInt();
void printTeams(TEAM *, int );
int menu();
void pickTeams(TEAM *, int *, int *);
int playGame(TEAM *, int , int );
int coinToss(int , int );
void kickoff(TEAM *, int , int , int *);
void punt(TEAM *, int , int , int *);
void changePossession(TEAM *, int *, int *);
void changePossessionH(TEAM *, int *, int *, int , int );

int main()
{
	/* variables */
	TEAM teams[NUM_TEAMS];
	int homeTeam = -1, awayTeam = -1, choice, winner;

	/* seed the random number generator for various functions */
	srand(time(NULL));

	/* load array from file */
	getTeams(teams);

	do 
	{
		choice = menu();
		switch (choice)
		{
			case 1:
				pickTeams(teams, &homeTeam, &awayTeam);
				break;
			case 2:
				winner = playGame(teams, homeTeam, awayTeam);
				if (winner > 0)
				{
					printf("\nThe %s won the game!\n", (teams + (winner - 1))->name);
				}
				else
				{
					printf("\nTie game!\n");
				}
				break;
			case 3:
				printf("\nGoodbye!\n");
		}
	}
	while (choice != 3); /* Keep moving through the menu until the user selects 3 */

	return 0;
}

/* load team information from a file into the passed array */
void getTeams(TEAM *teamArray)
{
	FILE *inFile;
		
	/* open the file for reading */
	inFile = fopen("teams.txt", "r");

	printf("\nImporting teams from file...");

	if (inFile)
	{
		/* read team information */
		while (fscanf(inFile, "%[^:]%*c%d%*c%d%*c%d%*c", teamArray->name, &(teamArray->offRating), &(teamArray->defRating), &(teamArray->specRating)) != EOF)
		{
			*teamArray++;
		}
	}
	else
	{
		printf("\nFailed to open the file.\n");
		exit(1);
	}

	printf(" Success!\n");
	
	/* close the file */
	fclose(inFile);
}

/* get an integer from the user with input validation */
int getInt()
{
	/* function prototypes */
	int isValidInt(char []);

	int isAnInt = 0;
	char value[NUM_TEAMS];

	do
	{
		gets(value);
		if (isValidInt(value) == 0)
		{
			printf("\nYou did not enter a valid integer, please try again: ");
			continue; /* send control to the do-while expression test */
		}
		isAnInt = 1;
	}
	while (isAnInt == 0);

	return atoi(value); /* convert to an integer */
}

int isValidInt(char val[])
{
	int start = 0;
	int i;
	int valid = 1;
	int sign = 0;

	/* check for an empty string */
	if (val[0] == '\0')
	{
		valid = 0;
	}

	/* check for a leading sign */
	if (val[0] == '-' || val[0] == '+')
	{
		sign = 1;
		start = 1; /* start cheking for digits after the sign */
	}

	/* check that there is at least one character after the sign */
	if (sign == 1 && val[1] == '\0')
	{
		valid = 0;
	}

	/* now check the string, which we know has at least one non-sign char */
	i = start;
	while(valid == 1 && val[i] != '\0')
	{
		if (val[i] < '0' || val[i] > '9') /* check for a non-digit */
		{
			valid = 0;
		}
		i++;
	}

	return valid;
}

/* print team information from the array */
void printTeams(TEAM *teamArray, int option)
{
	int i;

	printf("\n");

	switch(option)
	{
		case 1: /* only print team names */
			for (i = 0; i < NUM_TEAMS; i++)
			{
				printf("%2d. %s\n", i + 1, teamArray->name);
				*teamArray++; /* move to the next structure */
			}
			break;
		case 2: /* print everything */
			for (i = 0; i < NUM_TEAMS; i++)
			{
				printf("%d. %s\n", i + 1, teamArray->name);
				printf("==========================\n");
				printf("Offensive Rating: %d\n", teamArray->offRating);
				printf("Defensive Rating: %d\n", teamArray->defRating);
				printf("Special Teams Rating: %d\n\n", teamArray->specRating);
				*teamArray++; /* move to the next structure */
			}
	}
}

/* present a menu of choices to the user */
int menu()
{
	int choice = 0;
	
	do
	{
		printf("\n1. Select teams\n");
		printf("2. Play a game\n");
		printf("3. Quit the program\n");
		printf("Please select an option: ");
		choice = getInt();
		if (choice < 1 || choice > 3)
		{
			printf("The digit entered is not a valid option, please try again:\n");
			continue; /* go through the loop again */
		}
	}
	while (choice < 1 || choice > 3);

	return choice;
}

/* user selects the two teams, and both are returned via pointers */
void pickTeams(TEAM *teamArray, int *homeTeam, int *awayTeam)
{
	int tempDigit;

	*homeTeam = 0;
	do
	{
		printf("Teams:\n");
		printTeams(teamArray, 1);
		printf("\nPlease enter the team number for the home team or 0 to print the list again and hit enter: ");
		tempDigit = getInt();
		if (tempDigit != 0 && tempDigit <= NUM_TEAMS)
		{
			*homeTeam = tempDigit;
			printf("You selected the %s\n", (teamArray + (tempDigit - 1))->name);
		}
		else if (tempDigit == 0)
		{
			printf("Teams:\n");
			printTeams(teamArray, 1);
		}
		else
		{
			printf("The team number selected is invalid, please try again.\n");
		}
	}
	while (*homeTeam == 0);

	*awayTeam = 0;
	do
	{
		printf("\nPlease enter the team number for the away team or 0 to print the list again and hit enter: ");
		tempDigit = getInt();
		if (tempDigit != 0 && tempDigit <= NUM_TEAMS)
		{
			*awayTeam = tempDigit;
			printf("You selected the %s\n", (teamArray + (tempDigit - 1))->name);
		}
		else if (tempDigit == 0) /* Since we already printed the list for the home team, only print again if the user requests it */
		{
			printf("Teams:\n");
			printTeams(teamArray, 1);
		}
		else
		{
			printf("The team number selected is invalid, please try again.\n");
		}
	}
	while (*awayTeam == 0);
}

/* simulate a simple football game */
int playGame(TEAM *teamArray, int homeTeam, int awayTeam)
{
	int offense, defense; /* stores the index of which team has the ball */
	int startingOffense, startingDefense; /* stores the initial possessions for the halftime switch */
	int gameTime = 0; /* stores how much time has been played in the game */
	int yardLine; /* where the offense is on the field */
	int down; /* indicates which down (1-4)*/
	int yardsToGo; /* indicates how many yard left to reach 1st down */
	int yardsGained; /* tracks yards per play */
	int homeScore = 0, awayScore = 0; /* team scores */
	int offInfluence, defInfluence, specInfluence; /* yardage modifiers based on teams' ratings */
	int winningTeam; /* stores index of the team that wins */
	int goForIt = 0; /* used when it is 4th down */
	
	printf("\nWelcome to the %s at the %s\n", (teamArray + (awayTeam - 1))->name, (teamArray + (homeTeam - 1))->name);

	offense = coinToss(homeTeam, awayTeam);
	if (offense == homeTeam)
	{
		startingOffense = homeTeam;
		defense = awayTeam;
		startingDefense = awayTeam;
	}
	else
	{
		startingOffense = awayTeam;
		defense = homeTeam;
		startingDefense = homeTeam;
	}

	printf("The %s win the coin toss and elect to receive\n", (teamArray + (offense - 1))->name);

	kickoff(teamArray, offense, defense, &yardLine);

	/* initialize the down and yards to go */
	down = 1;
	yardsToGo = 10;

	while (gameTime < 60)
	{
		switch (gameTime) /* announce scores if we're at the end of a quarter */
		{
			case 15:
				printf("\nEnd of first quarter! %s: %d  %s: %d\n", (teamArray + (homeTeam - 1))->name, homeScore, (teamArray + (awayTeam - 1))->name, awayScore);
				break;
			case 30:
				printf("\nHalftime! %s: %d  %s: %d\n", (teamArray + (homeTeam - 1))->name, homeScore, (teamArray + (awayTeam - 1))->name, awayScore);
				/* initialize the down and yards to go */
				down = 1;
				yardsToGo = 10;
				changePossessionH(teamArray, &offense, &defense, startingOffense, startingDefense);
				kickoff(teamArray, offense, defense, &yardLine);
				break;
			case 45:
				printf("\nEnd of third quarter! %s: %d  %s: %d\n", (teamArray + (homeTeam - 1))->name, homeScore, (teamArray + (awayTeam - 1))->name, awayScore);
				break;
		}

		while (down <= 4)
		{
			printf("\n%s ball, %d & %d on the %d yardline\n", (teamArray + (offense - 1))->name, down, yardsToGo, yardLine);
			if (down == 4)
			{
				if (yardLine < 60)
				{
					printf("\nPlease enter [1] to punt or [2] to go for it and hit enter: ");
				}
				else
				{
					printf("\nPlease enter [1] to punt, [2] to go for it, or [3] to kick a field goal and hit enter: ");
				}
				goForIt = getInt();
				if (goForIt == 1)
				{
					changePossession(teamArray, &offense, &defense);
					punt(teamArray, offense, defense, &yardLine);
					down = 1;
					yardsToGo = 10;
					gameTime += 5;
					break;
				}
				else if (goForIt == 2) /* let's do this! */
				{
					printf("Let's do this!\n");
				}
				else if (goForIt == 3)
				{
					specInfluence = 0.1 * (33 - (teamArray + (offense - 1))->specRating);
					yardsGained = (int)(rand() + specInfluence) % 100;
					if (yardsGained > 50)
					{
						if (offense == homeTeam)
						{
							homeScore += 3;
						}
						else
						{
							awayScore += 3;
						}
						printf("\nField goal %s! Score - %s: %d %s: %d\n", (teamArray + (offense - 1))->name, (teamArray + (homeTeam - 1))->name, homeScore, (teamArray + (awayTeam - 1))->name, awayScore);
						changePossession(teamArray, &offense, &defense);
						kickoff(teamArray, offense, defense, &yardLine);
						down = 1;
						yardsToGo = 10;
						gameTime += 5;
						break;
					}
					else
					{
						printf("\nNo good. Turnover on downs!\n", yardsGained);
						changePossession(teamArray, &offense, &defense);
						yardLine = 100 - yardLine; /* switch the field */
						down = 1;
						yardsToGo = 10;
						gameTime += 5;
						break;
					}
				}
			}
			offInfluence = 0.1 * (33 - (teamArray + (offense - 1))->offRating);
			defInfluence = 0.1 * (33 - (teamArray + (defense - 1))->defRating);
			yardsGained = (int)(rand() + offInfluence - defInfluence) % 20;
			yardLine += yardsGained;
			if (yardLine >= 100) /* touchdown */
			{
				if (offense == homeTeam)
				{
					homeScore += 7;
				}
				else
				{
					awayScore += 7;
				}
				printf("\nTouchdown %s! Score - %s: %d %s: %d\n", (teamArray + (offense - 1))->name, (teamArray + (homeTeam - 1))->name, homeScore, (teamArray + (awayTeam - 1))->name, awayScore);
				changePossession(teamArray, &offense, &defense);
				kickoff(teamArray, offense, defense, &yardLine);
				down = 1;
				yardsToGo = 10;
				gameTime += 5;
				break;
			}
			else
			{
				if (yardsGained > 10 || yardsGained >= yardsToGo)
				{
					printf("\nComplete for %d yards. First down.\n", yardsGained);
					down = 1;
					yardsToGo = 10;
				}
				else if (yardsGained < yardsToGo && down == 4)
				{
					printf("\nComplete for %d yards. Turnover on downs!\n", yardsGained);
					changePossession(teamArray, &offense, &defense);
					yardLine = 100 - yardLine; /* switch the field */
					down = 1;
					yardsToGo = 10;
					gameTime += 5;
					break;
				}
				else
				{
					printf("\nComplete for %d yards.\n", yardsGained);
					yardsToGo -= yardsGained;
					down++;
				}
			}
		}
	}

	printf("\nFinal Score\n");
	printf("-----------\n");
	printf("%s: %d  %s: %d\n", (teamArray + (homeTeam - 1))->name, homeScore, (teamArray + (awayTeam - 1))->name, awayScore);

	if (homeScore > awayScore)
	{
		winningTeam = homeTeam;
	}
	else if (homeScore < awayScore)
	{
		winningTeam = awayTeam;
	}
	else
	{
		winningTeam = 0; /* tie */
	}

	return winningTeam;
}

/* simulate a coin toss */
int coinToss(int team1, int team2)
{
	int randValue, returnVal;

	srand(time(NULL));

	randValue = (int)rand() % 2;

	if (randValue == 0)
	{
		returnVal = team1;
	}
	else
	{
		returnVal = team2;
	}

	return returnVal;
}

/* displays text about the kickoff and sets the offense's yardLine to 20 (touchback) */
void kickoff(TEAM *teamArray, int offense, int defense, int *yardLine)
{
	*yardLine = 20;
	printf("\nThe %s kick off.  Touchback.  %s ball on the %d yard line.\n", (teamArray + (defense - 1))->name, (teamArray + (offense - 1))->name, *yardLine);
}

/* punts the ball to the other team and sets the yardline */
void punt(TEAM *teamArray, int offense, int defense, int *yardLine)
{
	int specInfluence; /* yardage modifier based on team's rating */

	specInfluence = 0.1 * (33 - (teamArray + (offense - 1))->specRating);
	*yardLine -= 20 + (int)(rand() + specInfluence) % 50;
	if (*yardLine <= 0) /* if yardage is negative, that means a touchback */
	{
		*yardLine = 20;
	}
	printf("\nThe %s punt.  %s ball on the %d yard line.\n", (teamArray + (defense - 1))->name, (teamArray + (offense - 1))->name, *yardLine);
}

/* used to change which team is on offense and defense */
void changePossession(TEAM *teamArray, int *offense, int *defense)
{
	int tempInt;

	tempInt = *offense;
	*offense = *defense;
	*defense = tempInt;
}

/* special form of changePossession for after halftime -
   takes inital possessions into account */
void changePossessionH(TEAM *teamArray, int *offense, int *defense, int startingOffense, int startingDefense)
{
	int tempInt;

	/* only change possession if the current offense was the starting offense */
	if (*offense == startingOffense)
	{
		tempInt = *offense;
		*offense = *defense;
		*defense = tempInt;
	}
}