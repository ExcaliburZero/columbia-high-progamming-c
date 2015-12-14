//Chris Wells 2015
//956335
//September 29, 2014
//largestint.c
//Purpose: To determine which of three integers is th greatest, and output the integers from least to greatest.

#include <stdio.h>

//Begin main method
void main()
{
	int	input, a, b, c;	//Declare integer variables

	//The order from greatest to least for the variables is a, b, c

	//Request first integer from user
	printf("Please enter an integer: ");
	scanf("%d", &input);

	//Put first input in first integer
	a = input;	//Move input to a

	//Request integer from user
	printf("Please enter an integer: ");
	scanf("%d", &input);

	//Find where to put second integer
	if(input > a)	//Input is greater than a
	{
		b = a;	//Move a to b
		a = input;	//Move input to a
	}
	else	//Input is less than or equal to a
	{
		b = input;	//Move input to b
	}

	//Request integer from user
	printf("Please enter an integer: ");
	scanf("%d", &input);

	//Find where to put third integer
	if(input > a)	//Input is greater than a
	{
		c = b;	//Move b to c
		b = a;	//Move a to b
		a = input;	//Move input to a
	}
	else if(input > b)	//Input is greater than b, but not a
	{
		c = b;	//Move b to c
		b = input;	//Move input to b
	}
	else	//Input is less than or equal to b, and a
	{
		c = b;	//Move b to c
		b = input;	//Move input to b
	}

	//Output largest integer
	printf("The largest integer is %d.", a);

	//Output integers in order of least to greatest
	printf("\nThe variables in order of least to greatest are: %d, %d, %d.", c, b, a);
}