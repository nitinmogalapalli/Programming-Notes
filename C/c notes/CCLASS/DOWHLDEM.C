/* Program to print 1 to 10 numbers using do-while loop */

#include<stdio.h>
#include<conio.h>

void main()
{
	int i = 1;
	clrscr();

	printf("The Numbers from 1 to 10 are:\n");

	do
	{
		printf("%d\n", i);
		i = i + 1;

	}while( i <= 10 );

	getch();
}