//Chris Wells 2015
//956335
//October 08, 2014
//averagewhile2.c
//Purpose: To average an unknown test averages using a user-controled while loop structure.

#include <stdio.h>

//Begin main function
void main()
{
	int	i = 0;	//Initialize user-control variable
	int	val, total, avg;	//Declare value, total and average integer variables
	int	gradesNum = 0;	//Initialize an integer variable to store the number of grades entered

	total = 0;	//Set value of total to zero

	//Gather the test scores and store them in a total value
	while( i == 0 )
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

		//Increase the grade counter
		gradesNum += 1;

		//Add entered value to total
		total = total + val;

		//Request if user want to enter another grade
		printf("Would you like to enter another grade? (0 = yes, 1 = no): ");
		scanf("%d", &i);
	}

	//Calulate average
	avg = total / gradesNum;

	//Print out total to user
	printf("Total: %d\n", total);

	//Print out average to user
	printf("Average: %d", avg);
}