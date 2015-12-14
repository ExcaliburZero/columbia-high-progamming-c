//Chris Wells 2015
//956335
//November 19, 2014
//text_decrypt.c
//Purpose: To decrypt text

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
	int	i = 0;	//Initialize counter variable

	//Request text from user
	//printf("Please enter the text to be decrypted: ");
	//scanf("%[^\n]s", &enc);

	//Open encrypted text
	time(&now);

	fp = fopen("text_encrypt_encrypted.txt", "r");
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