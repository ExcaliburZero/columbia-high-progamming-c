//Chris Wells 2015
//956335
//October 21, 2014
//asterisk.c
//Purpose: To print out a series of asterisks.

#include <stdio.h>

int main()
{
	int	i, j;

	for( i = 1; i <= 3; i++ )
	{
		for( j = 1; j <= 6; j++ )
		{
			printf("%d\t", j);
		}

		printf("\n");
	}

	return 0;
}