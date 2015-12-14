//Chris Wells 2015
//956335
//October 20, 2014
//forloop2.c
//Purpose: To further explore the for loop repetiton structure.

#include <stdio.h>

//Begin main function
void main()
{
	int	grade, i, total = 0, average;

	//Requesting the grades from the user and adding them to the total
	for( i = 0; i < 5; i += 1 )
	{
		printf("Please enter a grade: ");
		scanf("%d", &grade);

		total += grade;	//Means total = total + grade;
	}

	average = total / i;

	printf("The average of the %d grades is:  %d", i, average);
}