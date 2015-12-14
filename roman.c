//Chris Wells 2015
//956335
//October 29, 2014
//roman.c
//Purpose: To convert an unkown number of integers [1,20] into roman numerals.

#include <stdio.h>

//Begin main function
void main()
{
	int	num;	//Declare integer to store entered number
	int	cont = 1;	//Initialize integer to store whether or not to continue (1 = yes, 0 = no)

	//Main while loop
	while( cont == 1 )
	{
		//Request integer from user
		printf("Please enter an integer [1,20]: ");
		scanf("%d", &num);

		//Print roman numeral for entered number
		switch( num )
		{
			case 1:
				printf("I\n");
				break;
			case 2:
				printf("II\n");
				break;
			case 3:
				printf("III\n");
				break;
			case 4:
				printf("IV\n");
				break;
			case 5:
				printf("V\n");
				break;
			case 6:
				printf("VI\n");
				break;
			case 7:
				printf("VII\n");
				break;
			case 8:
				printf("VIII\n");
				break;
			case 9:
				printf("IX\n");
				break;
			case 10:
				printf("X\n");
				break;
			case 11:
				printf("XI\n");
				break;
			case 12:
				printf("XII\n");
				break;
			case 13:
				printf("XIII\n");
				break;
			case 14:
				printf("XIV\n");
				break;
			case 15:
				printf("XV\n");
				break;
			case 16:
				printf("XVI\n");
				break;
			case 17:
				printf("XVII\n");
				break;
			case 18:
				printf("XVIII\n");
				break;
			case 19:
				printf("XIX\n");
				break;
			case 20:
				printf("XX\n");
				break;
			default:
				printf("The entered number is not in the range of [1,20].\n");
				break;
		}

		//Ask if user wishes to continue
		printf("Would you like to continue? (1 = yes, 0 = no): ");
		scanf("%d", &cont);
	}
}