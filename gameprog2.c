//Chris Wells 2015
//956335
//October 03, 2014
//gameprog2.c
//Purpose: To move a value across an array.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

//Declare global variables
int	boardWidth = 9, boardHeight = 9;	//Set the width and height of board
int	board[9][9] = {	//Declare board array filled with zeros
	{0,0,0,0,0,0,0,0,0} ,
	{0,1,0,0,0,0,0,0,0} ,
	{2,2,2,0,0,0,0,2,3} ,
	{0,0,0,2,2,2,2,2,2} ,
	{0,0,0,0,0,0,0,0,2} ,
	{0,0,0,0,0,0,0,0,2} ,
	{0,0,0,0,0,0,0,0,2} ,
	{0,0,0,0,0,0,0,0,2} ,
	{2,2,2,2,2,2,2,2,2}
};
int	score = 0;	//Initialize score integer variable
int	moves = 0;	//Initialize variable to store the number of moves made

//~~~~~~~~~Game Variables~~~~~~~~~~

//Difficulty related global variables
int	befWallMv = 4;	//Number of points needed before walls randomly move once per point gained
int	wallAdd = 4;	//For every n points add one new random wall
int	wallRem = 6;	//Cost to remove one wall

//Board draw icon variables
char	draw0 = ' ';
char	draw1 = '1';
char	draw2 = '#';
char	draw3 = '*';
char	drawBoarderSide = '|';
char	drawBoarderTB = '-';

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//Debuging functions

//Debug integer value function
void debugint( int value, char name[1000] )
{
	printf("%s: %d\n", name, value);
}

//Debug string value function
void debugstr( char value[1000], char name[1000] )
{
	printf("%s: %s\n", name, value);
}

//Method to print the board
void printBoard()
{
	int	i, i2 = 0;	//Initialize and declare counter variables

	//Ready console
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	//Save current attributes
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	//Print a divider
	SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
	printf("%c", drawBoarderSide);
	SetConsoleTextAttribute(hConsole, saved_attributes);

	for( i = 0; i < boardWidth * 2 + 1; i += 1 )
	{
			SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
			printf("%c", drawBoarderTB);
			SetConsoleTextAttribute(hConsole, saved_attributes);
	}

	SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
	printf("%c\n%c ", drawBoarderSide, drawBoarderSide);
	SetConsoleTextAttribute(hConsole, saved_attributes);

	//Reset counter variable
	i = 0;

	while(i < boardHeight)
	{
		//printf("%d ", board[i][i2]);

		//Print out the contents of the position
		if(board[i][i2] == 0)	//Empty space
		{
			SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
			printf("%c ", draw0);
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}
		else if(board[i][i2] == 1)	//Player
		{
			SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
			printf("%c ", draw1);
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}
		else if(board[i][i2] == 2)	//Wall
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
			printf("%c ", draw2);
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}
		else if(board[i][i2] == 3)	//Point+1 Object
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
			printf("%c ", draw3);
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}

		//Increase counter variable
		i2 = i2 + 1;

		SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);

		if(i2 > (boardWidth - 1))
		{
			i2 = 0;
			i = i + 1;
			if(i < boardHeight - 0)
				printf("%c\n%c ", drawBoarderSide, drawBoarderSide);
			else
				printf("%c\n%c", drawBoarderSide, drawBoarderSide);
		}

		SetConsoleTextAttribute(hConsole, saved_attributes);
	}

	SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);

	//Print a divider
	for( i = 0; i < boardWidth * 2 + 1; i += 1 )
	{
		printf("%c", drawBoarderTB);
	}
	printf("%c\n", drawBoarderSide, drawBoarderSide);

	SetConsoleTextAttribute(hConsole, saved_attributes);
}

//Method to check spaces of the board
int checkSpace(int x, int y)
{
	//The point is on the board
	if((x >= 0) && (y >= 0) && (x < boardWidth) && (y < boardHeight))
	{
		//There is nothing at specified space
		if((board[x][y] == 0))
		{
			return 0;
		}
		//There is a wall at the space
		else if(board[x][y] == 2)
		{
			return 2;
		}
		//There is a point at the space
		else if(board[x][y] == 3)
		{
			return 3;
		}
		else
			return 1;
	}
	else
		return 1;
}

//Method to place an object randmly on the board in a non-occupied position
void placeObj(int obj)
{
	int	posx, posy;	//Initialize variable to store the coordinates of the new object

	//Run code to set random number seed
	srand(time(NULL));

	//Find a random position on the board
	posx = rand() % boardWidth;
	posy = rand() % boardHeight;

	//Find a random open position on the board
	while( checkSpace(posx, posy) != 0 )
	{
		posx = rand() % boardWidth;
		posy = rand() % boardHeight;
	}

	//Place the specified object on the random position
	board[posx][posy] = obj;	
}

//Function to remove a random object of a specific type from the board
void removeObj(int obj)
{
	int	posx, posy;	//Initialize variable to store the coordinates of the new object

	//Run code to set random number seed
	srand(time(NULL));

	//Find a random position on the board
	posx = rand() % boardWidth;
	posy = rand() % boardHeight;

	//Find a random object of the specified type on the board
	while( checkSpace(posx, posy) != obj )
	{
		posx = rand() % boardWidth;
		posy = rand() % boardHeight;
	}

	//Remove the specified object on the random position
	board[posx][posy] = 0;
}

//Function to record score and moves onto a file
void recordScore()
{
	FILE *fp;
	time_t now;
	time(&now);

	fp = fopen("gameprog2_score.txt", "a+");
	fprintf(fp, "%s\tScore: %d\tMoves: %d\n\n", ctime(&now), score, moves);
	fclose(fp);

}

//Begin main method
void main()
{
	int	offval = 0, onval = 1;	//Set the on and off cell variables

	char	mv;	//Declare move direction variable
	int	objx = 1, objy = 1;	//Initialize object position
	int	newx = objx, newy = objy;	//Declare integer variables to store positions to be checked
	int	fin = 0;	//Initialize finished variable

	//Print board
	printBoard();

	while( fin == 0 )
	{

		//Request a direction from user
		for( mv = 0; (mv < 48) || (mv > 57) && (mv != 119) && (mv != 115) && (mv != 97) && (mv != 100); )
		{
			printf("Please enter a direction digit (1-4,6-9, 0 = End): ");
			scanf(" %c", &mv);
		}

		//Set the newx and newy
		if( mv == 52 )	//4
		{
			newy = objy - 1;
			//board[objx][objy - 1] = onval;
			//objy = objy - 1;
		}
		else if( mv == 54 )	//6
		{
			newy = objy + 1;
			//board[objx][objy + 1] = onval;
			//objy = objy + 1;
		}
		else if( mv == 56 )	//8
		{
			newx = objx - 1;
			//board[objx - 1][objy] = onval;
			//objx = objx - 1;
		}
		else if( mv == 50 )	//2
		{
			newx = objx + 1;
			//board[objx + 1][objy] = onval;
			//objx = objx + 1;
		}
		else if( mv == 55 )	//7
		{
			newx = objx - 1;
			newy = objy - 1;
			//board[objx - 1][objy - 1] = onval;
			//objx = objx - 1;
			//objy = objy - 1;
		}
		else if( mv == 51 )	//3
		{
			newx = objx + 1;
			newy = objy + 1;
			//board[objx + 1][objy + 1] = onval;
			//objx = objx + 1;
			//objy = objy + 1;
		}
		else if( mv == 49 )	//1
		{
			newx = objx + 1;
			newy = objy - 1;
			//board[objx + 1][objy - 1] = onval;
			//objx = objx + 1;
			//objy = objy - 1;
		}
		else if( mv == 57 )	//9
		{
			newx = objx - 1;
			newy = objy + 1;
			//board[objx - 1][objy + 1] = onval;
			//objx = objx - 1;
			//objy = objy + 1;
		}
		else if( mv == 48)	//0
		{
			fin = 1;

			//Record score
			recordScore();
		}
		else if( mv == 119 )	//w Up remove wall
		{
			if( ( checkSpace(objx - 1, objy) == 2 ) && ( score >= wallRem ) )
			{
				board[objx - 1][objy] = offval;
				score -= wallRem;
			}
			
		}
		else if( mv == 115 )	//s Down remove wall
		{
			if( ( checkSpace(objx + 1, objy) == 2 ) && ( score >= wallRem ) )
			{
				board[objx + 1][objy] = offval;
				score -= wallRem;
			}
			
		}
		else if( mv == 97 )	//a Left remove wall
		{
			if( ( checkSpace(objx, objy - 1) == 2 ) && ( score >= wallRem ) )
			{
				board[objx][objy - 1] = offval;
				score -= wallRem;
			}
			
		}
		else if( mv == 100 )	//d Right remove wall
		{
			if( ( checkSpace(objx, objy + 1) == 2 ) && ( score >= wallRem ) )
			{
				board[objx][objy + 1] = offval;
				score -= wallRem;
			}
			
		}

		//Check gravity
		while( ( checkSpace(newx + 1, newy) == 0 ) || ( checkSpace(newx + 1, newy) == 3 ) )
		{
			//If point at position
			if( checkSpace(newx, newy) == 3 )
			{
				//Turn off point object
				board[newx][newy] = offval;

				//Increase score by 1
				score += 1;

				//Place an new Point+1 Object
				placeObj(3);
			}

			newx += 1;
		}

		//Check the new position and act accordingly
		if( checkSpace(newx, newy) == 0 )	//Space is empty
		{
			//Turn off the current position
			board[objx][objy] = offval;

			//Turn on new position
			objx = newx;
			objy = newy;
			board[objx][objy] = onval;

			//Increase moves by 1
			moves += 1;
		}
		else if( checkSpace(newx, newy) == 3 )
		{
			//Turn off the current position
			board[objx][objy] = offval;

			//Turn on new position
			objx = newx;
			objy = newy;
			board[objx][objy] = onval;

			//Increase moves by 1
			moves += 1;

			//Increase score by 1
			score += 1;

			//Place an new Point+1 Object
			placeObj(3);

			//If score is greater than 10 move a wall to a random space
			if( score > befWallMv )
			{
				removeObj(2);
				placeObj(2);
			}

			//Every 4 points add a new wall
			if( (score % wallAdd) == 0 )
			{
				placeObj(2);
			}
		}
		else	//Space is not walkable
		{
			newx = objx;
			newy = objy;
		}

		//Print the board
		clrscr();
		printBoard();

		//Print current position
		printf("(%d, %d) ", objx, objy);

		//Print score and moves variables
		printf("Score: %d ", score);
		printf("Moves: %d\n", moves);
	}
}