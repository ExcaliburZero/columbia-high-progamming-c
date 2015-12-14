//Chris Wells 2015
//956335
//September 30, 2014
//palindrome.c
//Purpose: To check if an integer is a palindrome.

#include <stdio.h>

//Begin main method
void main()
{
	int	ful, num1, num2, num3, num4, num5;	//Declare the full integer variable and the integer parts variables
	int	digits;	//Declare integer variable to store the number of digits in the inputted integer.
	int	ispal = 0;	//Initialize integer variable to store if the entered number is a palindrome (1) or not (0).

	//Request the integer from the user
	printf("Please enter a integer with five or less digits: ");
	scanf("%d", &ful);

	//Find the first digit of the integer
	num1 = ful / 10000;
	ful = ful % 10000;	//Set remaining digits to ful

	//Find the second digit of the integer
	num2 = ful / 1000;
	ful = ful % 1000;	//Set remaining digits to ful

	//Find the third digit of the integer
	num3 = ful / 100;
	ful = ful % 100;	//Set remaining digits to ful

	//Find the fourth digit of the integer
	num4 = ful / 10;
	ful = ful % 10;	//Set remaining digits to ful

	//Find the fifth digit of the integer
	num5 = ful;

	//Check how many digits the integer has
	if( num1 == 0 )	//If doesn't have five integers
	{
		digits = 4;
		if( num2 == 0 )	//If doesn't have four integers
		{
			digits = 3;
			if( num3 == 0 )	//If doesn't have three integers
			{
				digits = 2;
				if( num4 == 0 )	//If doesn't have two integers
					digits = 1;
			}
		}
	}
	else	//Has five integers
		digits = 5;

	//Check if integer is a palindrome
	if( digits == 1 )	//One digit must be a palindrome
		ispal = 1;
	else if( digits == 2 )	//Two digits
	{
		if( num4 == num5 )
			ispal = 1;
	}
	else if( digits == 3 )	//Three digits
	{
		if( num3 == num5 )
			ispal = 1;
	}
	else if( digits == 4 )	//Four digits
	{
		if( num2 == num5 )
			if( num3 == num4 )
				ispal = 1;
	}
	else if( digits == 5 )	//Five digits
	{
		if( num1 == num5 )
			if( num2 == num4 )
				ispal = 1;
	}

	//Print out the individual digits of the integer
	printf("Digits: %d\n", digits);
	printf("%d   ", num1);
	printf("%d   ", num2);
	printf("%d   ", num3);
	printf("%d   ", num4);
	printf("%d   \n", num5);

	//Print to user wether the entered integer is palindrome or not
	if( ispal == 1 )
		printf("The integer you entered is a palindrome.");
	if( ispal == 0 )
		printf("The integer you entered is not a palindrome.");
}