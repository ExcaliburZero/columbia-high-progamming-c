//Chris Wells 2015
//956335
//October 17, 2014
//website_generator.c
//Purpose: To use an input file to generate a website

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

//Global file stuff
FILE *fi;	//Input
FILE *fp;	//Output
time_t now;
//time(&now);

//Begin main function
void main()
{
	char	input[10000];	//Declare string to take in the input file information
	char	webTitle[100];	//Declare string to store the title of the website
	char	webSub[100];	//Declare string to store the sub title of the website
	char	webBody[10000];	//Declare string to store the body content of the website
	char	output[10000];	//Declare string to store code to be outputted
	char	in[100];	//Declare string to store the name of the file to take in
	char	out[100];	//Declare string to store the name of the file to output

	//Request from user the name of the input file
	printf("Input file name: ");
	scanf("%s", &in);

	//Request from user the name of the file to output to
	printf("Output file name: ");
	scanf("%s", &out);

	//Open input file
	time(&now);

	fi = fopen(in, "r");
	fscanf(fi,"%[^\n]", webTitle);	//Title
	fgets(webSub, 10, fi);
	fscanf(fi,"%[^\n]", webSub);	//Subtitle
	fgets(webBody, 10, fi);
	fscanf(fi,"%[^\n]", webBody);	//Body Content
	fclose(fi);

	//Generate HTML code

	//HTML head
	strcat(output, "<!DOCTYPE html>\n");
	strcat(output, "<html>\n");
	strcat(output, "<title>\n");

	strcat(output, webTitle);
	strcat(output, "\n");

	strcat(output, "</title>\n");
	strcat(output, "<link rel=\"stylesheet\" href=\"style.css\" type=\"text/css\" />\n");

	//HTML Body
	strcat(output, "<body>\n");
	strcat(output, "<div id=\"title\">\n");

	strcat(output, webTitle);
	strcat(output, "\n");

	strcat(output, "</div>\n");
	strcat(output, "<div id=\"sub-title\">\n");

	strcat(output, webSub);
	strcat(output, "\n");

	strcat(output, "</div>\n");
	strcat(output, "<div id=\"content\">\n");

	strcat(output, webBody);
	strcat(output, "\n");

	strcat(output, "</div>\n");
	strcat(output, "<div id=\"footer\">\n");

	strcat(output, "<b>Updated:</b> ");
	strcat(output, ctime(&now));
	strcat(output, "\n");

	strcat(output, "</div>\n");
	strcat(output, "</body>\n");
	strcat(output, "</html>\n");

	//End of HTML

	//Save code to output file
	time(&now);

	fp = fopen(out, "w");
	fprintf(fp, "%s", output);
	fclose(fp);
}