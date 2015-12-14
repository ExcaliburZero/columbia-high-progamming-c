//Chris Wells 2015
//956335
//October 06, 2014
//while2.c
//Purpose: To introduce the while loop repetition structure. These loops are user-controlled.

#include <stdio.h>

//Begin main function
void main()
{
	int	i = 0, j;

	printf("Please enter a positive integer: ");
	scanf("%d", &j);

	//Requesting a positive integer value from the user, and continues to do so until they do.
	while( j < 0 )
	{
		printf("The number you entered is not positive. Please enter a positive integer: ");
		scanf("%d", &j);
	}

	//Allowing the user to enter positive integers and totaling up the sum of the integers entered.
	while( j > 0 )
	{
		i = i + j;
		
		printf("Please enter a positive integer: ");
		scanf("%d", &j);
	}

	//Print the sum of the entered positive integers.
	printf("The sum of the numbers you entered is %d.", i);
}