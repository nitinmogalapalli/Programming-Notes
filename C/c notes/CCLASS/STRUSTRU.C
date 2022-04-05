/* program to understand the structures inside another structure */
#include<stdio.h>
#include<conio.h>

void main()
{
	struct Student
	{
		int rollno;
		char *name;
		struct DateofBirth
		{
			int day, month, year;
		}DOB;
	};

	struct Student std[10];
	int i, nos;
	clrscr();
	/* Reading no. of students */
	printf("Enter no. of Students(<10): ");
	scanf("%d", &nos);

	/* Reading the students info */
	printf("Enter %d students information: \n", nos);
	for( i=0; i<nos; i++)
	{
		printf("\nEnter Student %d info:\n", i);
		printf("Roll no: ");
		scanf("%d", &std[i].rollno);
		printf("Name: ");
		flushall();
		gets(std[i].name);
		printf("D.O.B(d/m/y): ");
		scanf("%d/%d/%d", &std[i].DOB.day, &std[i].DOB.month, &std[i].DOB.year);
	}

	/* Print a particular student information */
	printf("Enter a student no from 1 to %d: ", nos);
	scanf("%d", &nos);
	printf("Student %d information:\n", nos--);
	printf("Roll no: %d\nName: %s\nD.O.B: %d/%d/%d",
	std[nos].rollno, std[nos].name,
	std[nos].DOB.day, std[nos].DOB.month, std[nos].DOB.year);
	getch();
}