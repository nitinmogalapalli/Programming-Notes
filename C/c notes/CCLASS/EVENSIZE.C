/* program to print even numbers upto the given number */

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, num;
	clrscr();

	printf("Enter the number to print even numbers upto that no: ");
	scanf("%4d", &num);

	/* printing even numbers from 1 to the given size */
	i = 0;
	while( i <= num )
	{
		if( i%2 == 0 )
			printf("%5d", i);
		i++;
	}
	getch();
}