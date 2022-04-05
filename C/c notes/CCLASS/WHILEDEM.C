 /* program to understand the usage of while loop

	printing 1 to 10 numbers
*/
#include<stdio.h>
#include<conio.h>

main()
{
	int a = 1;
	clrscr();
	printf("Printing 1 to 10 numbers using while loop\n");
	while( a <= 10 )
	{
		printf("%d\n", a);
		a = a + 1;
	}
	getch();
}