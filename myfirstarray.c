//Chris Wells 2015
//956335
//November 20, 2014
//myfirstarray.c
//Purpose: To fill an array with the numbers one through ten and then print them out..

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Begin main function
void main()
{
	int	i;	//Declare counter variable
	int	c[10], a[10];	//Declare two arrays of ten integers
	int	b[5] = {2,5,7,11,24};	//Initialize array b with five integers
	int	d[10] = {0};	//Initialize array d with ten integers set to 0

	//Set values of array positions to the numbers 1-10
	c[0] = 1;
	c[1] = 2;
	c[2] = 3;
	c[3] = 4;
	c[4] = 5;
	c[5] = 6;
	c[6] = 7;
	c[7] = 8;
	c[8] = 9;
	c[9] = 10;

	//Printf out the values in the array
	printf("\n%d %d %d %d %d %d %d %d %d %d\n", c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9]);

	//Set values for second array
	for( i = 0; i < 10; i += 1 )
	{
		a[i] = i + 1;
		printf("%d ", a[i]);
	}

	for( i = 0; i < 5; i += 1 )
	{
		printf("\n%d", b[i]);
	}
}