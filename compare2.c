//Chris Wells 2015
//956335
//September 23, 2014
//compare2.c
//Purpose: TO examine additional inequality and equality symbols.

#include <stdio.h>

//Begin main function
void main()
{
	int	b, c;	//Declaring variables b & c as type integer

	//Request integer from user
	printf("Please enter an integer: ");
	scanf("%d", &b);

	//Request integer from user
	printf("Please enter a second integer: ");
	scanf("%d", &c);

	//Compare vairables b and c using equality and inequality symbols

	//Less than
	if( b < c )
		printf("\n%d is less than %d.", b, c);

	//Greater than
	if( b > c )
		printf("\n%d is greater than %d.", b, c);

	//Less than or equal
	if( b <= c )
		printf("\n%d is less than or equal to %d.", b, c);

	//Greater than or equal
	if( b >= c )
		printf("\n%d is greater than or equal to %d.", b, c);

	//Equal
	if( b == c )
		printf("\n%d is equal to %d.", b, c);

	//Not equal
	if( b != c )
		printf("\n%d is not equal to %d.", b, c);
}