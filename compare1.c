//Chris Wells 2015
//956335
//September 22, 2014
//compare1.c
//Purpose: To examine inequality and equality symbols. The if/else selection structure will be explored.

#include <stdio.h>

//Begin main function
void main()
{
	int	x;	//Declare integer variable

	//Request integer value from user
	printf("Please enter an integer: ");
	scanf("%d", &x);

	//Check if variable is greater than 5
	if( x > 5 )
	{
		printf("\nThe number you entered is greater than 5.");
		x = 10;
	}
	else
	{
		printf("\nThe number you entered in not greater than 5.");
		x = 100;
	}

	//Display the value in the variable x
	printf("\nThe value in the variable x is %d.", x);
}