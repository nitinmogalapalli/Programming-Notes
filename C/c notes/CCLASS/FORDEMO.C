 /* program to understand the usage of For loop

	printing 10 to 1 numbers
*/
#include<stdio.h>
#include<conio.h>

main()
{
	int a ;
	clrscr();
	printf("Printing 1 to 10 numbers using while loop\n");
	for( a = 10; a >= 1; a-- )
	{
		printf("%d\n", a);
	}
	getch();
}