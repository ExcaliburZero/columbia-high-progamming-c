//Chris Wells 2015
//956335
//November 19, 2014
//file_encrypt.c
//Purpose: To encrypt a file.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <time.h>

//Global file stuff
FILE *in;	//Input
FILE *fp;	//Output
time_t now;

//Begin main function
void main()
{
	char	reg[10000];	//Declare string to store the regular, unencrypted text
	char	enc[10000];	//Declare string to store the encrypted text
	char	name[100];	//Declare string to store the name of the file to encrypt
	char	out[100];	//Declare string to store the name of the file to encrypt
	int	i = 0;	//Initialize counter variable

	//Request from user the name of the file to encrypt
	printf("Input file name: ");
	scanf("%s", &name);

	//Request from user the name of the file to output to
	printf("Output file name: ");
	scanf("%s", &out);

	//Open encrypted text
	time(&now);

	in = fopen(name, "r");
	fscanf(in,"%[^\n]", reg);
	fclose(in);

	//Request text from user
	//printf("Please enter the text to be encrypted: ");
	//scanf("%[^\n]s", &reg);

	while( reg[i] != 0 )
	{
		//Shift character up five values and put it into the enc string
		enc[i] = reg[i] + 5;

		//Increase counter variable
		i += 1;
	}

	//Print out encrypted text
	printf("\n");
	printf("%s\n\n", enc);

	//Save encrypted text to file
	time(&now);

	fp = fopen(out, "w");
	fprintf(fp, "%s", enc);
	fclose(fp);
}