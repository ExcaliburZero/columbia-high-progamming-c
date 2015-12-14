//Chris Wells 2015
//956335
//September 24, 2014
//trace1.c
//Purpose: To multiply two numbers together and see if their absolute value might be greater than ten.

#include <stdio.h>
void main()
{
	int	a, b, c;

	printf("Please enter an integer: ");
	scanf("%d", &a);

	printf("Please enter an integer: ");
	scanf("%d", &b);

	c = a * b;

	if( c > 10 )
	{
		printf("Yes.");
	}
	else	if( c > 0 )
	{
		printf("No.");
	}
	else
	{
		printf("Maybe.");
	}
}