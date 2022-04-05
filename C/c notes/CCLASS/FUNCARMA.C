/* program to pass array as an argument to the function */

#include<stdio.h>
#include<conio.h>

int arraymax(int arr[], int size);

void main()
{
	int arrmax[15], size, i, max;
	clrscr();
	/* Reading size of the elements */
	printf("Enter no. of elements to be stored(<=15): ");
	scanf("%d", &size);

	/* Reading elements to the array */
	for( i=0; i < size; i++)
	{
		scanf("%d", &arrmax[i]);
	}
	/* calling arraymax function to find max */
	max = arraymax(arrmax, size);

	/* printing the result */
	printf("The Maximum among the elements is: %d", max);
	getch();
}

int arraymax(int arr[], int size)
{
	int max, i;
	max = arr[0];

	for( i =0;  i< size; i++)
	{
		if( max < arr[i] )
			max = arr[i];
	}
	return max;
}