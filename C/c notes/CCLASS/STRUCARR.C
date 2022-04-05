/* program to use array of structures */

#include<stdio.h>
#include<conio.h>

struct student
{
	int rno;
	char name[15];
	float average;
};

struct dob
{
	int day, month, year;
};

void main()
{
	struct student s[10];
	struct dob d[10];

	int i;
	clrscr();

	/* reading 5 student information */
	printf("Enter student info: \nroll name avg dob in (date/mon/year)");
	for(i=0; i<5; i++)
	{
		scanf("%d", &s[i].rno);
		gets(s[i].name);
		scanf("%f", &s[i].average);
		scanf("%d/%d/%d", &d[i].day, &d[i].month, &d[i].year);
	}

	/* printing the student info you entered */
	printf("Enter which student info you want(from 1 to 5): ");
	scanf("%d", &i);
	i-= 1;
	printf("The Student info for %d is\n");
	printf("Rollno: %d\nName: %s\nAverage: %f\nD.O.B: %d/%d/%d", s[i].rno, s[i].name, s[i].average, d[i].day, d[i].month, d[i].year);
	getch();
}