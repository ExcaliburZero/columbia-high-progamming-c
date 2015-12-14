//Chris Wells 2015
//956335
//October 07, 2014
//while3.c
//Purpose: To examine embedded while loops.

#include <stdio.h>

//Begin main function
void main()
{
	int	i = 1, j = 10, total = 0;	//Initialized integer variables

	while( i < 4 )
	{
		while( j < 15 )
		{
			printf("%d ", j);
			j += 1;
		}

		//Print a new line
		printf("\n");

		//Add current i value to total
		total = total + i;

		//Modify counter variables
		j = 10;
		i += 1;
	}

	//Print total value
	printf("%d", total);
}