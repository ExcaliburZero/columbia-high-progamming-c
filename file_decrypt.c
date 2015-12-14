//Chris Wells 2015
//956335
//November 19, 2014
//file_decrypt.c
//Purpose: To decrypt a file.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Global file stuff
FILE *fp;
time_t now;

//Begin main function
void main()
{
	char	reg[10000];	//Declare string to store the regular, unencrypted text
	char	enc[10000];	//Declare string to store the encrypted text
	char	name[100];	//Declare string to store the name of the file to decrypt
	int	i = 0;	//Initialize counter variable

	//Request text from user
	//printf("Please enter the text to be decrypted: ");
	//scanf("%[^\n]s", &enc);

	//Request from user the name of the file to decrypt
	printf("Input file name: ");
	scanf("%s", &name);

	//Open encrypted text
	time(&now);

	fp = fopen(name, "r");
	fscanf(fp,"%[^\n]", enc);
	fclose(fp);

	while( enc[i] != 0 )
	{
		//Shift character up five values and put it into the enc string
		reg[i] = enc[i] - 5;

		//Increase counter variable
		i += 1;
	}

	//Output decrypted text
	printf("\n%s\n\n", reg);
}