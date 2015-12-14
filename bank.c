//Chris Wells 2015
//956335
//December 04, 2014
//bank.c
//Purpose: To simulate a small scale banking system.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

//Begin main function
void main()
{
	char	first1[20], last1[20], first2[20], last2[20], first3[20], last3[20];	//Declare strings to store the first and last names of users
	char	pass1[6], pass2[6], pass3[6];						//Declare string to store users' passwords
	char	firstc[20], lastc[20], passc[6];					//Declare strings to take in strings to check and or store into other strings
	int	val1 = 0, val2 = 0, val3 = 0;						//Initialize variables to store the money stored in the three accounts
	int	change;									//Initialize variable to store change to account money
	char	acc1 = 0, acc2 = 0, acc3 = 0;						//Initialize variables to store wether accounts one, two, and three have been created (1 = yes, 0 = no)
	int	curacc, curval;								//Declare variables to store what account the user is logged into and the value of that account
	int	accountloop = 1;							//Initialize variable to control acount loop
	int	accountcmd = -1;							//Initialize variable to take in command for account loop
	int	actionloop;								//Declare variable to control action loop
	int	actioncmd = -1;								//Initialize variable to take in command for action loop
	int	request;								//Declare counter variable to be used in the taking in of entered strings
	int	accr;									//Declare variable to request an account number from user
	char	let;									//Declare character varable to be used in the taking in of entered strings

	//Introduction to program
	printf("----------\n");
	printf("Welcome to bank.c!\n");
	printf("----------\n");
	sleep((unsigned int)2);

	//Main select account loop
	while( accountloop == 1 )
	{
		//Wait and clear screen
		sleep((unsigned int)4);
		clrscr();
		printf("----------\n");

		//Reset curacc to zero
		curacc = 0;

		//Request input from user
		for( accountcmd = -1; accountcmd <= 0; )
		{
			printf("Enter 1 to log in.\n");
			printf("Enter 2 to create an account.\n");
			printf("Enter 3 to end the program.\n");
			scanf("%d", &accountcmd);
		}

		//If log in
		if( accountcmd == 1 )
		{
			printf("----------\n");
			printf("~Login~\n");
			printf("----------\n");

			//First name
			printf("First Name: ");
			request = 0;
			getchar();
			while( ( ( let = getchar() ) != '\n' ) && ( request < 20 ) )
			{
				firstc[request] = let;
				request += 1;
			}
			firstc[request] = '\0';
			if( request >= 20 )
				while( ( let = getchar() ) != '\n' ) {}

			//Last name
			printf("Last Name: ");
			request = 0;
			while( ( ( let = getchar() ) != '\n' ) && ( request < 20 ) )
			{
				lastc[request] = let;
				request += 1;
			}
			lastc[request] = '\0';
			if( request >= 20 )
				while( ( let = getchar() ) != '\n' ) {}

			//Password
			printf("Password: ");
			request = 0;
			while( request < 6 )
			{
				while( ( ( let = getchar() ) == '\n' ) || ( isalnum(let) == 0 ) ) {}	//Not an enter key or a non alpha numeric
				passc[request] = let;
				request += 1;
			}
			lastc[request] = '\0';
			if( request >= 6 )
				while( ( let = getchar() ) != '\n' ) {}
			else
				let = getchar();

			//Check entered information
			if( ( strcmp( firstc, first1 ) == 0 ) && ( strcmp( lastc, last1 ) == 0 ) && ( strcmp( passc, pass1 ) == 0 ) )	//Account One
			{
				curacc = 1;
				curval = val1;
			}
			else if( ( strcmp( firstc, first2 ) == 0 ) && ( strcmp( lastc, last2 ) == 0 ) && ( strcmp( passc, pass2 ) == 0 ) )	//Account Two
			{
				curacc = 2;
				curval = val2;
			}
			else if( ( strcmp( firstc, first3 ) == 0 ) && ( strcmp( lastc, last3 ) == 0 ) && ( strcmp( passc, pass3 ) == 0 ) )	//Account Three
			{
				curacc = 3;
				curval = val3;
			}

			//If login was sucessful
			if( ( curacc > 0 ) && ( curacc < 4 ) )
			{
				printf("----------\n");
				printf("Login sucessful!\n");
				printf("----------\n");

				//Action loop
				actionloop = 1;
				while( actionloop == 1 )
				{
					//Wait and clear screen
					sleep((unsigned int)4);
					clrscr();

					//Find account's current value
					if( curacc == 1 )
						curval = val1;
					else if( curacc == 2 )
						curval = val2;
					else if( curacc == 3 )
						curval = val3;

					//Print account ballance
					printf("----------\n");
					printf("Account #%d\n", curacc);

					if( curacc == 1 )
						printf("%s %s", first1, last1);
					else if( curacc == 2 )
						printf("%s %s", first2, last2);
					else if( curacc == 3 )
						printf("%s %s", first3, last3);

					printf("\nBallance: $%d\n", curval);
					printf("----------\n");

					//Request input from user
					for( actioncmd = -1; actioncmd <= 0; )
					{
						printf("Enter 1 to log out.\n");
						printf("Enter 2 to deposit money to your account.\n");
						printf("Enter 3 to retrieve money from your account.\n");
						printf("Enter 4 to transfer money to another account.\n");
						scanf("%d", &actioncmd);
					}

					//If log out
					if( actioncmd == 1 )
					{
						actionloop = 0;
					}

					//If add money
					else if( actioncmd == 2 )
					{
						//Request from user amount of money to deposit
						for( change = -1; change < 0; )
						{
							printf("----------\n");
							printf("Deposit: ");
							scanf("%d", &change);
						}

						//Add money to account value
						if( curacc == 1 )
							val1 += change;
						else if( curacc == 2 )
							val2 += change;
						else if( curacc == 3 )
							val3 += change;
					}

					//If remove money
					else if( actioncmd == 3 )
					{
						//Request from user amount of money to remove
						for( change = -1; ( change < 0 ) || ( (curval - abs(change)) < 0 ); )
						{
							printf("----------\n");
							printf("Retrieve: ");
							scanf("%d", &change);
						}

						//Remove money from account value
						if( curacc == 1 )
							val1 -= change;
						else if( curacc == 2 )
							val2 -= change;
						else if( curacc == 3 )
							val3 -= change;
					}

					//If transfer money
					else if( actioncmd == 4 )
					{
						//Request from user amount of money to transfer
						for( change = -1; ( change < 0 ) || ( (curval - abs(change)) < 0 ); )
						{
							printf("----------\n");
							printf("Tranfer: ");
							scanf("%d", &change);
						}

						//Request from user what account to tranfer to
						for( accr = -1; (accr < 0) || (accr > 4) || (accr == curacc); )
						{
							printf("----------\n");
							printf("To account: ");
							scanf("%d", &accr);
						}

						printf("----------\n");

						//If specified account exists
						if( ((accr == 1) && (acc1 == 1)) || ((accr == 2) && (acc2 == 1)) || ((accr == 3) && (acc3 == 1)) )
						{
							//Take money out of user's account
							if( curacc == 1 )
							{
								val1 -= change;
								printf("Acc #1: %d\n", val1);
							}
							else if( curacc == 2 )
							{
								val2 -= change;
								printf("Acc #2: %d\n", val2);
							}
							else if( curacc == 3 )
							{
								val3 -= change;
								printf("Acc #3: %d\n", val3);
							}

							//Put money into other account
							if( accr == 1 )
							{
								val1 += change;
								printf("Acc #1: %d\n", val1);
							}
							else if( accr == 2 )
							{
								val2 += change;
								printf("Acc #2: %d\n", val2);
							}
							else if( accr == 3 )
							{
								val3 += change;
								printf("Acc #3: %d\n", val3);
							}
						}
						else
						{
							printf("The specified account does not exist.");
						}
					}
				}
			}
			else
			{
				printf("An account with that first name, last name, and password does not exist.\n");
			}

			printf("----------\n");
		}

		//If create account
		else if( accountcmd == 2 )
		{
			printf("----------\n");
			printf("~New Account~\n");
			printf("----------\n");

			//First name
			printf("First Name: ");
			request = 0;
			getchar();
			while( ( ( let = getchar() ) != '\n' ) && ( request < 20 ) )
			{
				firstc[request] = let;
				request += 1;
			}
			firstc[request] = '\0';
			if( request >= 20 )
				while( ( let = getchar() ) != '\n' ) {}

			//Last name
			printf("Last Name: ");
			request = 0;
			while( ( ( let = getchar() ) != '\n' ) && ( request < 20 ) )
			{
				lastc[request] = let;
				request += 1;
			}
			lastc[request] = '\0';
			if( request >= 20 )
				while( ( let = getchar() ) != '\n' ) {}

			//Password
			printf("Password: ");
			request = 0;
			while( request < 6 )
			{
				while( ( ( let = getchar() ) == '\n' ) || ( isalnum(let) == 0 ) ) {}	//Not an enter key or a non alpha numeric
				passc[request] = let;
				request += 1;
			}
			lastc[request] = '\0';
			if( request >= 6 )
				while( ( let = getchar() ) != '\n' ) {}
			else
				let = getchar();

			//Check what account will be created
			if( acc1 == 0 )	//Account One
			{
				strcpy( first1, firstc );
				strcpy( last1, lastc );
				strcpy( pass1, passc );
				acc1 = 1;
			}
			else if( acc2 == 0 )	//Account Two
			{
				strcpy( first2, firstc );
				strcpy( last2, lastc );
				strcpy( pass2, passc );
				acc2 = 1;
			}
			else if( acc3 == 0 )	//Account Three
			{
				strcpy( first3, firstc );
				strcpy( last3, lastc );
				strcpy( pass3, passc );
				acc3 = 1;
			}
			else
			{
				printf("Sorry, there are no more accounts availible.\n");
			}

			printf("----------\n");
		}

		//If end program
		else if( accountcmd == 3 )
		{
			printf("----------\n");
			//Set variable to exit main select account loop
			accountloop = 0;
		}
	}

	//Once program finishes print out table of account info
	printf("-------------------------");
	printf("\n|First\t|Last\t|Value\t|");
	printf("\n-------------------------");

	if( acc1 == 1 )
	{
		printf("\n|%s\t|%s\t|%d\t|", first1, last1, val1);
	}
	if( acc2 == 1 )
	{
		printf("\n|%s\t|%s\t|%d\t|", first2, last2, val2);
	}
	if( acc3 == 1 )
	{
		printf("\n|%s\t|%s\t|%d\t|", first3, last3, val3);
	}

	printf("\n-------------------------");
}