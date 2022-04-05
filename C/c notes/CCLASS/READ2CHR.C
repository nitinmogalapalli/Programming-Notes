/* Program to read two characters using getchar(), and printing using putchar() */

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch1, ch2;
	clrscr();

	puts("Enter Two Characters:");
	ch1 = getchar();
	flushall();
	ch2 = getchar();

	puts("The characters you entred: ");
	putchar(ch1);
	putchar(ch2);
}
