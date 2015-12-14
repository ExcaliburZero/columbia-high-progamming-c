//Chris Wells 2015
//956335
//October 10, 2014
//converting_speeds.c
//Purpose: To convert an integer speed in kilometers per hour to miles per hour.

#include <stdio.h>

//Begin main function
void main()
{
	int	km, mi;	//Declare variables to store integer values for kilometers/hour and miles/hour

	//Request kilometers per hour value from user
	printf("Please enter an integer speed in kilometers per hour: ");
	scanf("%d", &km);

	//Convert km/hr value to mi/hr
	mi = (km * 621) / 1000;

	//Output values to user
	printf("%d km/hr is equivalent to %d miles/hr", km, mi);
}