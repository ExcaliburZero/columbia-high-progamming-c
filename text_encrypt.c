//Chris Wells 2015
//956335
//November 19, 2014
//text_encrypt.c
//Purpose: To encrypt text

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
	int	i = 0;	//Initialize counter variable

	//Open encrypted text
	time(&now);

	in = fopen("text_encrypt_source.txt", "r");
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

	fp = fopen("text_encrypt_encrypted.txt", "w");
	fprintf(fp, "%s", enc);
	fclose(fp);

	/*i = -1;
	while( enc[i] != 0 )
	{
		//Shift character up five values and put it into the enc string
		enc[i] = enc[i] - 5;

		//Increase counter variable
		i += 1;
	}

	printf("%s\n\n", reg);
	printf("%s\n\n", enc);
	printf("%d", i);*/
}