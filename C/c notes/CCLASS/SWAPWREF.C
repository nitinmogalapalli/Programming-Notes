/* program to swap two numbers by passing references */

#include<stdio.h>
#include<conio.h>

void swap(int *v1, int *v2);

void main()
{
	int a, b;
	clrscr();
	/* Reading two values to swap */
	printf("Enter two values to swap: \n");
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d", &b);

	/* Calling Swap function with references */
	swap(&a, &b);

	printf("The values in a and b are: \na: %d\nb: %d",a,b);
	getch();

}

void swap(int *v1, int *v2)
{
	int temp;
	temp = *v1;
	*v1 = *v2;
	*v2 = temp;
}