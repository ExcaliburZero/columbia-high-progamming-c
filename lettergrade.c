//Chris Wells 2015
//956335
//September 24, 2015
//lettergrade.c
//Purpose: To determine a letter grade from a numerical grade

#include <stdio.h>

//Begin main function
void main()
{
	int	num;	//Declare integer that stores the number grade

	//Request number grade from user
	printf("Please enter the numerical grade: ");
	scanf("%d", &num);

	//Check is number is out of range of 100 - 0 inclusive
	if( ( num > 100 ) || ( num < 0 ) )
		printf("The number you entered is out of the range of 100-0.");
	//Check what letter grade corresponds to the numerical grade
	else	if( num < 60 )	//< 60
		printf("F");
	else	if( num < 63 )	//60-62
		printf("D-");
	else	if( num < 67 )	//60-66
		printf("D");
	else	if( num < 70 )	//67-69
		printf("D+");
	else	if( num < 73 )	//70-72
		printf("C-");
	else	if( num < 77 )	//73-76
		printf("C");
	else	if( num < 80 )	//77-79
		printf("C+");
	else	if( num < 83 )	//80-82
		printf("B-");
	else	if( num < 87 )	//83-86
		printf("B");
	else	if( num < 90 )	//87-89
		printf("B+");
	else	if( num < 93 )	//90-92
		printf("A-");
	else	if( num < 101 )	//93-100
		printf("A");
}