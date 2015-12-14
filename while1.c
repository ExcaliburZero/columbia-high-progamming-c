//Chris Wells 2015
//956335
//October 06, 2014
//while1.c
//Purpose: To introduce the while loop repetition structure. These loops are counter-controlled.

#include <stdio.h>

//Begin main function
void main()
{
	int	a = 8, b = 44;	//Initalize integer variables when using a counter-controlled loop

	//loop will rpint hello as a counts up by one from 8 to 19
	while( a < 20 )
	{
		printf("Hello.");
		a += 1;
	}

	printf("\n");

	//loop will print goodbye and the value of b as b counts down by 2 from 44 to 30
	while( b >= 30 )
	{
		printf("Goodbye %d ", b);
		b -= 2;
	}

	printf("%d\t%d", a, b);
}