//Chris Wells 2015
//956335
//December 15, 2014
//checks.c
//Purpose: To change a numerical check amount into a text check amount.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//Begin main function
void main()
{
	float	input;		//Declare float variable to store the entered number
	int	val;		//Declare variable to use when checking the number of value in a certain numeral place
	int	teen = 0;	//Declare variable to handle situations where the tens place is one

	//Request number input from user
	for( input = -1; input <= 0; )
	{
		printf("Please enter the numerical check amount: ");
		scanf("%f", &input);
	}

	//Print divider
	printf("--------------------\n");

	//Ten Thousands
	if( input > 9999 )
	{
		//Set val to digit in specific place
		val = floor(input / 10000);

		//Check the digit and print it out in text form
		switch( val )
		{
			case 1:
				teen = 10000;
				break;
			case 2:
				printf("TWENTY ");
				break;
			case 3:
				printf("THIRTY ");
				break;
			case 4:
				printf("FOURTY ");
				break;
			case 5:
				printf("FIFTY ");
				break;
			case 6:
				printf("SIXTY ");
				break;
			case 7:
				printf("SEVENTY ");
				break;
			case 8:
				printf("EIGHTY ");
				break;
			case 9:
				printf("NINETY ");
				break;
		}

		//Reduce input down
		input -= val * 10000;
	}

	//Thousands
	if( input > 999 )
	{
		//Set val to digit in specific place
		val = floor(input / 1000);

		

		//If teens
		if( teen != 0 )
		{
			//Check the digit and print it out in text form
			switch( val )
			{
				case 1:
					printf("ELEVEN");
					break;
				case 2:
					printf("TWELVE");
					break;
				case 3:
					printf("THIRTEEN");
					break;
				case 4:
					printf("FOURTEEN");
					break;
				case 5:
					printf("FIFTEEN");
					break;
				case 6:
					printf("SIXTEEN");
					break;
				case 7:
					printf("SEVENTEEN");
					break;
				case 8:
					printf("EIGHTEEN");
					break;
				case 9:
					printf("NINETEEN");
					break;
				case 0:
					printf("TEN");
					break;
			}
		}
		//If not teens
		else if( teen == 0 )
		{
			//Check the digit and print it out in text form
			switch( val )
			{
				case 1:
					printf("ONE");
					break;
				case 2:
					printf("TWO");
					break;
				case 3:
					printf("THREE");
					break;
				case 4:
					printf("FOUR");
					break;
				case 5:
					printf("FIVE");
					break;
				case 6:
					printf("SIX");
					break;
				case 7:
					printf("SEVEN");
					break;
				case 8:
					printf("EIGHT");
					break;
				case 9:
					printf("NINE");
					break;
			}
		}
		printf(" THOUSAND ");

		//Reduce input down
		input -= val * 1000;

		//Reset teen
		teen = 0;
	}

	//Hundreds
	if( input > 99 )
	{
		//Set val to digit in specific place
		val = floor(input / 100);

		//Check the digit and print it out in text form
		switch( val )
		{
			case 1:
				printf("ONE HUNDRED");
				break;
			case 2:
				printf("TWO HUNDRED");
				break;
			case 3:
				printf("THREE HUNDRED");
				break;
			case 4:
				printf("FOUR HUNDRED");
				break;
			case 5:
				printf("FIVE HUNDRED");
				break;
			case 6:
				printf("SIX HUNDRED");
				break;
			case 7:
				printf("SEVEN HUNDRED");
				break;
			case 8:
				printf("EIGHT HUNDRED");
				break;
			case 9:
				printf("NINE HUNDRED");
				break;
		}
		printf(" ");

		//Reduce input down
		input -= val * 100;
	}

	//Tens
	if( input > 9 )
	{
		//Set val to digit in specific place
		val = floor(input / 10);

		//Check the digit and print it out in text form
		switch( val )
		{
			case 1:
				teen = 10;
				break;
			case 2:
				printf("TWENTY ");
				break;
			case 3:
				printf("THIRTY ");
				break;
			case 4:
				printf("FOURTY ");
				break;
			case 5:
				printf("FIFTY ");
				break;
			case 6:
				printf("SIXTY ");
				break;
			case 7:
				printf("SEVENTY ");
				break;
			case 8:
				printf("EIGHTY ");
				break;
			case 9:
				printf("NINETY ");
				break;
		}

		//Reduce input down
		input -= val * 10;
	}

	//Ones
	if( input >= 0 )
	{
		//Set val to digit in specific place
		val = floor(input / 1);

		//If teens
		if( teen != 0 )
		{
			//Check the digit and print it out in text form
			switch( val )
			{
				case 1:
					printf("ELEVEN");
					break;
				case 2:
					printf("TWELVE");
					break;
				case 3:
					printf("THIRTEEN");
					break;
				case 4:
					printf("FOURTEEN");
					break;
				case 5:
					printf("FIFTEEN");
					break;
				case 6:
					printf("SIXTEEN");
					break;
				case 7:
					printf("SEVENTEEN");
					break;
				case 8:
					printf("EIGHTEEN");
					break;
				case 9:
					printf("NINETEEN");
					break;
				case 0:
					printf("TEN");
					break;
			}
		}
		//If not teens
		else if( teen == 0 )
		{
			//Check the digit and print it out in text form
			switch( val )
			{
				case 1:
					printf("ONE");
					break;
				case 2:
					printf("TWO");
					break;
				case 3:
					printf("THREE");
					break;
				case 4:
					printf("FOUR");
					break;
				case 5:
					printf("FIVE");
					break;
				case 6:
					printf("SIX");
					break;
				case 7:
					printf("SEVEN");
					break;
				case 8:
					printf("EIGHT");
					break;
				case 9:
					printf("NINE");
					break;
			}
		}

		printf(" ");

		//Reduce input down
		input -= val * 1;
	}

	//Cents
	if( input >= 0 )
	{
		//Set val to cents
		val = floor((input + 0.001) / 0.01);

		printf("and %d/100", val);
	}

	//Print divider
	printf("\n--------------------");
}