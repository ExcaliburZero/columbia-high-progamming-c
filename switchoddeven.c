//Chris Wells 2015
//956335
//October 29, 2014
//switchoddeven.c
//Purpose: To allo9w the user to enter an unkown amount of integers and use a switch statement to determine whether they are odd or even.

#include <stdio.h>

//Begin main function
void main()
{
	int	num;	//Declare variable to store entered integer
	int	i = 1;	//Initialize counter variable

	//Request integers from user and determine whether they are even or odd
	while( i == 1 )
	{
		//Request integer from user
		printf("Please enter an integer: ");
		scanf("%d", &num);

		//Determine whether the entered number is even or odd
		switch( ( num % 2 ) )
		{
			//Number is even
			case 0:
				printf("%d is even.\n", num);
				break;

			//Number is odd and positive
			case 1:
				printf("%d is odd.\n", num);
				break;

			//Number is odd and negative
			case -1:
				printf("%d is odd.\n", num);
				break;
		}

		//Request whether the user wants to enter another integer or not
		printf("Would you like to enter another integer? (1 = yes, 0 = no): ");
		scanf("%d", &i);
	}
}