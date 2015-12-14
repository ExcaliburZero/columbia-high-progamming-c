//Chris Wells 2015
//956335
//October 20, 2014
//forloop1.c
//Purpose: To introduce the for loop repitition structure.

#include <stdio.h>

//Begin main function
void main()
{
	int	a, b = 0;	//Declaring a which will run the for loop, and initalizing b as a counter

	//Printing odd number from 3 to 19 and increasing b each time through the loop
	for( a = 3; a < 20; a += 2 )
	{
		printf("%d  ", a);
		b += 1;
	}

	printf("\n%d %d", a, b);
}