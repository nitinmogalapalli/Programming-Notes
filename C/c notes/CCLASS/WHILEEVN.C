/* program to print even numbers from 1 to 10 numbers */
#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();

	/* printing even numbers */
	i = 1;
	while( i <= 10 )
	{
		if( i%2 == 0 )
			printf("%3d", i);
		i++;
	}
	getch();
}