/* program to understand the usage of else-if laddar statement */
#include <stdio.h>
#include <conio.h>

main()
{
	int color;
	clrscr();
	printf("Enter a number between 1 to 5...\n");
	scanf("%d",&color);

	if(color==1)
	{
		textcolor(GREEN);
		cprintf("1 for GREEN...");
	}
	else if(color==2)
	{
		textcolor(BLUE);
		cprintf("2 for BLUE...");
	}
	else if(color==3)
	{
		textcolor(LIGHTGRAY);
		cprintf("3 for LIGHTGRAY...");
	}
	else if(color==4)
	{
		textcolor(WHITE);
		cprintf("4 for WHITE...");
	}
	else if(color==5)
	{
		textcolor(YELLOW);
		cprintf("5 for YELLOW...");
	}
	else
	{
		textcolor(RED);
		cprintf("you entered a WRONG number...");
	}
	getch();
}

/*
	Output:
		Enter a number between 1 to 5...
		4
		4 for BLACK...
				*/
