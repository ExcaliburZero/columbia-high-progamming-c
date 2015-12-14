//Chris Wells 2015
//956335
//October 16, 2014
//change_base.c
//Purpose: To convert a number from one base system to another base system (2-10, 16).

#include <stdio.h>
#include <math.h>

//Begin main function
void main()
{
	int	b1 = 0, b2 = 0;	//Initialize integer variables to store the bases
	int	pre[1000];	//Declare integer to store the starting number as an integer array
	int	pen[1000];	//Declare integer to store the ending number as an integer array
	int	rem;	//Declare integer variable to store values durring the base conversion process
	int	total = 0;	//Initialize variable to be used to help convert from base ten to the entered base
	char	num[1000], end[1000];	//Declare character arrays to store the entered number and the converted number
	int	i = 0, j;	//Initialize & declare counter variables

	//Request number from user
	printf("Please enter a number: ");
	scanf("%s", &num);

	//Request initial base from user
	while( ( b1 < 2 ) || ( ( b1 > 10 ) && ( b1 != 16 ) ) )
	{
		printf("Please enter the initial base (2-10, 16): ");
		scanf("%d", &b1);
	}

	//Request final base from user
	while( ( b2 < 2 ) || ( ( b2 > 10 ) && ( b2 != 16 ) ) )
	{
		printf("Please enter the final base (2-10, 16): ");
		scanf("%d", &b2);
	}

	//Output inputted number and base
	printf("%s in base %d = ", num, b1);

	//Convert num ro pre switching out A-F digits for their integer values
	while( num[i] != 0 )
	{

		//Convert character to integer and input it into the pre array
		switch( num[i] )
		{
		case 48:
			pre[i] = 79;	//Convert zeroes to a nonsense number to allow for pre-end zeros
			break;
		case 49:
			pre[i] = 1;
			break;
		case 50:
			pre[i] = 2;
			break;
		case 51:
			pre[i] = 3;
			break;
		case 52:
			pre[i] = 4;
			break;
		case 53:
			pre[i] = 5;
			break;
		case 54:
			pre[i] = 6;
			break;
		case 55:
			pre[i] = 7;
			break;
		case 56:
			pre[i] = 8;
			break;
		case 57:
			pre[i] = 9;
			break;
		case 65:
			pre[i] = 10;
			break;
		case 66:
			pre[i] = 11;
			break;
		case 67:
			pre[i] = 12;
			break;
		case 68:
			pre[i] = 13;
			break;
		case 69:
			pre[i] = 14;
			break;
		case 70:
			pre[i] = 15;
			break;
		default:
			break;
		}

		//Increase counter variable
		i += 1;
		
	}

	//Convert pre to base 10
	for( j = 0; pre[j] != 0; j += 1 )
	{
		//Handle pre end zeros
		if( pre[j] == 79 )
		{
			pre[j] = 0;
		}

		 total = total + pre[j] * pow(b1, (i - 1 - j));
	}

	//Resent counter variables
	i = 0;
	j = 0;

	//Convert from base 10 to base b2
	while( total > 0 )
	{
		pen[i] = total % b2;
		total = total / b2;

		//Increase counter variable
		i += 1;
	}

	//Take values from integer array and transfer them to a character array
	while( i > 0 )
	{

		//Decrease counter variable
		i -= 1;

		//Move inters valuse into character array as their char values
		switch( pen[i] )
		{
			case 15:
				end[j] = 70;
				break;
			case 14:
				end[j] = 69;
				break;
			case 13:
				end[j] = 68;
				break;
			case 12:
				end[j] = 67;
				break;
			case 11:
				end[j] = 66;
				break;
			case 10:
				end[j] = 65;
				break;
			case 9:
				end[j] = 57;
				break;
			case 8:
				end[j] = 56;
				break;
			case 7:
				end[j] = 55;
				break;
			case 6:
				end[j] = 54;
				break;
			case 5:
				end[j] = 53;
				break;
			case 4:
				end[j] = 52;
				break;
			case 3:
				end[j] = 51;
				break;
			case 2:
				end[j] = 50;
				break;
			case 1:
				end[j] = 49;
				break;
			case 0:
				end[j] = 48;
				break;
			default:
				break;
		}

		//Increase counter variable
		j += 1;
	}

	//Print out end number and base
	printf("%s in base %d", end, b2);

}