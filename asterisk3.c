//Chris Wells 2015
//956335
//October 21, 2014
//asterisk.c
//Purpose: To print out a series of asterisks.

#include <stdio.h>

int main()
{
	int	i, j;
	int	columns = 1;
	int	rows = 8;

	for( i = 1; i <= rows; i++ )
	{
		for( j = 1; j <= columns; j++ )
		{
			printf("*");
		}

		printf("\n");

		//Increase columns by 1
		columns += 1;
	}

	//Increase rows by one
	rows += 1;

	//Decrease columns by 2
	columns -= 2;

	for( i = 1; i <= rows; i++ )
	{
		for( j = 1; j <= columns; j++ )
		{
			printf("*");
		}

		printf("\n");

		//Decrease columns by 1
		columns -= 1;
	}

	return 0;
}