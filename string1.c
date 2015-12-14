//Chris Wells 2015
//956335
//December 03, 2014
//string1.c
//Purpose: To introduce strings.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

//Begin main function
void main()
{
	char	b, h[100];	//Declare character and string variables
	int	count = 0;	//Initialize counter variable

	//Ask the user to input a sentence
	printf("Please enter a sentence (less than 100 characters long): ");

	//Get sentence from user
	while( ( ( b = getchar() ) != '\n' ) && ( count < 100 ) )
	{
		h[count] = b;
		count += 1;
	}
	h[count] = '\0';

	//Print out the entered sentence
	printf("\n\n%s", h);
}