//Chris Wells 2015
//956335
//October 28, 2014
//switch1.c
//Purpose: To introduce the switch selection structure.

#include <stdio.h>

//Begin main function
void main()
{
	int	i, a, j = 0;

	for( a = 1; a <= 6; a += 1 )
	{

		printf("Please enter an integer: ");
		scanf("%d", &i);

		//Switch structure compares the input i to the four stated cases, otherwise using the default
		switch(i)
		{
			case 7:		printf("You entered an 8!\tJust kidding...\tOr am I???\n");
					break;

			case 44:	printf("Best number ever!\n");
					j += 1;
					break;

			case -4:	printf("This is a negative four.\n");
					break;

			case 3:		printf("The number of counting shall be three, and three shall be the number to which thou shalt count.\n");
					break;

			default:	printf("Happy Tuesday!!\n");
					break;
		}
	}

	printf("You entered 44 %d times.", j);
}