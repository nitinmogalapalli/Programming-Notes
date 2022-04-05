/* Program to print the GRADE of a student based on PERCENTAGE */

#include<stdio.h>
#include<conio.h>

void main()
{
	float percentage;
	char grade;

	clrscr();

	/* Reading Percentage of a student */
	printf("Enter percentage to find grade: ");
	scanf("%f", &percentage);

	/* Checking the Percentage */
	if( (percentage > 100.0) || (percentage < 0) )
	{
		textcolor(RED);
		cprintf("You Entered INVALID Percentage...!!!");
	}
	else
	{
		textcolor(GREEN);
		if( percentage >= 75 )
			cprintf("Student Got: \'A+\' Grade...");
		else if( percentage >= 65 )
			cprintf("Student Got: \'A\' Grade...");
		else if( percentage >= 55 )
			cprintf("Student Got: \'B+\' Grade...");
		else if( percentage >= 50 )
			cprintf("Student Got: \'B\' Grade...");
		else if( percentage >= 45 )
			cprintf("Student Got: \'C+\' Grade...");
		else if( percentage >= 35 )
			cprintf("Student Got: \'C\' Grade...");
		else
			cprintf("Student Got: \'D\' Grade...");
	}
	getch();
}