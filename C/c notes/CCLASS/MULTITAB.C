/* program to print multiple tables using nested loops */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	clrscr();

	/* printing multiple tables from 1 to 5 */
	i = j = 1;
	while( i <= 12 )
	{
		j = 1;
		while( j <= 5 )
		{
			printf("%2d X %2d = %3d\t", j , i, j*i );
			j++;
		}
		printf("\n");
		i++;
	}
	getch();
}