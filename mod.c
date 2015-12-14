//Chris Wells 2015
//956335
//September 29, 2014
//mod.c
//Purpose: To learn about the % operator.

#include <stdio.h>

void main()
{
	int	a, b, result;

	printf("Enter 2 integers, a and b, seperated by a comma:\n");
	scanf("%d,%d", &a, &b);

	result = a % b;

	printf("The result is: : %d", result);
}