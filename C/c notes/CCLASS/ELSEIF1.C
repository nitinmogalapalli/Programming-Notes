/* program to find the given two values are equal, or greater , or lesser */

#include<stdio.h>
#include<conio.h>

void main()
{
	int num1, num2;
	/* Reading two values */
	printf("Enter two values to check whether they are equal, greater, or lesser:\n");
	scanf("%d%d", &num1, &num2);

	if( num1 == num2 )
	{
		printf("The Entered values %d, %d are equal...", num1, num2);
	}
	else if( num1 > num2 )
	{
		printf("The %d is greater than of %d...", num1, num2);
	}
	else
	{
		printf("the %d is greater than of %d...", num2, num1);
	}
	getch();
}