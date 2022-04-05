/* program to find maximum in the list of values */

#include<stdio.h>
#include<conio.h>
main()
{
	int list[15], size, i, max ;

	clrscr();
	while(1)
	{
		printf("Enter no of values ( <15): ");
		scanf("%d",&size);
		if( (size <= 15 ) && (size > 0) )
			break;
	}

	printf("Enter %d elements to find Maximum...\n",size);
	for(i = 0; i < size; i++)
		scanf("%d",&list[i]);

	max = list[0];
	for(i = 1; i < size; i++)
	{
		if( max < list[i])
			max = list[i];
	}

	printf("The Maximum of the list: %d",max);
	getch();
}