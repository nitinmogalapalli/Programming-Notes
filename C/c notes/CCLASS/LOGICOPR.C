/*program to understand logical operators (&&,||,!) */

#include <stdio.h>
#include <conio.h>
main()
{
	int a1,a2,a3;

	a1 = 3;
	a2 = 2;
	a3 = 4;
	clrscr();
	/* Working with Logical And(&&) */
	printf("Result:\n1. For True,\n0. For False.\n");
	printf("%d is greater than %d and %d --> Result:  %d\n",a1,a2,a3,(a1>a2 && a1>a3));
	printf("%d is greater than %d and %d --> Result:  %d\n",a2,a1,a3,(a2>a1 && a2>a3));
	printf("%d is greater than %d and %d --> Result:  %d\n",a3,a1,a2,(a3>a1 && a3>a2));

	/* Working with Logical OR(||) */
	printf("%d is greater than any of %d or %d --> Result:  %d\n",a1,a2,a3,(a1>a2 || a1>a3));

	/* Using Logical NOT (!) */
	printf("%d is Not greater than %d --> Result: %d\n",a1,a2,!(a1>a2));
	getch();
}