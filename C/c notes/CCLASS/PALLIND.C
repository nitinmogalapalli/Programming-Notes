
/* program to find whether the given number is pallindrome or not */
#include<stdio.h>
#include<conio.h>

main()
{
	long num,idigit,rev,check;
	clrscr();
	printf("Enter a number to find whether it is pallindrome or not: \n");
	scanf("%ld",&num);

	check = num;
	rev = 0;
	while( num != 0 )
	{
		idigit = num % 10;
		rev = (rev*10) + idigit;
		num = num / 10;
	}

	if( rev == check )
		printf("The Number is a Pallindrome...");
	else
		printf("The Number is NOT a PALLINDROME...");
	getch();
}