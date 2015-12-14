//Chris Wells 2015
//956335
//October 21, 2014
//pythtrip.c
//Purpose: TO calculate all pythagorian triples whose numbers are less than or equal to 50.

#include <stdio.h>

//Begin main function
void main()
{
	int	a, b, c;	//Declare variables to store the numbers to test

	//Find pythagorean triples
	for( a = 1; a <= 50; a += 1 )
	{
		for( b = a; b <= 50; b += 1 )
		{
			for( c = b; c <= 50; c += 1 )
			{
				if( ( a * a + b * b ) == ( c * c ) )
					printf("%d, %d, %d\n", a, b, c);
			}
		}
	}
}