-

/* Program to use some functions from the conio.h header file */

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();

	/* set a text background colour */
	textbackground(GREEN);

	/* Reading a character */
	cprintf("Enter a character: ");
	flushall();
	ch = getchar();


	/* set text background as blue */
	textbackground(BLUE);

	/* Printing the character */
	cprintf("The Character you entred is: ");
	putchar(ch);

	getch();
}