//Chris Wells 2015
//956335
//October 28, 2014
//switch2.c
//Purpose: To introduce the switch selection structure.

#include <stdio.h>

//Begin main function
void main()
{
	char	a;

	printf("Please enter a character: ");
	scanf("%c", & a);

	switch(a)
	{
		case 'A':
		case 'a':	printf("A is for apple.");
				break;

		case 'b':	printf("B is for Bannas.");
				break;

		case 'c':	printf("C is for Suspension.");
				break;

		case 'H':	printf("H is for Hello.");
				break;

		default:	printf("Wrong!");
				break;
	}
}