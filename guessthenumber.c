//Chris Wells 2015
//956335
//November 12, 2014
//guessthenumber.c
//Purpose: To let the user guess a random number [1 - 10,000] until they get it right and print out how many guesses they took.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Begin main function
void main()
{
	int	num;	//Declare variable to store the random number
	int	guess;	//Declare variable to store the number that the user guesses
	int	i;	//Declare controller variable
	int	total = 0;	//Initialize variable to store the number guesses that the user has made

	//Set the rand seed
	srand(time(NULL));

	//Generate the random number
	num = rand() % 1000 + 1;

	//Loop to let the user guess the number
	i = 0;
	while( i == 0 )
	{
		//Take the user's guess
		guess = -1;
		while( (guess < 1) || (guess > 1000) )
		{
			printf("Guess a number between 1 and 1,000: ");
			scanf("%d", &guess);

			if( (guess < 1) || (guess > 1000) )
				printf("Not in number range.\n");
		}

		//Increase number of guesses taken
		total += 1;

		//Test if number is correct, higher or lower
		if( guess == num )	//Correct
		{
			i = 1;
		}
		else if( num > guess )	//Higher
		{
			printf("Higher!\n");
		}
		else if( num < guess )	//Lower
		{
			printf("Lower!\n");
		}
	}

	//Print end message, as user has correctly guessed
	printf("~~~~~~~\n");
	printf("Correct! The number is %d.\n", num);
	printf("Guesses: %d\n", total);

	//Test if player made 10 or less guesses
	if( total <= 10 )
		printf("Congratz! You guessed the number in 10 or less guesses.");
	else
		printf("Unfortunately it took you more than 10 guesses to get the correct number.");
}