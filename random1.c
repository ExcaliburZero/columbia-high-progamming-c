//Chris Wells 2015
//956335
//November 10, 2014
//random1.c
//Purpose: To introduce the math random command.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Begin main function
void main()
{
	int	x, y;

	srand(time(NULL));

	x = rand();
	printf("The random number is %d.\n", x);

	y = rand() % 10;
	printf("The random number is %d.", y);
}