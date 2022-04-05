/* program to use getch(), and putch(),  getchar(), and putchar() */

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();

	/* Reading and printing a character using getch() and putch() */
	puts("Enter a character: ");
	ch =  getch();
	puts("The character you entered is: ");
	putch(ch);

	/* Reading and printing a character using getchar() and putchar() */
	puts("\nEnter a character: ");
	ch = getchar();
	puts("The character you entered is : ");
	putchar(ch);
	getch();

}