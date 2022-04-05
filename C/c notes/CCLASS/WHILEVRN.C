/* Program to print even numbers in the given range using While Loop */

#include<stdio.h>
#include<conio.h>

void main()
{
	int i, range;
	clrscr();

	/* Reading Range */
	printf("Enter Range to print even numbers upto it: ");
	scanf("%d", &range);

	/* Printing Even numbers from 1 to the given range */
	i = 1;
	while( i <= range )
	{
		if( (i % 2) == 1 )
			printf("%3d", i);
		i++;
	}
	getch();

}