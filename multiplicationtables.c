//Chris Wells 2015
//956335
//November 12, 2014
//multiplicationtables.c
//Purpose: To ask the user an unlimited number of simple multiplication questions.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Function to print divider
void divider()
{
	printf("----------\n");
}

//Begin main function
void main()
{
	int	num1, num2;	//Declare variables to store the positive one-digit integers
	int	guess;	//Declare variable to store the user's guess
	int	i, i2, i3;	//Declare controller variables
	int	cont;	//Decalre variable to sotre whether or not the user would like to continue or not

	//Set rand seed
	srand(time(NULL));

	//Print divider
	divider();

	//Loop to ask the user questions (plural)
	i = 1;
	while( i == 1 )
	{
		//Loop to ask the user a question (singluar)
		i2 = 1;
		while( i2 == 1 )
		{
			//Set the values of the two integers (1-9)
			num1 = rand() % 9 + 1;
			num2 = rand() % 9 + 1;

			//Print out the question
			printf("How much is %d times %d? ", num1, num2);

			//Ask the user for the answer until they get it right
			i3 = 1;
			while( i3 == 1 )
			{
				//Request answer from user
				scanf("%d", &guess);

				//Test if guess is correct
				if( guess == ( num1 * num2 ) )	//Correct
				{
					printf("That is correct!\n");
					divider();
					i3 = 0;
					i2 = 0;
				}
				else	//Incorrect
				{
					printf("Please try again.\n\n");
					printf("How much is %d times %d? ", num1, num2);
				}
			}
		}

		//Request if the user would like to anwser another question
		for( cont = -1; (cont < 0) || cont > 1; )
		{
			printf("Would you like to answer another question? (0 = No, 1 = Yes) ");
			scanf("%d", &cont);
		}

		//See if user wants to continue or not
		if( cont == 0 )
			i = 0;
		else
			divider();
	}
}