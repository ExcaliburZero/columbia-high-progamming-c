//Chris Wells 2015
//956335
//October 10, 2014
//days_until.c
//Purpose: To find the number of days from a specified date until another specified date.

#include <stdio.h>

//Begin main function
void main()
{
	int	sDay = 0, sMonth = 0, sYear, eDay = 0, eMonth = 0;	//Initialize integer variables to store the starting day, month, and year, and the variables to store the ending day and month
	int	until = 0;	//Initialize integer variable to store the number of days until the specified date
	int	monLim;	//Declare integer variable to store max number of days in month

	//
	//Request the current or starting date from the user
	//

	//Request starting year
	printf("Please enter the starting year: ");
	scanf("%d", &sYear);

	//Request starting month
	while( ( sMonth > 12 ) || ( sMonth < 1 ) )
	{
		printf("Please enter the starting month: ");
		scanf("%d", &sMonth);
	}

	//Month has 31 days
	if( ( sMonth == 1 ) || ( sMonth == 3 ) || ( sMonth == 5 ) || ( sMonth == 7 ) || ( sMonth == 8 ) || ( sMonth == 10 ) || ( sMonth == 12 ) )
		monLim = 31;

	//Month has 30 days
	if( ( sMonth == 4 ) || ( sMonth == 6 ) || ( sMonth == 9 ) || ( sMonth == 11 ) )
		monLim = 30;

	//If month is February
	if( ( sMonth == 2 ) )
	{
		//If leap year
		if( ( sYear % 4 ) == 0 )
			monLim = 29;
		else	//If not a leap year
			monLim = 28;
	}

	//Request starting day
	while( ( sDay > monLim ) || ( sDay < 1 ) )
	{
		printf("Please enter the starting day: ");
		scanf("%d", &sDay);
	}

	//
	//Request the ending date from the user
	//

	//Request ending month
	while( ( eMonth > 12 ) || ( eMonth < 1 ) )
	{
		printf("Please enter the ending month: ");
		scanf("%d", &eMonth);
	}
	//Month has 31 days
	if( ( eMonth == 1 ) || ( eMonth == 3 ) || ( eMonth == 5 ) || ( eMonth == 7 ) || ( eMonth == 8 ) || ( eMonth == 10 ) || ( eMonth == 12 ) )
		monLim = 31;

	//Month has 30 days
	if( ( eMonth == 4 ) || ( eMonth == 6 ) || ( eMonth == 9 ) || ( eMonth == 11 ) )
		monLim = 30;

	//If month is February
	if( ( eMonth == 2 ) )
	{
		//If leap year
		if( ( sYear % 4 ) == 0 )
			monLim = 29;
		else	//If not a leap year
			monLim = 28;
	}

	//Request ending day
	while( ( eDay > monLim ) || ( eDay < 1 ) )
	{
		printf("Please enter the ending day: ");
		scanf("%d", &eDay);
	}

	//Calculate the number of days between the specified dates
	if( ( sMonth < eMonth ) || ( ( sMonth == eMonth ) && ( sDay < eDay ) ) )	//If end date is after starting date
	{
		//If different months
		while( sMonth != eMonth )
		{
			//If month has 31 days
			if( ( sMonth == 1 ) || ( sMonth == 3 ) || ( sMonth == 5 ) || ( sMonth == 7 ) || ( sMonth == 8 ) || ( sMonth == 10 ) || ( sMonth == 12 ) )
			{
				until += 31;
			}
			//If month has 30 days
			if( ( sMonth == 4 ) || ( sMonth == 6 ) || ( sMonth == 9 ) || ( sMonth == 11 ) )
			{
				until += 30;
			}
			//If month is February
			if( ( sMonth == 2 ) )
			{
				//If leap year
				if( ( sYear % 4 ) == 0 )
					until += 29;
				else	//If not a leap year
					until += 28;
			}

			//Set to next month between sMonth and eMonth
			sMonth += 1;
		}

		//If same month
		if( ( sMonth == eMonth ) )
		{
			until += eDay - sDay;
		}
	}
	else	//If end date is before starting date
	{
		//If different months
		while( eMonth != sMonth )
		{
			//If month has 31 days
			if( ( eMonth == 1 ) || ( eMonth == 3 ) || ( eMonth == 5 ) || ( eMonth == 7 ) || ( eMonth == 8 ) || ( eMonth == 10 ) || ( eMonth == 12 ) )
			{
				until -= 31;
			}
			//If month has 30 days
			if( ( eMonth == 4 ) || ( eMonth == 6 ) || ( eMonth == 9 ) || ( eMonth == 11 ) )
			{
				until -= 30;
			}
			//If month is February
			if( ( eMonth == 2 ) )
			{
				//If leap year
				if( ( sYear % 4 ) == 0 )
					until -= 29;
				else	//If not a leap year
					until -= 28;
			}

			//Set to next month between sMonth and eMonth
			eMonth += 1;
		}

		//If same month
		if( ( sMonth == eMonth ) )
		{
			until += eDay - sDay;
		}
	}

	//Print out how many days are until the ending date to the user
	if( until > 0 )	//Ending date is after staring date
		printf("There are %d days until that date.", until);

	else if( until < 0 )	//Ending date is before staring date
	{
		printf("That date has already passed.\n");
		until = until * (-1);
		printf("It was %d days ago.", until);
	}

	else if( until == 0 )	//Ending date is the same as staring date
		printf("The entered dates are the same.");
}