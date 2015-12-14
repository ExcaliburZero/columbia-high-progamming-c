//Chris Wells 2015
//956335
//December 01, 2014
//sales.c
//Purpose: To find the number of salespeople to get in certain salary ranges.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Begin main function
void main()
{
	int	ranges[9] = {0};	//Initialize array to store the number of salespeople in each range
	int	curSale;		//Declare integer to stroe the sales of the current salesperson
	int	curTotal;		//Initialize variable to store the total weekly salary for the current salesperson
	int	cont = 1;		//Initialize variable to store whether the user would like to contune entering sales amounts or not
	int	numPref = 199;		//Initialize variable to be used in the printing of the range lables
	int	i;			//Initialize counter variable

	//Clear screen and print divider
	clrscr();
	printf("----------\n");

	//Main loop to add salespeople
	while( cont == 1 )
	{
		//Request sales from user
		curSale = -3;
		while( curSale < 0 )
		{
			printf("Sales:\t");
			scanf("%d", &curSale);
		}

		//Calculate curTotal for current salesperson
		curTotal = 200 + ( 0.09 * curSale );
		printf("Salary:\t%d\n", curTotal);

		//Mark salary on array of salary ranges
		if( curTotal <= 299 )	//200-299
		{
			ranges[0] += 1;
		}
		else if( curTotal <= 399 )	//300-399
		{
			ranges[1] += 1;
		}
		else if( curTotal <= 499 )	//400-499
		{
			ranges[2] += 1;
		}
		else if( curTotal <= 599 )	//500-599
		{
			ranges[3] += 1;
		}
		else if( curTotal <= 699 )	//600-699
		{
			ranges[4] += 1;
		}
		else if( curTotal <= 799 )	//700-799
		{
			ranges[5] += 1;
		}
		else if( curTotal <= 899 )	//800-899
		{
			ranges[6] += 1;
		}
		else if( curTotal <= 999 )	//900-999
		{
			ranges[7] += 1;
		}
		else				//1000 and over
		{
			ranges[8] += 1;
		}

		//Print divider
		printf("----------\n");

		//Request if user would like to continue
		printf("Continue? (1 = yes, 0 = no) ");
		scanf("%d", &cont);

		//Print 2 dividers
		printf("----------\n");
		printf("----------\n");
	}

	//Print out count of salaries in ranges
	//200 - 999
	for( i = 0; i <= 7; i += 1 )
	{
		//First number
		numPref += 1;
		printf("%d - ", numPref);

		//Second number
		numPref += 99;
		printf("%d:\t", numPref);

		//Count
		printf("%d\n", ranges[i]);
	}

	//1000 and over
	printf("1000+    :\t%d\n", ranges[i]);

	//Print divider
	printf("----------\n");
}