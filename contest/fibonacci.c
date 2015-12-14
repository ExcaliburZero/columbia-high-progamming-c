//Chris Wells 2015
//956335
//October 14, 2014
//fibonacci.c
//Purpose: To generate a modified Fibonacci Sequence.

#include <stdio.h>

//Begin main function
void main()
{
	int	n = 0;	//Initialize n integer variable
	int	i = 0;	//Initialize counter variable
	int	num1, num2, num3;	//Declare number one, two, and three integer variables

	//Request a number between 1 and 9 (inclusive) from the user
	while( ( n < 1 ) || ( n > 9 )  )
	{
		printf("Please enter an integer between 1 and 9: ");
		scanf("%d", &n);
	}

	//Calculate and print Fibonacci Sequence
	while( i < 50 )
	{
		//If either first or second number
		if( i < 2 )
		{
			printf("%d ", n);
			printf("%d ", n);
			num1 = n;
			num2 = n;
			i = 2;
		}

		//If beyond second number
		else
		{
			//Calculate the next number in the sequence
			num3 = num1 + num2;

			//If the next number is less than 10
			if( num3 < 10 )
			{
				num1 = num2;
				num2 = num3;

				printf("%d ", num2);
			}

			//If the next number is greater than 10
			else
			{
				num1 = num2;
				num2 = ( num3 % 10 ) + 1;

				printf("%d ", num2);
			}
		}

		//Increase counter variable
		i += 1;
	}
}