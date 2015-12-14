//Chris Wells 2015
//956335
//October 08, 2014
//factorial.c
//Purpose: To find the factorial of an entered integer.

#include <stdio.h>

//Begin main function
void main()
{
	int	num;	//Declare integer variable that will store the entered number
	int	fac;	//Declare integer variable that will store the factorial

	num = -2;	//Set up num variable so that it will set off the while loop

	//Request positive integer from user
	while( num < -1 )
	{
		printf("Please enter a positive integer: ");
		scanf("%d", &num);
	}

	//Set the fac value to the entered number and decrease num by one if it is not zero
	if( num > 0 )
	{
		fac = num;
		num -= 1;
	}

	//Take care of zero scenario
	if( num == 0 )
		fac = 1;

	//Calculate the factorial
	while( ( num - 1 ) > -1  )
	{
		//Multiply fac variable with current num
		fac = fac * num;

		//Decrease num by one
		num -= 1;
	}

	//Print the factorial to the user
	printf("The factorial of the entered number is %d.", fac);
}