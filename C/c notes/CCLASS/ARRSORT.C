/* program to sort the list of values */

#include<stdio.h>
#include<conio.h>
main()
{
	int list[15], i, j, size, temp;

	clrscr();
	printf("Enter no of values (<15): ");
	scanf("%d",&size);

	printf("Enter %d elements...\n",size);
	for(i = 0; i < size; i++)
		scanf("%d",&list[i]);
	for( i = 0; i < size; i++)
	{
		for(j = i+1; j < size; j++)
		{
		if( list[i] > list[j] )
		{
			temp = list[i];
			list[i] = list[j];
			list[j] = temp;
		}
		}
	}

	printf("The list after sorting: \n");
	for( i = 0 ; i < size; i++)
		printf("%4d",list[i]);
	getch();

}