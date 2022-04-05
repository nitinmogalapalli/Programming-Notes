/* program for understanding the SIMPLE IF
	finding the max among two values using simple if	*/

#include <stdio.h>
#include <conio.h>
main()
{
	int a,b;
	clrscr();
	{
	printf("Enter two numbers to find greatest among them...\n");
	scanf("%d%d",&a,&b);
	}
	/* simple if checking a condition...*/
	if( a>b )
	{
		printf("Greatest is: %d",a);
	}

	if( b>a )
	{
		printf("Greatest is: %d",b);
	}

	if( a == b)
	{
		printf("Both are EQUAL...");
	}
}

/*	Output:
	Enter two numbers to find greatest among them...
	58
	97
	Greatest is: 97

				*/