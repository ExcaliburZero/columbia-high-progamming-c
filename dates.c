//Chris Wells 2015
//956335
//December 15, 2014
//dates.c
//Purpose: To convert number dates mm/dd/yyyy to text dates.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

//Begin main function
void main()
{
	char	input[11];		//Declare string input variable
	char	output[20];		//Declare string output variable
	int	month, day, year;	//Declare variables to stroe the numerical month day and year
	char	smonth[10];		//Declare string to store the name of the month
	int	bad = 0;		//Initialize variable to store wether the dates are real or not

	//Request number date from user
	input[0] = '0';
	while(strlen(input) != 10)
	{
		printf("Please enter the wanted date (mm/dd/yyyy): ");
		scanf("%s", &input);
	}

	//Convert inputted information into seperate variables
	month = ((input[0] - '0') * 10) + input[1] - '0';
	day = ((input[3] - '0') * 10) + input[4] - '0';
	year = ((input[6] - '0') * 1000) + ((input[7] - '0') * 100) + ((input[8] - '0') * 10) + input[9] - '0';

	//Check month
	switch(month)
	{
		case 1:
			strcpy(smonth, "January");
			break;
		case 2:
			strcpy(smonth, "February");
			break;
		case 3:
			strcpy(smonth, "March");
			break;
		case 4:
			strcpy(smonth, "April");
			break;
		case 5:
			strcpy(smonth, "May");
			break;
		case 6:
			strcpy(smonth, "June");
			break;
		case 7:
			strcpy(smonth, "July");
			break;
		case 8:
			strcpy(smonth, "August");
			break;
		case 9:
			strcpy(smonth, "September");
			break;
		case 10:
			strcpy(smonth, "October");
			break;
		case 11:
			strcpy(smonth, "November");
			break;
		case 12:
			strcpy(smonth, "December");
			break;
		default:
			bad = 1;
			break;
	}

	//Check day
	switch(month)
	{
		case 1, 3, 5, 7, 8, 10:
			if( day > 31 )
				bad = 1;
			break;
		case 4, 6, 9, 11:
			if( day > 30 )
				bad = 1;
			break;
		case 2:
			if( (year % 4) == 0 )
			{
				if( day > 29 )
					bad = 1;
			}
			else
			{
				if( day > 28 )
					bad = 1;
			}
			break;
	}

	//If the date is real, then print it out
	if( bad == 0 )
	{
		printf("\n%s ", smonth);
		printf("%d, ", day);
		printf("%d", year);
	}
	else
	{
		printf("The date you entered is either not a real date, or was entered incorrectly.");
	}
}
