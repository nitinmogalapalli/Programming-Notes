/* program to find the sum of two numbers if they are positive */

#include<stdio.h>
#include<conio.h>

void main()
{
	int n1, n2;
	clrscr();

	/* Reading two numbers...*/
	printf("Enter two integral numbers(with comma separated): \n");
	scanf("%d,%d",&n1, &n2);

	/* finding the elements are positive to find the sum...*/
	(n1 > 0) ? ( (n2 > 0) ? printf("The Sum is %d...",(n1 + n2)) : printf("%d is NOT a positive no...", n2) ) : printf("%d is NOT a positive no...", n1) ;

	getch();
}
