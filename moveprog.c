//Chris Wells 2015
//956335
//October 03, 2014
//moveprog.c
//Purpose: To move a value across an array.

#include <stdio.h>

//Begin main method
void main()
{
	int	offval = 0, onval = 1;	//Set the on and off cell variables
	int	board[3][3] = {	//Declare board array filled with zeros
			{0,0,0} ,
			{0,1,0} ,
			{0,0,0}
		};
	int	i = 0, i2 = 0;	//Initialte counter variables
	int	mv;	//Declare move direction variable
	int	objx = 1, objy = 1;	//Initialize object position
	int	fin = 0;	//Initialize finished variable

	//Print a divider
	printf("-----------------\n");

	//Print board
	while(i < 3)
	{
		printf("%d ", board[i][i2]);
		i2 = i2 + 1;
			if(i2 > 2)
		{
			i2 = 0;
			i = i + 1;
			printf("\n");
		}
	}

	//Reset counter variables
	i = 0;
	i2 = 0;

	//Print a divider
	printf("-----------------\n");

	while( fin == 0 )
	{

		//Request a direction from user
		printf("Please enter a direction digit (1-4,6-9, 0 = End): ");
		scanf("%d", &mv);

		//Turn off the current position
		board[objx][objy] = offval;

		//Turn on the new position, and set the new position
		if( mv == 4 )
		{
			board[objx][objy - 1] = onval;
			objy = objy - 1;
		}
		else if( mv == 6 )
		{
			board[objx][objy + 1] = onval;
			objy = objy + 1;
		}
		else if( mv == 8 )
		{
			board[objx - 1][objy] = onval;
			objx = objx - 1;
		}
		else if( mv == 2 )
		{
			board[objx + 1][objy] = onval;
			objx = objx + 1;
		}
		else if( mv == 7 )
		{
			board[objx - 1][objy - 1] = onval;
			objx = objx - 1;
			objy = objy - 1;
		}
		else if( mv == 3 )
		{
			board[objx + 1][objy + 1] = onval;
			objx = objx + 1;
			objy = objy + 1;
		}
		else if( mv == 1 )
		{
			board[objx + 1][objy - 1] = onval;
			objx = objx + 1;
			objy = objy - 1;
		}
		else if( mv == 9 )
		{
			board[objx - 1][objy + 1] = onval;
			objx = objx - 1;
			objy = objy + 1;
		}
		else if( mv == 0)
		{
			fin = 1;
		}

		//Print a divider
		printf("-----------------\n");

		//Print board
		while(i < 3)
		{
			printf("%d ", board[i][i2]);
			i2 = i2 + 1;

			if(i2 > 2)
			{
				i2 = 0;
				i = i + 1;
				printf("\n");
			}
		}

		//Reset counter variables
		i = 0;
		i2 = 0;

		//Print a divider
		printf("-----------------\n");
	}
}