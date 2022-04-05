
/* Program to perform operations using Assignment operators

	=, +=, -=, *=, /=, %=

*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 20;
	clrscr();

	printf("Working on ASSIGNMENT OPERATORS ....\n");

	/* Using Assignment operator */
	a = 35;
	printf("After Assigning the value to \'a\' is : %d\n", a);

	/* Using += Operator */
	a += 10;  /* This is equals to the expression a = a + 10; */
	printf("After using += 10 on \'a\' is : %d\n", a);

	/* Using -= Operator */
	a -= 10; /* This is equals to the expression a = a + 10; */
	printf("After using -= 10 on \'a\' is : %d\n", a);

	/* Using *= Operator */
	a *= 10; /* This is equals to the expression a = a * 10; */
	printf("After using *= 10 on \'a\' is : %d\n", a);

	/* Using /= Operator */
	a /= 10; /* This is equals to the expression a = a / 10; */
	printf("After using /= 10 on \'a\' is : %d\n", a);

	/* Using %= Operator */
	a %= 10; /* This is equals to the expression a = a % 10; */
	printf("After using %= 10 on \'a\' is : %d\n", a);

	getch();
}