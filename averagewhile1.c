//Chris Wells 2015
//956335
//October 07, 2014
//averagewhile1.c
//Purpose: To average 10 test averages using a while loop structure.

#include <stdio.h>

//Begin main function
void main()
{
	int	i = 0;	//Initialize counter variable
	int	val, total, avg;	//Declare value, total and average integer variables

	total = 0;	//Set value of total to zero

	//Gather the test scores and store them in a total value
	while( i < 10 )
	{
		//Request a test score from user
		printf("Enter a test score (0-100): ");
		scanf("%d", &val);

		//Request integer test score (0-100) from user until they enter one
		while( ( val < 0 ) || ( val > 101 ) )
		{
			//Request a test score from user
			printf("Invalid! Please enter a valid test score (0-100): ");
			scanf("%d", &val);
		}

		//Add entered value to total
		total = total + val;

		//Increase counter variable
		i += 1;
	}

	//Calulate average
	avg = total / 10;

	//Print out total to user
	printf("Total: %d\n", total);

	//Print out average to user
	printf("Average: %d", avg);
}