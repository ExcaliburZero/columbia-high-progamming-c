//Chris Wells 2015
//956335
//September 30, 2014
//fivedigitint.c
//Purpose: To separate a five digit integer into five seperate integers.

#include <stdio.h>

//Begin main method
void main()
{
	int	ful, num1, num2, num3, num4, num5;	//Declare the full integer variable and the integer parts variables

	//Request the five digit integer from the user
	printf("Please enter a five digit integer: ");
	scanf("%d", &ful);

	//Find the first digit of the integer
	num1 = ful / 10000;
	printf("%d   ", num1);
	ful = ful % 10000;	//Set remaining digits to ful

	//Find the second digit of the integer
	num2 = ful / 1000;
	printf("%d   ", num2);
	ful = ful % 1000;	//Set remaining digits to ful

	//Find the third digit of the integer
	num3 = ful / 100;
	printf("%d   ", num3);
	ful = ful % 100;	//Set remaining digits to ful

	//Find the fourth digit of the integer
	num4 = ful / 10;
	printf("%d   ", num4);
	ful = ful % 10;	//Set remaining digits to ful

	//Find the fifth digit of the integer
	num5 = ful;
	printf("%d   ", num5);
}