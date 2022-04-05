/* program to use a string function: strcpy(destination, source) */
#include<string.h>
#include<stdio.h>
#include<conio.h>

main()
{
	char str1[20], str2[10] ;
	clrscr();

	puts("Enter two strings: ");
	printf("String 1: ");
	gets(str1);

	printf("String 2: ");
	gets(str2);

	/* copying the string 2 to the string 1 using strcpy function */
	strcpy(str1, str2);

	puts("The strings after copying: ");
	printf("String 1: ");
	puts(str1);

	printf("String 2: ");
	puts(str2);
	getch();
}