/* program to understand the for looping statement */

#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();

	printf("The ASCII numbers for the characters are:\n");

	for(i=0;i<128;i++)
	{
		printf("%3d ->%1c ", i, i);
	}
	printf("\nTo continue enter any key...");
	getch();
	clrscr();
	printf("\n");
	for(i=128;i<=255;i++)
	{
		printf("%4d -> %c ",i,i);
	}
	getch();
}