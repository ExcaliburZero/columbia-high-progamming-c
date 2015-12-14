//Chris Wells 2015
//956335
//September 23, 2014
//compare3.c
//Purpose: To examine the AND and OR connector symbols.

#include <stdio.h>

//Begin main function
void main()
{
	int	x = 7, y = 7;	//Initialize integer variables

	if( ( x > y ) && ( x != y ) )
		printf("\n%d is greater than %d AND they are not equal.", x, y);

	if( ( x > y ) || ( x != y ) )
		printf("\n%d is greater than %d OR they are not equal.", x, y);
}