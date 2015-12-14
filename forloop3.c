//Chris Wells 2015
//956335
//October 20, 2014
//forloop3.c
//Purpose: To introduce embedded for loops.

#include <stdio.h>

//Begin main function
void main()
{
	int	i, j;

	for( i = 5; i < 30; i += 3 )
	{
		for( j = 1; j <= i; j += 1 )
		{
			printf("! ");
		}

		printf("\n");
	}
}