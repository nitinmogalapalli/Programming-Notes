/* program to understand the usage of goto */
#include<stdio.h>
#include<conio.h>

void main()
{
	int i = 4;
	clrscr();
	L1:
	printf("From lable One...\n");
	printf("....");
	if(i>2)
	{
		i--;
		goto L1;
	}
	else
	{
		printf("Going to Lable Two...\n");
		goto L2;
	}
	printf("This will not be executed...\n");
	L2:
	printf("From Lable Two...\n");
	getch();

}