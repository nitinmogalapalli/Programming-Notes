/* program to perform factorial using function recursion */

#include<stdio.h>
#include<conio.h>
int factrec(int);

void main()
{
	int fact;
	clrscr();
	/* Reading a number to find factorial */
	printf("Enter a number to find factorial: ");
	scanf("%d", &fact);

	/* calling the recursive factorial fucntion */
	fact = factrec(fact);

	/* printing the resutl */
	printf("the Factorial of the given number is: %d", fact);
	getch();

}
int factrec(int n)
{
	if( (n == 1) || (n == 0) )
		return 1;
	else
		return n*factrec(n-1);
}