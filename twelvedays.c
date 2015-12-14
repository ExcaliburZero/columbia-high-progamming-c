//Chris Wells 2015
//956335
//October 30, 2014
//twelvedays.c
//Purpose: To emulate the song "The Twelve days of Christmas" allowing the user to enter a number [1,12] ad run throught the song's lines starting at the specified line

#include <stdio.h>

//Begin main function
void main()
{
	int	num;	//Declare variable to store the entered number
	int	cont = 1;	//Initialize variable storing whether to continue or not (1 = yes, 0 = no)

	//Main while loop
	while( cont == 1 )
	{
		//Request line number from user
		for( num = -1; (num < 1) || (num > 12); )
		{
			printf("Please enter an integer in the range [1,12]: ");
			scanf("%d", &num);
		}

		//Print out lines of song
		while(num > 0)
		{
			switch(num)
			{
				case 1:
					printf("...and a Partridge in a Pear Tree!\n");
					break;
				case 2:
					printf("2 Turtle Doves\n");
					break;
				case 3:
					printf("3 French Hens\n");
					break;
				case 4:
					printf("4 Calling Birds\n");
					break;
				case 5:
					printf("5 Golden Rings\n");
					break;
				case 6:
					printf("6 Geese a Laying\n");
					break;
				case 7:
					printf("7 Swans a Swimming\n");
					break;
				case 8:
					printf("8 Maids a Milking\n");
					break;
				case 9:
					printf("9 Ladies Dancing\n");
					break;
				case 10:
					printf("10 Lords a Leaping\n");
					break;
				case 11:
					printf("11 Pipers Piping\n");
					break;
				case 12:
					printf("12 Drummers Drumming\n");
					break;
			}

			//Decrease num by one
			num -= 1;
		}

		//Ask if user wants to continue
		printf("Would you like to continue? (1 = yes, 0 = no): ");
		scanf("%d", &cont);
	}
}