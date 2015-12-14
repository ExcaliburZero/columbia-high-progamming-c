//Chris Wells 2015
//956335
//December 03, 2014
//string1.c
//Purpose: To introduce string functions.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

//Begin main function
void main()
{
	char	s1[20] = "Hello World!";	//Initialized string variable
	char	s2[20] = "Computer ";		//Initialized string variable
	char	s3[20] = "Programming";		//Initialized string variable

	int	length;	//Declare variable to store length of s1
	int	a;

	//Length
	length = strlen(s1);
	printf("The length of s1 is %d\n", length);

	//Concatination
	strcat(s2, s3);
	printf("\n%s", s2);

	//Concatination
	strcat(s2, " Rocks!");
	printf("\n%s", s2);

	//Copy
	strcpy(s1, "wicked");
	printf("\n%s", s1);

	//Copyn
	strncpy(s3, s2, 4);
	printf("\n%s", s3);

	//Compairison
	a = strcmp(s1, "wicked");
	printf("\n%d", a);
}