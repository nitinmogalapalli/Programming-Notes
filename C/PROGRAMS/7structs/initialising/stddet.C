#include<stdio.h>
#include<conio.h>
struct student
{
    int sno;
    char name[20];
    float avg;
};
void main()
{
     struct student s={123,"VANI",83.53};
     clrscr();
     printf("students details are:\n");
     printf("student s.no is:%d\nstudent name:%s\naverage is:%f",s.sno,s.name,s.avg);
     getch();
}