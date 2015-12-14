//Chris Wells 2015
//956335
//November 21, 2014
//eventotalarray.c
//Purpose: To fill an array with even numbers 2-42, print out the numbers and total them.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Begin main function
void main()
{
	int	nums[21];	//Declare aray to store all of the numbers
	int	total = 0;	//Initialize variable to store the total of all the even integers in the array
	int	i;		//Declare counter variables
	int	i2 = 0;		//Initialize second counter variable

	//Print divider
	printf("----------\n");

	//Fill array with even values 2-42
	for( i = 1; i < 42; i += 1 )
	{
		if( ( (i + 1) % 2 ) == 0 )
		{
			nums[i2] = i + 1;
			i2 += 1;
		}
	}

	//Print even values and add them to total
	for( i = 0; i < 21; i += 1 )
	{
		//Print number and add it to total
		printf("%d ", nums[i]);
		total += nums[i];
	}

	//Print out total
	printf("\n----------\n");
	printf("Total: %d", total);
	printf("\n----------");
}