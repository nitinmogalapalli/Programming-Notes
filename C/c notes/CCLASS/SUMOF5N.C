/* program to find the sum of 5 given values */
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e, sum=0;
	clrscr();

	printf("Enter 5 Values:\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

	sum = sum + a + b + c + d + e;
	printf("The Sum of the above numbers: %d", sum);
	getch();
}