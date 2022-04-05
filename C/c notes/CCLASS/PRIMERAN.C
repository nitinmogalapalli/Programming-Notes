/* program to print the prime numbers from 1 to the given range */

#include<stdio.h>
#include<conio.h>

void main()
{
	int range, i, j, count;
	clrscr();

	/* Reading the range */
	printf("Enter the range to print prime no's: ");
	scanf("%4d", &range);

	/* printing the prime numbers */
	for( i=1; i <= range; i++)
	{
		count = 0;
		for( j=1; j <= (i/2); j++)
		{
			if( i%j == 0 )
			{
				count++;
				if(count>1)
				break;
			}
		}
		if( count == 1 )
			printf("%4d", i);
	}

	getch();
}