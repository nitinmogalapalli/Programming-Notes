main()
{
int i,b,p,r=1;
clrscr();
printf("enter base and power\n");
scanf("%d%d",&b,&p);
for(i=1;i<=p;i++)
{
r=r*b;
}
printf("result is:%d",r);
getch();
}