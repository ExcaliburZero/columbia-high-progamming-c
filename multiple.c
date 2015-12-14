//Chris Wells 2015
//956335
//September 30, 2014
//multiple.c
//Purpose: To determine if an integer is a multiple of another integer.

#include <stdio.h>

//Begin main method
void main()
{
	int	num1, num2;	//Declare integer variables

	//Request integer from user
	printf("Please enter an integer: ");
	scanf("%d", &num1);

	//Request integer from user
	printf("Please enter an integer: ");
	scanf("%d", &num2);

	//Check if num2 is a multiple of num1
	if( ( num1 % num2 ) == 0 )	//Is a multiple
		printf("%d is a multiple of %d.", num2, num1);
	else	//Is not multiple
		printf("%d is not a multiple of %d.", num2, num1);
}