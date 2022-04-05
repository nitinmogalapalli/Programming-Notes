/* program to define a structure and access members using dot operator */

struct student
{
	int rollno;
	char name[24];
	float average;
};

main()
{
	struct student std1,std2;
	clrscr();
	std1.rollno = 123;
	std2.rollno = 234;
	printf("Enter name of the two students:\n");
	gets(std1.name);
	gets(std2.name);
	printf("Enter averages of the two students:\n");
	scanf("%f%f",&std1.average,&std2.average);

	printf("The Details of the two students:\n");
	printf("Student 1:\nrollno: %d\nname: %s\naverage: %f",std1.rollno,std1.name,std1.average);
	printf("\n\nStudent 2:\nrollno: %d\nname: %s\naverage: %f",std2.rollno,std2.name,std2.average);
	getch();
}