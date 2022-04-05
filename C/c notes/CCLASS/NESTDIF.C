/* program for understanding the Nested IF */

#include <stdio.h>
#include <conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("Enter three numbers to find greatest among them...\n");
	scanf("%d%d%d",&a,&b,&c);
	/* nested if checking a condition...*/
	if( a>b )
	{
		if( a>c )
		{
			printf("Greatest is: %d",a);
		}
	}
	if( b>a )
	{
		if( b>c )
		{
			printf("Greatest is: %d",b);
		}
	}
	if( c>a )
	{
		if( c>b )
		{
			printf("Greatest is: %d",c);
		}
	}

	getch();
}

/*	Output:
	Enter three numbers to find greatest among them...
	54
	78
	64
	Greatest is: 78
				*/