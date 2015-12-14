//Chris Wells 2015
//956335
//September 19, 2014
//average.c
//Purpose: To take ten test scores between 0 and 100 and calculated the average, then out put it to the user

#include <stdio.h>

void main()
{
	int	scr1, scr2, scr3, scr4, scr5, scr6, scr7, scr8, scr9, scr10;	//Declare score integer variables
	int	sum, avg;	//Declare sum and average integer variables

	//Request first test score from user
	printf("Enter the first test score: ");
	scanf("%d", &scr1);

	//Request second test score from user
	printf("Enter the second test score: ");
	scanf("%d", &scr2);

	//Request third test score from user
	printf("Enter the third test score: ");
	scanf("%d", &scr3);

	//Request fourth test score from user
	printf("Enter the fourth test score: ");
	scanf("%d", &scr4);

	//Request fifth test score from user
	printf("Enter the fifth test score: ");
	scanf("%d", &scr5);

	//Request sixth test score from user
	printf("Enter the sixth test score: ");
	scanf("%d", &scr6);

	//Request seventh test score from user
	printf("Enter the seventh test score: ");
	scanf("%d", &scr7);

	//Request eighth test score from user
	printf("Enter the eighth test score: ");
	scanf("%d", &scr8);

	//Request ninth test score from user
	printf("Enter the ninth test score: ");
	scanf("%d", &scr9);

	//Request tenth test score from user
	printf("Enter the tenth test score: ");
	scanf("%d", &scr10);

	//Calculate sum and average
	sum = scr1 + scr2 + scr3 + scr4 + scr5 + scr6 + scr7 + scr8 + scr9 + scr10;
	avg = sum / 10;

	//Output sum and average to user
	printf("Sum:     %d", sum);
	printf("\nAverage: %d", avg);
}