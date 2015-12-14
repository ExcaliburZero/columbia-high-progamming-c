//Chris Wells 2015
//956335
//October 30, 2014
//switchcount.c
//Purpose: To have the user enter twenty numbers [1,5] and print out the number of times each number was entered.

#include <stdio.h>

//Begin main function
void main()
{
	int	num;	//Declare integer variable to store the entered numbers
	int	ones = 0, twos = 0, threes = 0, fours = 0, fives = 0;	//Initialize variables to store the number of times each number [1,5] is entered
	int	i;	//Declare counter variable

	//Request twenty numbers and record them
	for( i = 0; i < 20; i += 1 )
	{
		//Request a number [1,5] from the user
		for( num = -1; (num < 1) || (num > 5); )
		{
			printf("Please enter an integer in the range [1,5]: ");
			scanf("%d", &num);
		}

		//Record entered number into count variables
		switch( num )
		{
			case 1:
				ones += 1;
				break;
			case 2:
				twos += 1;
				break;
			case 3:
				threes += 1;
				break;
			case 4:
				fours += 1;
				break;
			case 5:
				fives += 1;
				break;
		}
	}

	//Print out the count of each number entered
	printf("1: %d\n", ones);
	printf("2: %d\n", twos);
	printf("3: %d\n", threes);
	printf("4: %d\n", fours);
	printf("5: %d\n", fives);
}