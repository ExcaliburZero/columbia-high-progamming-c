//Chris Wells 2015
//956335
//October 02, 2014
//game.c
//Purpose: To be a game.

#include <stdio.h>

//Begin main method
void main()
{
	int	board[3][3] = {	//Declare board array filled with zeros
			{0,0,0} ,
			{0,0,0} ,
			{0,0,0}
		};
	int	i = 0, i2 = 0;	//Initialte counter variables
	int	gx, gy;	//Declare guess coordinate variables
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

		//Request a position from user
		printf("Please enter a x coordinate (0-2): ");
		scanf("%d", &gx);
		printf("Please enter a y coordinate (0-2): ");
		scanf("%d", &gy);

		//Invert the specified position
		if( board[gx][gy] == 0 )	//Off to on
			board[gx][gy] = 1;
		else if( board[gx][gy] == 1 )	//On to off
			board[gx][gy] = 0;

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

		//Ask if user is done
		printf("Are you finished? (0 = No, 1 = Yes): ");
		scanf("%d", &fin);
		printf("-----------------\n");
	}
}