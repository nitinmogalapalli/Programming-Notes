main()
{
int t,h,e,m,sc,so,tot;
float avg;
clrscr();
printf("enter subject marks\n");
scanf("%d%d%d%d%d",&t,&h,&e,&m,&sc,&so);
tot=t+h+e+m+sc+so;
avg=tot/6;
printf("total marks obtained:%d\naverage is:%f\n",tot,avg);
if(avg>=75&&avg<=100)
{
printf("A grade");
}
if(avg>=60&&avg<75)
{
printf("B grade");
}
if(avg>=50&&avg<60)
{
printf("C grade");
}
if(avg>=35&&avg<50)
{
printf("D grade");
}
if(avg<35)
{
printf("no grade");
}
getch();
}