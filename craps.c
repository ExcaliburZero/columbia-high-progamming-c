//Chris Wells 2015
//956335
//November 17, 2014
//craps.c
//Purpose: To simulate a simplified version of the dice game Craps.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Function to print divider
void divider()
{
	printf("----------\n");
}

//Roll 2 dice function
int rollDice()
{
	int total = 0;	//Intialize total variable
	int roll;	//Declare roll variable
	int i = 0;	//Initialize counter variable

	//Set random seed
	srand(time(NULL));

	while( i < 2 )
	{
		//Get a random number 1-6, print it, and add it to total
		roll = rand() % 6 + 1;
		printf("%d ", roll);
		total += roll;

		//Increase counter variable
		i += 1;

		//Sleep for a second
		sleep((unsigned int)1);
	}

	//Print total
	printf("= ");
	sleep((unsigned int)1);
	printf("%d\n", total);

	//Sleep for a second
	sleep((unsigned int)1);

	//Return total
	return total;
}

//Begin main function
void main()
{
	int cont = 1;	//Initialize value of variable to tell whether user wants to continue or not
	int points, roll;	//Declare variables to store rolls and points
	int winnings = 0;	//Initialize variable to store user's winnings or debt 

	while( cont == 1 )
	{
		//Clear screen
		clrscr();

		//Print bet
		divider();
		printf("Bet: $1\n");
		divider();

		//Sleep for a second
		sleep((unsigned int)1);

		//Roll Dice
		roll = rollDice();

		//Check value of roll
		if( ( roll == 7 ) || ( roll == 11 ) )	//Win
		{
			winnings += 1;
			divider();
			printf("You win!\n");
		}
		else if( ( roll == 2 ) || ( roll == 3 ) || ( roll == 12 ) )	//Lose
		{
			winnings -= 1;
			divider();
			printf("You lose.\n");
		}
		else	//Points
		{
			//Set points to current roll
			points = roll;

			//Resets roll
			roll = 0;

			//Keep rolling until roll equals points or 7 
			while( ( roll != points ) &&  ( roll != 7 ) )
			{
				roll = rollDice();
			}

			//Check value of roll
			if( roll == points )	//Win
			{
				winnings += 1;
				divider();
				printf("You win!\n");
			}
			else	//Lose
			{
				winnings -= 1;
				divider();
				printf("You lose.\n");
			}
		}

		//Print divider
		divider();

		//Sleep for a second
		sleep((unsigned int)1);

		//Print user's winnings
		printf("Winnings: $%d\n", winnings);
		divider();

		//Sleep for a second
		sleep((unsigned int)1);

		//Ask if user wants to continue
		printf("Would you like to continue? (1 = yes, 0 = no) ");
		scanf("%d", &cont);
	}
}