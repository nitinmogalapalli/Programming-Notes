/* program to understand the conditional operator(?:)


	Syntax:
		Expr1 ? Expr2 : Expr3
	Expr1: it is a condition(either logical or relational)
	Expr2: It is executed when the Expr1 gets true
	Expr3: It is executed when the Expr1 gets false
*/
/* Program to find the greatest among two numbers */

#include<stdio.h>
#include<conio.h>

main()
{
	int num1, num2, greater;
	num1 = 4;
	num2 = 6;

	clrscr();

	printf("Checking the two numbers(%d and %d) for greatest:\n",num1,num2);

	greater = (num1 > num2) ? num1 : num2;
	printf("%d is greater...",greater);

/*	(num1 > num2) ? printf("%d is greater",num1) : printf("%d is greater",num2); */
	getch();

}