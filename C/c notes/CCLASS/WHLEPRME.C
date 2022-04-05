/* program to find the given is prime or not */

#include<stdio.h>
#include<conio.h>
void main()
{
	int prime, i, count;
	clrscr();

	printf("Enter a number to find whether it is prime or not: ");
	scanf("%4d", &prime);

	/* checking the number for prime */
	i = 1;
	count = 0;
	while( i <= prime )
	{
		if( prime%i == 0 )
			count++;
		i++;
	}
	if( count == 2 )
		printf("The Number( %d ) you entered is PRIME...", prime);
	else
		printf("The Number( %d ) you entered is NOT A PRIME...", prime);
	getch();
}