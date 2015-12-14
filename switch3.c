//Chris Wells 2015
//956335
//October 28, 2014
//switch3.c
//Purpose: To introduce the switch selection structure.

#include <stdio.h>

//Begin main function
void main()
{
	char	a;	//Declare variable to store entered character
	int	i, as = 0, bs = 0, cs = 0;	//Initialize and declare counter variable, and a,b,&c totals

	//Request 20 characters from the user
	for( i = 0; i < 20; i += 1)
	{
		//Request a character from the user
		printf("Please enter a character: ");
		scanf(" %c", &a);

		//Test if the entered character is an a, b, or c
		switch(a)
		{
			case 'A':
			case 'a':	as += 1;
					break;

			case 'B':
			case 'b':	bs += 1;
					break;

			case 'C':
			case 'c':	cs += 1;
					break;
		}
	}

	//Print out the number of a's, b's, and c's entered
	printf("A: %d\n", as);
	printf("B: %d\n", bs);
	printf("C: %d\n", cs);
}