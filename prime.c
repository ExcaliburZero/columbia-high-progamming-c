//Chris Wells 2015
//956335
//October 08, 2014
//prime.c
//Purpose: TO check if a number is a prime number.

#include <stdio.h>

//Begin main function
void main()
{
	int	num;	//Declare integer variable to store entered value
	int	curnum;	//Declare integer variable to store the currently checked variable
	int	isPrime = 1;	//Initialize variable to store whether the number is prime or not (0 = no, 1 = yes)

	num = -1;	//Set num value to -1 to set off the while loop

	//Request an integer from the user that is >1
	while( num < 2 )
	{
		printf("Please enter an integer that is greater than 1: ");
		scanf("%d", &num);
	}

	//Set curnum to one less than num
	curnum = num - 1;

	//Check if the entered number is prime
	while( curnum > 1 )
	{
		//If is prime set isPrime to one/yes
		if( ( num % curnum ) == 0 )
			isPrime = 0;

		//Decrease curnum value
		curnum -= 1;
	}

	//Print whether the number is prime or not
	if( isPrime == 1 )
		printf("The number is prime.");
	else
		printf("The number is composite.");
}