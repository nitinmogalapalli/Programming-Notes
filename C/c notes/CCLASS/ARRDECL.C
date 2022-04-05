/* program to Declare, initialize, assign and access the Array */

#include<stdio.h>
#include<conio.h>
main()
{
	int arr[10] = {1,2} , i;
	clrscr();

	arr[2] = 3;
	arr[3] = 4;

	printf("Enter 10 values to the array...\n");
	for(i = 4; i < 10; i++)
		scanf("%d",&arr[i]);

	printf("The Values in the array are: \n");
	for(i = 0; i <= 9; i++)
		printf("%4d",arr[i]);
	getch();

}
