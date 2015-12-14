//Chris Wells 2015
//956335
//September 29, 2014
//squaresandcubes.c
//Purpose: Calculate the squares and cubes of the integers from 1 to 10, and print the values in a table.

#include <stdio.h>

//Begin main method
void main()
{
	int	sq, cu;	//Declare integer variables to store squares and cubes
	int	num = 0;	//Initialize current number integer

	//Output table header
	printf("-------------------\n");
	printf("|Number|Square|Cube");

	//Calculate and output zeros
	sq = num * num;
	cu = num * num * num;
	printf("\n|%d     |%d     |%d", num, sq, cu);

	//Calculate and output ones
	num = num + 1;
	sq = num * num;
	cu = num * num * num;
	printf("\n|%d     |%d     |%d", num, sq, cu);

	//Calculate and output twos
	num = num + 1;
	sq = num * num;
	cu = num * num * num;
	printf("\n|%d     |%d     |%d", num, sq, cu);

	//Calculate and output threes
	num = num + 1;
	sq = num * num;
	cu = num * num * num;
	printf("\n|%d     |%d     |%d", num, sq, cu);

	//Calculate and output fours
	num = num + 1;
	sq = num * num;
	cu = num * num * num;
	printf("\n|%d     |%d    |%d", num, sq, cu);

	//Calculate and output fives
	num = num + 1;
	sq = num * num;
	cu = num * num * num;
	printf("\n|%d     |%d    |%d", num, sq, cu);

	//Calculate and output sixes
	num = num + 1;
	sq = num * num;
	cu = num * num * num;
	printf("\n|%d     |%d    |%d", num, sq, cu);

	//Calculate and output sevens
	num = num + 1;
	sq = num * num;
	cu = num * num * num;
	printf("\n|%d     |%d    |%d", num, sq, cu);

	//Calculate and output eights
	num = num + 1;
	sq = num * num;
	cu = num * num * num;
	printf("\n|%d     |%d    |%d", num, sq, cu);

	//Calculate and output nines
	num = num + 1;
	sq = num * num;
	cu = num * num * num;
	printf("\n|%d     |%d    |%d", num, sq, cu);

	//Calculate and output tens
	num = num + 1;
	sq = num * num;
	cu = num * num * num;
	printf("\n|%d    |%d   |%d", num, sq, cu);

	//Output table footer
	printf("\n-------------------");
}