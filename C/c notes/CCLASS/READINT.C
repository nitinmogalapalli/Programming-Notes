/* program that read an integer using scanf,
   and prints using printf 	*/

#include<stdio.h>
#include<conio.h>
main()
{
	int ivar;

	clrscr();
	printf("Enter an integer: ");
	scanf("%i", &ivar);

	printf("\nThe value you entered is: ");
	printf("%i", ivar);
	getch();
}
