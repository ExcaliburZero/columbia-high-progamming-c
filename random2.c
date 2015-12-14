//Chris Wells 2015
//956335
//November 10, 2014
//random2.c
//Purpose: To further explore the math random command.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Begin main function
void main()
{
	int	x, i;
	int	count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0;
	int	rolls = 100;

	clrscr();

	srand(time(NULL));

	for(i = 1; i <= rolls; i += 1)
	{
		x = rand() % 6 + 1;
		printf("%d ", x);

		switch(x)
		{
			case 1:
				count1 += 1;
				break;
			case 2:
				count2 += 1;
				break;
			case 3:
				count3 += 1;
				break;
			case 4:
				count4 += 1;
				break;
			case 5:
				count5 += 1;
				break;
			case 6:
				count6 += 1;
				break;
		}
	}

	//Print counts
	printf("\n------\n");
	printf("1: %d\n", count1);
	printf("2: %d\n", count2);
	printf("3: %d\n", count3);
	printf("4: %d\n", count4);
	printf("5: %d\n", count5);
	printf("6: %d", count6);
	printf("\n------");

	sleep((unsigned int)3);
}