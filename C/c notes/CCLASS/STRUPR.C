/* program to convert string to UPPERCASE */
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char str[15], *strUPR;
	clrscr();

	puts("Enter a string to convert into UPPERCASE...");
	gets(str);

	strUPR = strupr(str);
	puts("The string after converting to uppercase is: ");
	puts(strUPR);
	getch();

}