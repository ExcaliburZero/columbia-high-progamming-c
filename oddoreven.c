//Chris Wells 2015
//956335
//September 29, 2014
//oddoreven.c
//Purpose: To determine if a number is even or odd.

#include <stdio.h>

//Begin main method
void main()
{
	int a;	//Declare integer variable

	//Request variable from user
	printf("Please enter an integer that is greater than 0:");
	scanf("%d", &a);

	if( a <= 0 )	//Out of range
		printf("The number you entered is out of range, please enter an integer greater than 0.");
	else if( a % 2 == 0 )	//Even
		printf("The number is even.");
	else if( a % 2 == 1 )	//Odd
		printf("The number is odd.");
}