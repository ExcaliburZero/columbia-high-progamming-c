//Chris Wells
//956335
//September 18, 2014
//addition.c
//Purpose: Input two values and add them together

#include <stdio.h>

void main()
{
	int	a, b;	//Declaring the two variables to store the numbers
	int	total;	//Declare the variable to store the total
	
	//Get the first integer from the user
	printf("Input the first integer: ");
	scanf("%d", &a);

	//Get the second integer from the user
	printf("Input the second integer: ");
	scanf("%d", &b);

	total = a + b;	//Calculate the total and store it

	printf("The values that were entered are: %d and %d", a, b);	//Output the numbers entered to the user
	
	printf("\nThe total of the two numbers is: %d", total);	//Output the total to the user
}