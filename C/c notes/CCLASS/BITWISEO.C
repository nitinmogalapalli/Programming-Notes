/* program: To Understand the Bitwise operators */

#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 2, b = 3;
	clrscr();

	printf("Using BITWISE OPERATORS...\n");
	/* Using Bitwise AND */
	printf("After performing a & b : %d\n", (a & b));

	/* Using Bitwise OR */
	printf("After Performing a | b : %d\n", (a | b));

	/* Using Bitwise XOR */
	printf("After Performing a ^ b : %d\n", (a ^ b));

	/* Using Bitwise LEFT SHIFT */
	printf("After Performing a << 2 : %d\n", (a << 2));

	/* Using Bitwise RIGHT SHIFT */
	printf("After Performing a >> 2 : %d\n", (a >> 2));

	getch();
}