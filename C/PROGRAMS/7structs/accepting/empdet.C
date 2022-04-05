#include<stdio.h>
#include<conio.h>
struct emp
{
    int eid;
    char name[20];
    float sal;
};
void main()
{
     struct emp e;
     clrscr();
     printf("enter employee eid,name,sal\n");
     scanf("%d%s%f",&e.eid,&e.name,&e.sal);
     printf("employee details are:\n");
     printf("employee eid is:%d\nname:%s\nsalary is:%f",e.eid,e.name,e.sal);
     getch();
}