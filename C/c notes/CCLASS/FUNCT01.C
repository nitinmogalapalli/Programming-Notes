/* program to declare, define, and use a User defined function
   to perform addition operation
*/

#include<stdio.h>
#include<conio.h>

int addition(int a, int b);

int addition(int a , int b)
{
return (a+b);
}

void main(void)
{
	int a, b, result;
	clrscr();

	/* Reading two values to add */
	printf("Enter Two values to caliculate addition: \n");
	scanf("%d%d", &a, &b);

	result = addition(a, b);  /* function calling using two values */

	/* printing the result */
	printf("The addition of the above numbers is: %d", result);

	getch();
}