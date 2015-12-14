//Chris Wells 2015
//956335
//December 22, 2014
//coin_flips.c
//Purpose: To flip a coin a user entered number of times and record + output the results.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int coin_flip(void);

//Begin main function
void main()
{
	int	rolls[500];	//Array of roll results
	int	current = 0;	//Counter variable
	int	times = -1;	//Number of times to flip the coin
	int	heads = 0;	//Number of heads
	int	tails = 0;	//Number of tails

	//Request from the user the number of coin tosses
	while( times < 1 )
	{
		printf("Times: ");
		scanf("%d", &times);
	}

	//Toss the coin the requested number of times
	while( current < times )
	{
		rolls[current] = coin_flip();

		current += 1;
	}

	//Tally the results and print them
	for(current = 0; current < times; current += 1 )
	{
		
		if( rolls[current] == 1 )
		{
			heads += 1;
		}
		else
		{
			tails += 1;
		}
	}
	printf("\n\n");
	printf("Heads: %d\n", heads);
	printf("Tails: %d\n", tails);
}

int coin_flip(void)
{
	int	result = 0;

	srand(time(NULL));

	result = rand() % 2 + 1;

	sleep((unsigned int)(((rand() % 10) / 2) + 1));

	//Heads
	if( result == 1 )
	{
		printf("H ");
	}
	//Tails
	else
	{
		printf("T ");
	}

	return result;
}