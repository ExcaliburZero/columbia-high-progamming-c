//Chris Wells 2015
//956335
//October 21, 2014
//asterisk.c
//Purpose: To print out a series of asterisks.

#include <stdio.h>

int main()
{
	int	i, j;
	int	columns = 8;
	int	rows = 5;

	for( i = 1; i <= rows; i++ )
	{
		for( j = 1; j <= columns; j++ )
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}