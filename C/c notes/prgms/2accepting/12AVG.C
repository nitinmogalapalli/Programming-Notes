main()
{
int a,b,c,d,e,tot;
float avg;
clrscr();
printf("enter five subject marks\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
tot=a+b+c+d+e;
avg=tot/5;
printf("total marks are:%d\naverage is:%f",tot,avg);
getch();
}