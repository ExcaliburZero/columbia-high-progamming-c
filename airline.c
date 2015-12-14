//Chris Wells 2015
//956335
//November 24, 2014
//airline.c
//Purpose: To keep track of and set seats in a plane.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//Begin main function
void main()
{
	int	first[5] = {0}, econ[5] = {0};	//Initialize arrays to store what seats are availible and taken
	int	nFirst = 1, nEcon = 1;		//Initialize variables to store what number of seat is next for each class
	int	request;			//Declare variable to store what type of seat the user would like
	int	cont = 1, still = 1;		//Initialize variable to run the main loop and secondary loop
	int	i, i2;				//Declare counter variables
	int	skip = 0;			//Initialize variable to store whether to skip seat request or not

	//Print divider
	printf("----------\n");

	//Main loop
	while( cont == 1 )
	{
		//Set counter variables
		i = 0;
		i2 = 1;

		//Reset controller variable
		still = 1;

		while( ( still == 1 ) && ( ( nFirst <= 5 ) || ( nEcon <= 5 ) ) )
		{
			//Request from user what section they would like to sit in
			if( skip == 0 )
			{
				printf("What class of seat would you like?\n");
				printf("Enter 1 for first class.\n");
				printf("Enter 2 for economy.\n");
				printf("Enter 3 to end.\n");
				scanf("%d", &request);
			}

			//Reset skip to zero
			skip = 0;

			//Check if seat is availible, and if so assign it
			if( request == 1 )	//First class
			{
				//If a seat is availible
				if( nFirst <= 5 )
				{
					//Assign the seat
					first[nFirst - 1] = 1;
					nFirst += 1;
					still = 0;
				}
				else	//A seat is not availible
				{
					printf("----------\n");
					printf("Sorry, there are no first class seats free.\n");
					sleep( (unsigned int) 2);
					printf("----------\n");

					//See if the user would like the other class
					printf("Would you like to take an economy class seat?\n");
					printf("Enter 1 for no.\n");
					printf("Enter 2 for yes.\n");
					printf("Enter 3 to quit.\n");
					scanf("%d", &request);

					//Check to see what was selected
					if( request == 1 )	//No
					{
						printf("----------\n");
						printf("Next flight leaves in 3 hours.\n");
						sleep( (unsigned int) 2);
						printf("----------\n");
					}
					else if( request == 2 )	//Yes
					{
						skip = 1;
					}
					else if( request == 3 )	//Skip
					{
						skip = 1;
					}
				}
			}
			else if( request == 2 )	//Economy
			{
				//If a seat is availible
				if( nEcon <= 5 )
				{
					//Assign the seat
					econ[nEcon - 1] = 1;
					nEcon += 1;
					still = 0;
				}
				else	//A seat is not availible
				{
					printf("----------\n");
					printf("Sorry, there are no economy seats free.\n");
					sleep( (unsigned int) 2);
					printf("----------\n");

					//See if the user would like the other class
					printf("Would you like to take a first class seat?\n");
					printf("Enter 1 for yes.\n");
					printf("Enter 2 for no.\n");
					printf("Enter 3 to quit.\n");
					scanf("%d", &request);

					//Check to see what was selected
					if( request == 1 )	//Yes
					{
						skip = 1;
					}
					else if( request == 2 )	//No
					{
						printf("----------\n");
						printf("Next flight leaves in 3 hours.\n");
						sleep( (unsigned int) 2);
						printf("----------\n");
					}
					else if( request == 3 )	//Skip
					{
						skip = 1;
					}
				}
			}
			else if( request == 3 )	//End
			{
				still = 0;
				cont = 0;
			}
		}

		//Print out user's seat info if they did not exit
		if( ( request == 1 ) || ( request == 2 ) )
		{
			printf("----------\n");

			//Class
			if( request == 1 )
				printf("Class:\tFirst class\n");
			else if( request == 2 )
				printf("Class:\tEconomy\n");

			//Seat
			if( request == 1 )
				printf("Seat:\t1, %d\n", nFirst - 1);
			else if( request == 2 )
				printf("Seat:\t2, %d\n", nEcon - 1);
		}

		//Check if no seats are availible
		if( ! ( ( nFirst <= 5 ) || ( nEcon <= 5 ) ) )
		{
			printf("----------\n");
			sleep( (unsigned int) 2);
			printf("There are no more seats availible.\n");
			request = 0;
			cont = 0;
		}

		//Print out map of flight
		printf("----------\n");
		sleep( (unsigned int) 2);

		while( i2 <= 2 )
		{
			while( i < 5 )
			{
				//Print current seat
				if( i2 == 1 )
					printf("%d ", first[i]);
				else if( i2 == 2 )
					printf("%d ", econ[i]);

				//Increase second counter
				i += 1;
			}

			//Print newline
			printf("\n");

			//Increase first counter and reset second counter
			i2 += 1;
			i = 0;
		}
		printf("----------\n");
	}
}