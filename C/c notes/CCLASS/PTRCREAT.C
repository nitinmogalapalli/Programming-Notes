/* program to understand the pointers */

#include<stdio.h>
#include<conio.h>
void main()
{
	int var1 = 10;
	int *ip; /* pointer declaration */
	clrscr();

/* pointer assignment with the address of the variable of the same type */
	ip = &var1;

/* Accessing the values and address stored using the pointer*/

	printf("The Address of the pointer IP is: %p, and the value is: %d",ip,*ip);
	getch();
}