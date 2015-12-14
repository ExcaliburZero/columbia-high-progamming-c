//Chris Wells 2015
//956335
//October 1, 2014
//decrypt.c
//Purpose: To decrypt a four digit integer.

#include <stdio.h>

//Begin main method
void main()
{
	int	ful, num1, num2, num3, num4;	//Declare the full integer variable and the integer parts variables.
	int	swp;	//Declare integer variable used to help swap digits

	//Request the integer from the user
	printf("Please enter a integer with four digits: ");
	scanf("%d", &ful);

	//Find the first digit of the integer
	num1 = ful / 1000;
	ful = ful % 1000;	//Set remaining digits to ful

	//Find the second digit of the integer
	num2 = ful / 100;
	ful = ful % 100;	//Set remaining digits to ful

	//Find the third digit of the integer
	num3 = ful / 10;
	ful = ful % 10;	//Set remaining digits to ful

	//Find the fourth digit of the integer
	num4 = ful;

	//Swap first and third digits
	swp = num1;
	num1 = num3;
	num3 = swp;

	//Swap second and fourth digits
	swp = num2;
	num2 = num4;
	num4 = swp;

	//Decrypt digits
	num1 = num1 - 7;
	num2 = num2 - 7;
	num3 = num3 - 7;
	num4 = num4 - 7;

	if( num1 < 0 )
		num1 = num1 + 10;
	if( num2 < 0 )
		num2 = num2 + 10;
	if( num3 < 0 )
		num3 = num3 + 10;
	if( num4 < 0 )
		num4 = num4 + 10;

	//Print digits
	printf("%d   ", num1);
	printf("%d   ", num2);
	printf("%d   ", num3);
	printf("%d   ", num4);
}