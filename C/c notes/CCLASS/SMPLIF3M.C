/* program for understanding the SIMPLE IF
	by finding the max among three values */

#include <stdio.h>
#include <conio.h>
main()
{
	int a, b, c;
	clrscr();
	{
	printf("Enter three numbers to find greatest among them...\n");
	scanf("%d%d%d",&a, &b, &c);
	}
	/* simple if checking a condition...*/
	if( (a>b) && (a>c) )
	{
		printf("Greatest is: %d", a);
	}

	if( (b>a) && (b>c) )
	{
		printf("Greatest is: %d", b);
	}

	if( (c>a) && (c>b) )
	{
		printf("Greatest is: %d", c);
	}

	if( (a == b) && (b == c) )
	{
		printf("They are EQUAL...");
	}

	getch();
}

/*	Output:
	Enter two numbers to find greatest among them...
	58
	97
	Greatest is: 97

				*/