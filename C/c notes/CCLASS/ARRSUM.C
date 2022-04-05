/* program to find the sum of values of given size */
#include<stdio.h>
#include<conio.h>
main()
{
	int arr[50], i, size, sum=0;
	clrscr();

	printf("Enter the size of values(<50):\n");
	scanf("%d",&size);

	printf("Enter %d values to find the sum: \n",size);
	for(i = 0; i < size; i++)
		scanf("%d",&arr[i]);

	for(i = 0; i< size; i++)
		sum = sum + arr[i];

	printf("The Sum of the above numbers: %d", sum);
	getch();
}