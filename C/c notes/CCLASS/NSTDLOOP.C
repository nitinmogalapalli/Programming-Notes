/* program that makes use of nested loops*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();

	printf("Printing Values from 10 to 1 (10 times) :\n");
	a=1;
	b=10;
	while(a<=10)
	{
		printf("time %2d -> ",a);
		while(b>=1)
		{
			printf("%-3d",b);
			b=b-1;
		}

		b=10;
		a=a+1;
		printf("\n");
	}

	getch();
}
/* output:
     values from 1 to 10 are:
     a=1:1 2 3 4 5 6 7 8 9 10
     a=2:1 2 3 4 5 6 7 8 9 10
	:
	:
	:
	:
    a=10: 1 2 3 4 5 6 7 8 910
*/
