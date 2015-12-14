//Chris Wells 2015
//956335
//October 09, 2014
//perfect.c
//Purpose: To find all the perfect numbers between 1 and 10,000.

#include <stdio.h>

//Begin main function
void main()
{
	int	num, curnum, total;	//Declare variables to store number, curently compairing number, and total
	int	isPer;	//Declare variable to store whether num is perfect (0 = no, 1 = yes)

	num = 2;	//Set num to two

	//Find prime numbers and print them
	while( num < 10000 )
	{
		//Set isPer and total to zero
		isPer = 0;
		total = 0;

		//Set curnum to 1 in order to start while loop
		curnum = 1;

		//Find the factors of the number and total them
		while( curnum < num )
		{
			//Check if curnum is a factor, and if so then add it to the total
			if( ( num % curnum ) == 0 )
				total = total + curnum;

			//Increase curnum by one
			curnum += 1;
		}

		//Check if total equals num, if so then it is perfect
		if( num == total )
			isPer = 1;

		//Print out number if it is perfect
		if( isPer == 1 )
			printf("%d\n", num);

		//Increase num by one
		num += 1;
	}
}