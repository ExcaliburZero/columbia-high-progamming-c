//Chris Wells 2015
//956335
//November 21, 2014
//oddtotalarray.c
//Purpose: To fill an array with odd numbers 1-41, print out the numbers and total them.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Begin main function
void main()
{
	int	nums[21];	//Declare aray to store all of the numbers
	int	total = 0;	//Initialize variable to store the total of all the odd integers in the array
	int	i;		//Declare counter variables
	int	i2 = 0;		//Initialize second counter variable

	//Print divider
	printf("----------\n");

	//Fill array with odd values 1-41
	for( i = 0; i < 41; i += 1 )
	{
		if( ( (i + 1) % 2 ) == 1 )
		{
			nums[i2] = i + 1;
			i2 += 1;
		}
	}

	//Print odd values and add them to total
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