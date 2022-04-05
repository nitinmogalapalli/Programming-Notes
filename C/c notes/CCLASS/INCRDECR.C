
/* program to understand Increment and decrement operators */
/* pre : ++(increment), --(decrement)
   post: (increment)++, (decrement) --
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int value = 5, ele = 10;
	int result = 0;
	clrscr();

	printf("Initial Values of value : %d, and ele : %d", value, ele);
	result = value++ + --ele;
	printf("\nResult of post incre and pre decre of value and ele is: %d", result);
	printf("\nValues after post incre of value : %d, and pre decre of ele : %d", value, ele);

	result = ++value + ele--;
	printf("\nResult of pre incre and post decre of value and ele is: %d", result);
	printf("\nValues after pre incre of value : %d, and post decre of ele : %d", value, ele);

	getch();
}
