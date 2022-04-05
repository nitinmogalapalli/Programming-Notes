/* program to print a multiplication table for a given value */

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, table;
	clrscr();
	/* reading a table value */
	printf("Enter a table number to print: ");
	scanf("%3d", &table);

	/* printing the table */
	i = 1;
	while( i <= 12 )
	{
		printf("%-3d X %3d = %3d\n", table, i, table*i);
		i++;
	}
	getch();
}
