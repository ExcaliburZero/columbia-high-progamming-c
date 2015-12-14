//Chris Wells 2015
//956335
//January 05, 2015
//hangman.c
//Purpose: To simulate a game of hangman.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

//Begin main function
void main()
{
	char	word[7];			//Declare string to store the word
	char	wordList[4][6] = {		//Declare 2d array to store the potential words
	{'G','O','O','G','L','E'} ,
	{'O','N','L','I','N','E'} ,
	{'S','Y','S','T','E','M'} ,
	{'U','P','L','O','A','D'} ,
	};
	char	correct[7] = "******";		//Initialize string to store the letters of the word that have been guessed 
	char	previous[20] = "";		//Declare string to store the letters that the user has already guessed
	char	prevCount = 0;			//Initialize variable to store the next position to write to in the "previous" string
	char	letter;				//Declare character variable to store the letter that the user guesses
	char	theme[20] = "Computer Terms";	//Initialize string to store the theme
	int	wordLocation;			//Declare variable to store the location of the word on the word list
	int	trans;				//Declare variable to be used in the trannfsering of a word from the word list
	int	cont = 1;			//Initialize variable to store whether or not to continue the main while loop
	int	incGuesses = 7;			//Initialize a variable to store the number of incorrect guesses remaining
	char	clear;				//Declare variable to use to remove excess newline characters created by getchar()
	int	check;				//Declare counter variable to be used in the checking of letters
	int	repeat;				//Declare variable to store if a letter has been repeated or not
	int	appear;				//Declare variable to store whether or not the letter the user entered appears in the word
	int	remaining;			//Declare variable to store how many letters there are remaining to be guessed
	int	winLose = 0;			//Declare variable to store whether the user won or lost the game (1 = win, 2 = lose)
	int	printHangr;			//Declare variable to be used in the printing of the hangman image (rows)
	int	printHangc;			//Declare variable to be used in the printing of the hangman image (columns)

	//Initialize character arrays to store hangman
	char	hang1[7][7] = {
	{'1','1','1','1',' ',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1','1','1','1','1','1','1'} ,
	};
	char	hang2[7][7] = {
	{'1','1','1','1',' ',' ',' '} ,
	{'1',' ',' ','1',' ',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1','1','1','1','1','1','1'} ,
	};
	char	hang3[7][7] = {
	{'1','1','1','1',' ',' ',' '} ,
	{'1',' ',' ','1',' ',' ',' '} ,
	{'1',' ',' ','@',' ',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1','1','1','1','1','1','1'} ,
	};
	char	hang4[7][7] = {
	{'1','1','1','1',' ',' ',' '} ,
	{'1',' ',' ','1',' ',' ',' '} ,
	{'1',' ',' ','@',' ',' ',' '} ,
	{'1',' ',' ','|',' ',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1','1','1','1','1','1','1'} ,
	};
	char	hang5[7][7] = {
	{'1','1','1','1',' ',' ',' '} ,
	{'1',' ',' ','1',' ',' ',' '} ,
	{'1',' ',' ','@',' ',' ',' '} ,
	{'1',' ','-','|',' ',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1','1','1','1','1','1','1'} ,
	};
	char	hang6[7][7] = {
	{'1','1','1','1',' ',' ',' '} ,
	{'1',' ',' ','1',' ',' ',' '} ,
	{'1',' ',' ','@',' ',' ',' '} ,
	{'1',' ','-','|','-',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1','1','1','1','1','1','1'} ,
	};
	char	hang7[7][7] = {
	{'1','1','1','1',' ',' ',' '} ,
	{'1',' ',' ','1',' ',' ',' '} ,
	{'1',' ',' ','@',' ',' ',' '} ,
	{'1',' ','-','|','-',' ',' '} ,
	{'1',' ','~',' ',' ',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1','1','1','1','1','1','1'} ,
	};
	char	hang8[7][7] = {
	{'1','1','1','1',' ',' ',' '} ,
	{'1',' ',' ','1',' ',' ',' '} ,
	{'1',' ',' ','@',' ',' ',' '} ,
	{'1',' ','-','|','-',' ',' '} ,
	{'1',' ','~',' ','~',' ',' '} ,
	{'1',' ',' ',' ',' ',' ',' '} ,
	{'1','1','1','1','1','1','1'} ,
	};

	//Set random seed
	srand(time(NULL));

	//Choose a word from the list of words
	wordLocation = rand() % 4;

	for( trans = 0; trans < 6; trans += 1 )
	{
		word[trans] = wordList[wordLocation][trans];
	}

	//Begin while loop to allow user to try to guess the word
	while( cont == 1 )
	{
		//Clear screen
		clrscr();

		//Print out the theme of the word
		printf("Theme:\n\t%s\n", theme);

		//Print out the letters of the word that have been guessed
		printf("\n\t    %s\n\n", correct);

		//Print out hangman
		printf("\t");
		for( printHangr = 0; printHangr < 7; printHangr += 1 )
		{
			for( printHangc = 0; printHangc < 7; printHangc += 1 )
			{
				switch( incGuesses )
				{
					case 7:
						printf("%c ", hang1[printHangr][printHangc]);
						break;
					case 6:
						printf("%c ", hang2[printHangr][printHangc]);
						break;
					case 5:
						printf("%c ", hang3[printHangr][printHangc]);
						break;
					case 4:
						printf("%c ", hang4[printHangr][printHangc]);
						break;
					case 3:
						printf("%c ", hang5[printHangr][printHangc]);
						break;
					case 2:
						printf("%c ", hang6[printHangr][printHangc]);
						break;
					case 1:
						printf("%c ", hang7[printHangr][printHangc]);
						break;
					case 0:
						printf("%c ", hang8[printHangr][printHangc]);
						break;
				}
			}

			printf("\n\t");
		}
		printf("\n");

		//Print out the letters that have already been guessed
		printf("Previous Guesses:\n\t%s\n", previous);

		//Print out the number of incorrect guesses remaining
		printf("\nIncorrect Guesses Remaining: %d\n\n", incGuesses);

		//Request a letter from the user
		letter = '1';
		while( isalpha(letter) == 0 )
		{
			printf("Your guess: ");
			letter = getchar();
			clear = getchar();
		}
		letter = toupper(letter);

		//
		//Check the entered letter against all the letters in the word and the letters that have already been guessed
		//

		//Check if the letter has already been entered and then add it to the list of previously entered letters
		repeat = 0;
		for( check = 0; check < 20; check += 1 )
		{
			if( letter == previous[check] )
			{
				repeat = 1;
			}
		}
		previous[prevCount] = letter;
		prevCount += 1;

		//If letter has already been entered
		if( repeat == 1 )
		{
			printf("\nYou have already entered that letter. That counts as an incorrect guess.\n");
			incGuesses -= 1;
		}

		//If not, then check if letter appears in word
		else
		{
			appear = 0;
			for( check = 0; check < 6; check += 1 )
			{
				//If so, then reveal the letter
				if( letter == word[check] )
				{
					correct[check] = word[check];
					appear += 1;
				}
			}

			//If the letter appears in the word
			if( appear > 0 )
			{
				printf("\nThat letter appears in the word %d time(s).\n", appear);
			}

			//If the letter does not appear in the word
			else
			{
				printf("\nSorry. That letter is not in the word.\n");
				incGuesses -= 1;
			}
		}

		//See how many letters in the world have not been guessed yet
		remaining = 0;
		for( check = 0; check < 6; check += 1 )
		{
			if( correct[check] == '*' )
			{
				remaining += 1;
			}
		}

		//Check if word has been entirely guessed
		if( remaining == 0 )
		{
			winLose = 1;
			cont = 0;
		}

		//Else, check if there are no guesses remaining
		else if( incGuesses == 0 )
		{
			winLose = 2;
			cont = 0;
		}

		//Sleep for a while
		sleep((unsigned int)2);
	}

	//If user won
	if( winLose == 1 )
	{
		//Clear screen
		clrscr();

		//Print out the theme of the word
		printf("Theme:\n\t%s\n", theme);

		//Print out the letters of the word that have been guessed
		printf("\n\t    %s\n\n", correct);

		//Print out hangman
		printf("\t");
		for( printHangr = 0; printHangr < 7; printHangr += 1 )
		{
			for( printHangc = 0; printHangc < 7; printHangc += 1 )
			{
				switch( incGuesses )
				{
					case 7:
						printf("%c ", hang1[printHangr][printHangc]);
						break;
					case 6:
						printf("%c ", hang2[printHangr][printHangc]);
						break;
					case 5:
						printf("%c ", hang3[printHangr][printHangc]);
						break;
					case 4:
						printf("%c ", hang4[printHangr][printHangc]);
						break;
					case 3:
						printf("%c ", hang5[printHangr][printHangc]);
						break;
					case 2:
						printf("%c ", hang6[printHangr][printHangc]);
						break;
					case 1:
						printf("%c ", hang7[printHangr][printHangc]);
						break;
					case 0:
						printf("%c ", hang8[printHangr][printHangc]);
						break;
				}
			}

			printf("\n\t");
		}
		printf("\n");

		//Print out the letters that have already been guessed
		printf("Previous Guesses:\n\t%s\n", previous);

		//Print out the number of incorrect guesses remaining
		printf("\nIncorrect Guesses Remaining: %d\n\n", incGuesses);

		printf("\tYou won!\n");
	}

	//If user lost
	else
	{
		//Clear screen
		clrscr();

		//Print out the theme of the word
		printf("Theme:\n\t%s\n", theme);

		//Print out the letters of the word that have been guessed
		printf("\n\t    %s\n\n", correct);
		printf("\t    %s\n\n", word);

		//Print out hangman
		printf("\t");
		for( printHangr = 0; printHangr < 7; printHangr += 1 )
		{
			for( printHangc = 0; printHangc < 7; printHangc += 1 )
			{
				switch( incGuesses )
				{
					case 7:
						printf("%c ", hang1[printHangr][printHangc]);
						break;
					case 6:
						printf("%c ", hang2[printHangr][printHangc]);
						break;
					case 5:
						printf("%c ", hang3[printHangr][printHangc]);
						break;
					case 4:
						printf("%c ", hang4[printHangr][printHangc]);
						break;
					case 3:
						printf("%c ", hang5[printHangr][printHangc]);
						break;
					case 2:
						printf("%c ", hang6[printHangr][printHangc]);
						break;
					case 1:
						printf("%c ", hang7[printHangr][printHangc]);
						break;
					case 0:
						printf("%c ", hang8[printHangr][printHangc]);
						break;
				}
			}

			printf("\n\t");
		}
		printf("\n");

		//Print out the letters that have already been guessed
		printf("Previous Guesses:\n\t%s\n", previous);

		//Print out the number of incorrect guesses remaining
		printf("\nIncorrect Guesses Remaining: %d\n\n", incGuesses);

		printf("\tYou lost!\n");
	}
}