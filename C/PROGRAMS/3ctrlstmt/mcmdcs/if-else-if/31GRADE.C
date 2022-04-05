


#include<stdio.h>
#include<conio.h>
void main()
{
int t,h,e,m,sc,so,tot;
float avg;
clrscr();
printf("enter subject marks\n");
scanf("%d%d%d%d%d%d",&t,&h,&e,&m,&sc,&so);
tot=t+h+e+m+sc+so;
avg=tot/6;
printf("total marks obtained:%d\naverage is:%f\n",tot,avg);
if(avg>75)
{
printf("A grade");
}
else if(avg>60)
{
printf("B grade");
}
else if(avg>50)
{
printf("C grade");
}
else if(avg>35)
{
printf("D grade");
}
else
{
printf("NO grade");
}
getch();
}