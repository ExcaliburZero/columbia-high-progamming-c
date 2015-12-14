//Chris Wells 2015
//956335
//December 02, 2014
//characters.c
//Purpose: 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

//Begin main function
void main()
{
	char a, b;	//Declare character variables

	//Request character from user
	printf("Please enter a character: ");
	scanf("%c", &a);

	//Digit
	if( isdigit(a) != 0 )
		printf("\nThe character entered is a digit.");
	else
		printf("\nThe character entered is not a digit.");

	//Letter
	if( isalpha(a) != 0 )
		printf("\nThe character entered is a letter.");
	else
		printf("\nThe character entered is not a letter.");

	//Alphanumerical character
	if( isalnum(a) != 0 )
		printf("\nThe character entered is an alphanumeric character.");
	else
		printf("\nThe character entered is not an alphanumeric character.");

	//Lowercase
	if( islower(a) != 0 )
		printf("\nThe character entered is a lowercase letter.");
	else
		printf("\nThe character entered is not a lowercase letter.");

	//Uppercase
	if( isupper(a) != 0 )
		printf("\nThe character entered is a uppercase letter.");
	else
		printf("\nThe character entered is not a uppercase letter.");

	//Space
	if( isspace(a) != 0 )
		printf("\nThe character entered is a space.");
	else
		printf("\nThe character entered is not a space.");

	//Punctuation mark
	if( ispunct(a) != 0 )
		printf("\nThe character entered is a punctuation mark.");
	else
		printf("\nThe character entered is not a punctuation mark.");

	//Switch case if character is a letter
	if( islower(a) )
		b = toupper(a);
	else
		b = tolower(a);

	//Print out character
	printf("\nThe character entered is: %c", b);
}