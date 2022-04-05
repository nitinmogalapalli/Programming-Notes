/*program for declaring a structure*/
struct sample_data
{
char name[10];
int id;
float avg;
};
struct date
{
int day;
int month;
int year;
};
main()
{
struct sample_data student;
struct date today;
clrscr();
printf("enter data into the student structure:\n");
printf("enter name:");
scanf("%s",&student.name);
printf("enter id:");
scanf("%d",&student.id);
printf("enter average:");
scanf("%f",&student.avg);
printf("enter today's date(day/month/year):");
scanf("%d%d%d",&today.day,&today.month,&today.year);
printf("the values in the student structure are:\n");
printf("%s%d%f",student.name,student.id,student.avg);
printf("\n todays date is:\"%d-%d-%d\"",today.day,today.month,today.year);
getch();
}