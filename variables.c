//Chris Wells
//956335
//September 17, 2014
//variables.c
//Purpose: To learn how to use basic variables in C

#include <stdio.h>

void main()
{
	int	x, y, y1 = 6;		//Declaring variables of type integer
	float	a;			//Declaring a variable of type float, which is a decimal

	x = 3;				//Initializing the variable

	printf("The value in x is %d.", x);

	//The %d is called a conversion specifier, specific to integers
	printf("\nPlease enter an integer: ");
	scanf("%d", &y);	//The & is an address operator

	printf("\nThe value of our variables are: %d, %d, and %d.", x, y, y1);

	printf("\nPlease enter a decimal: ");	//Getting a float value from the user
	scanf("%f", &a);

	printf("\nThe value that was entered is: %.2f", a);
}