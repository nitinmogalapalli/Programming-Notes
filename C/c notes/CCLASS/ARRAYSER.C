/* program to search a given element in the list of values */

#include<stdio.h>
#include<conio.h>

void main(void)
{
	int list[20], size, i, search, found=0;
	clrscr();

	/* Reading the size of the list */
	printf("Enter the number of elements in the list: ");
	scanf("%d", &size);

	/* Reading the list of values */
	printf("Enter %d values to the list\n", size);
	for( i=0; i < size; i++)
		scanf("%d", &list[i]);

	/* Reading the search element */
	flushall();
	printf("Enter the search element: ");
	scanf("%d", &search);

	/* Search the element in the list */
	for( i=0; i < size; i++)
	{
		if( list[i] == search )
		{
			found = 1;
			break;
		}
	}

	if( found == 1 )
	{
		textcolor(GREEN);
		cprintf("The element %d is FOUND...", search);
	}
	else
	{
		textcolor(RED);
		cprintf("The element %d is NOT FOUND..!!!",search);
	}
	getch();
}