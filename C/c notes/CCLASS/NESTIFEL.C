/* program to find the greatest among the three numbers
using Nested IF-ELSE */

#include<stdio.h>
#include<conio.h>

main()
{
	int a1, a2, a3;
	clrscr();
	printf("Enter three numbers to find greatest: \n");
	scanf("%d%d%d",&a1, &a2, &a3);

	/* Finding greatest using nested if-else statements */
	if( a1 > a2 )
	{
		if( a1 > a3 )
		{
			printf("%d is greater value...\n", a1);
		}
		else
		{
			printf("%d is greater value...\n", a3);
		}
	}
	else
	{
		if( a2 > a3 )
		{
			printf("%d is greater value...\n", a2);
		}
		else
		{
			printf("%d is greater value...\n", a3);
		}
	}
	getch();
}