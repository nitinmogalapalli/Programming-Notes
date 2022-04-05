/* program to swap two numbers using temporary variable */
#include<stdio.h>
#include<conio.h>
main()
{
	int a, b, c;

	clrscr();
	printf("Enter Two values to swap:\n");
	scanf("%d%d",&a,&b);

	printf("Before Swapping: The values in \na : %d\nb : %d\n",a,b);

	c = a;
	a = b;
	b = c;

	printf("After Swapping: The Values in \na : %d\nb : %d\n",a,b);
	getch();
}