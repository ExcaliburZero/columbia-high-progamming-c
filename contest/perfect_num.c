//Chris Wells 2015
//956335
//October 15, 2014
//perfect_num.c
//Purpose: To check if an entered integer [1 - 10,000) is a perfect number

#include <stdio.h>

//Begin main function
void main()
{
	int	num = -1;	//Initialize variable to store the entered number
	int	fac = 1, total = 0;	//Initialize variables to store factorials and total
	int	isPer = 0;	//Initialize variable to store whether num is perfect (1) or not (0)

	//Request an integer [1, 10,000) from the user
	while( ( num < 1 ) || ( num >= 10000 ) )
	{
		printf("Please enter a positive integer between 0 and 10,000: ");
		scanf("%d", &num);
	}

	//Check if the entered integer is a perfect number
	while( fac < num )
	{
		//If fac is a factor of num add it to total
		if( ( num % fac ) == 0 )
		{
			total = total + fac;
		}

		//Increase fac variable
		fac += 1;
	}

	//If number is perfect
	if( total == num )
		isPer = 1;

	//If number is not a perfect number
	if( isPer == 0 )
	{
		printf("%d is not a perfect number", num);
	}
	//If number is a perfect number
	else
	{
		printf("%d is a perfect number\n", num);
		printf("1");

		//Find and print factors
		fac = 2;
		while( fac < num )
		{
			//If fac is a factor of num print it
			if( ( num % fac ) == 0 )
			{
				printf("+%d", fac);
			}

			//Increase fac variable
			fac += 1;
		}

		//Print equals sign and num
		printf(" = %d", num);
	}
}