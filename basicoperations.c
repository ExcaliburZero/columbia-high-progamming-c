//Chris Wells 2015
//956335
//September 19, 2014
//basicoperations.c
//Purpose: To calculate the sum, difference, product, and quotient of two inputted integers

#include <stdio.h>

void main()
{
	int	num1, num2;	//Declare the integer variables
	int	sm, df, pr, qu;	//Declare integer variables for calculated values

	//Request the first integer from the user
	printf("Please enter the first integer: ");
	scanf("%d", &num1);

	//Request the second integer from the user
	printf("Please enter the second integer: ");
	scanf("%d", &num2);

	//Obtain the calculated values and store them in their respective variables
	sm = num1 + num2;	//Sum
	df = num1 - num2;	//Diference
	pr = num1 * num2;	//Product
	qu = num1 / num2;	//Quotient

	//Output the calculated values to the user
	printf("Sum:        %d", sm);
	printf("\nDifference: %d", df);
	printf("\nProduct:    %d", pr);
	printf("\nQuotient:   %d", qu);
}